#obj-m += further_test/start_stop/startstop.o
#start_stop/startstop.objs := further_test/start_stop/start_k.o start_stop/stop_k.o




all:
	#make -C /lib/modules/$(shell uname -r)/build M=$(PWD/further_test/start_stop) modules
	cd further_test/start_stop; make

clean:
	#make -C /lib/modules/$(shell uname -r)/build M=$(PWD/further_test/start_stop) clean

