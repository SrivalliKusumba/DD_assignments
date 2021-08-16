obj-m:=D3p1_avg.o D3p1.o

CROSS_COMPILE_KDIR=/lib/modules/5.10.52-v7l+/build/

default:
	make -C $(CROSS_COMPILE_KDIR) M=$(PWD) modules
clean:
	make -C $(CROSS_COMPILE_KDIR) M=$(PWD) clean





