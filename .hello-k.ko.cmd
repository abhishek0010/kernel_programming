cmd_/root/kernel_test/hello-k.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o /root/kernel_test/hello-k.ko /root/kernel_test/hello-k.o /root/kernel_test/hello-k.mod.o
