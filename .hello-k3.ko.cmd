cmd_/root/kernel_test/hello-k3.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o /root/kernel_test/hello-k3.ko /root/kernel_test/hello-k3.o /root/kernel_test/hello-k3.mod.o
