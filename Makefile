#
## Makefile for Chapter 11
#
## Type  make to compile all the programs
# in the chapter 

all: pipe3 myfinger myfingerd

clean:
	rm -f pipe3 myfinger myfingerd

pipe3: pipe3.c 
	cc -o pipe3 pipe3.c
myfinger:  myfinger.c
	cc -o myfinger myfinger.c
myfingerd: myfingerd.c
	cc -o myfingerd myfingerd.c

