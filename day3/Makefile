obj-m:=D3p2_avg.o D3p2.o

KERNELDIR = /lib/modules/$(shell uname -r)/build
PWD:=$(shell pwd)

default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules


install:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules_install
	depmod -a

clean:
	$(MAKE) -C $(KERNEKDIR) M=$(PWD) clean





