LIB := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))
VERILATOR ?= verilator
BUILD_DIR ?= obj_dir
PRE_SRCS ?=
FST_FILE ?= $(BUILD_DIR)/sim.vcd

.PHONY: deps sim wave clean
deps:
ifneq ($(strip $(PRE_SRCS)),)
	cp -f $(PRE_SRCS) .
endif
sim: deps
	# obj_dir contiene rutas absolutas de la instalación de Verilator.
	# No puede reutilizarse al alternar entre macOS y el devcontainer Linux.
	rm -rf $(BUILD_DIR)
	$(VERILATOR) --binary --timing --trace -j 0 -Wno-UNUSEDSIGNAL -Wno-WIDTHEXPAND -Wno-UNDRIVEN \
		--top-module sim_top -Mdir $(BUILD_DIR) \
		+incdir+$(LIB) +define+TB_MODULE=$(TB) $(LIB)/sim_top.sv $(SRCS)
	$(BUILD_DIR)/Vsim_top
wave: sim
	@echo "Abrir $(abspath $(FST_FILE)) en Surfer/VaporView"
clean:
	rm -rf $(BUILD_DIR)
ifneq ($(strip $(PRE_SRCS)),)
	rm -f $(notdir $(PRE_SRCS))
endif
