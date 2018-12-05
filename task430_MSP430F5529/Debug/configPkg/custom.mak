## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,e430X linker.cmd package/cfg/task_pe430X.oe430X

# To simplify configuro usage in makefiles:
#     o create a generic linker command file name 
#     o set modification times of compiler.opt* files to be greater than
#       or equal to the generated config header
#
linker.cmd: package/cfg/task_pe430X.xdl
	$(SED) 's"^\"\(package/cfg/task_pe430Xcfg.cmd\)\"$""\"C:/Users/Admin/workspace_v8/task430_MSP430F5529/Debug/configPkg/\1\""' package/cfg/task_pe430X.xdl > $@
	-$(SETDATE) -r:max package/cfg/task_pe430X.h compiler.opt compiler.opt.defs
