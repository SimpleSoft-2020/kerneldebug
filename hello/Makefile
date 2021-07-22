obj-m:=hello.o
PWD:=$(shell pwd)
KDIR:=/lib/modules/$(shell uname -r)/build
all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules
clean:
	rm -rf *.o *.mod.c *.ko *.symvers *.order *.markers .*mod* .*.cmd *.mod *.a*
