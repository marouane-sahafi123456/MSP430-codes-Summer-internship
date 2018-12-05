################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
task.obj: ../task.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP430 Compiler'
	"D:/user doc/TexasInstrument/ccsv8/tools/compiler/ti-cgt-msp430_18.1.1.LTS/bin/cl430" -vmspx --data_model=restricted --use_hw_mpy=F5 --include_path="D:/user doc/TexasInstrument/ccsv8/ccs_base/msp430/include" --include_path="C:/Users/Admin/workspace_v8/task430_MSP430F5529" --include_path="C:/ti/bios_6_73_00_12/packages/ti/posix/ccs" --include_path="D:/user doc/TexasInstrument/ccsv8/tools/compiler/ti-cgt-msp430_18.1.1.LTS/include" --advice:power=all --define=__MSP430F5529__ -g --printf_support=minimal --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --abi=eabi --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU23 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="task.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-825065009:
	@$(MAKE) --no-print-directory -Onone -f subdir_rules.mk build-825065009-inproc

build-825065009-inproc: ../task.cfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: XDCtools'
	"D:/user doc/TexasInstrument/xdctools_3_50_05_12_core/xs" --xdcpath="C:/ti/bios_6_73_00_12/packages;" xdc.tools.configuro -o configPkg -t ti.targets.msp430.elf.MSP430X -p ti.platforms.msp430:MSP430F5529 -r release -c "D:/user doc/TexasInstrument/ccsv8/tools/compiler/ti-cgt-msp430_18.1.1.LTS" --compileOptions "-g" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

configPkg/linker.cmd: build-825065009 ../task.cfg
configPkg/compiler.opt: build-825065009
configPkg/: build-825065009


