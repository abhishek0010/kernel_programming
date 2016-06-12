cmd_/root/kernel_test/hello-k2.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o /root/kernel_test/hello-k2.ko /root/kernel_test/hello-k2.o /root/kernel_test/hello-k2.mod.o
