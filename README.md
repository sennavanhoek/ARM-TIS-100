# ARM-064
An experiment to play TIS-100 levels with real assembly.  
You can read more about it in this [blogpost](https://sennavanhoek.github.io/assembly-game/).  

## Non AArch64 Linux setup
you will need to install the following packages  
`qemu-user` `gcc-aarch64-linux-gnu` `binutils-aarch64-linux-gnu`  
With the following commands you can compile and run the levels  
`export QEMU_LD_PREFIX=/usr/aarch64-linux-gnu`  
`aarch64-linux-gnu-as asm.s -o asm.o`  
`aarch64-linux-gnu-gcc level.c asm.o -o level`  
`./level`  


## AArch64 Android setup
install the termux app  
you will need to install the following packages  
`clang` `binutils`  
With the following commands you can compile and run the levels  
`as asm.s -o asm.o`  
`clang level.c asm.o -o level`  
`./level`  
