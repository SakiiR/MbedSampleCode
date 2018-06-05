# MbedSampleCode

Arch linux files to test and debug a Nucleo-F401RE board :)

## Installation

Clone the project. Install the following deps:

```sh
$ yaourt -Sy arm-none-eabi-gdb arm-none-eabi-binutils arm-none-eabi-gcc arm-none-eabi-gdb arm-none-eabi-newlib openocd
```

## Compile, flash and run

```sh
$ make && make flash && make clean
```

## Debug with gdb (and gef)

See https://github.com/hugsy/gef to use Gdb Enhanced Features :)

```sh
$ # Run a gdb server on port 3333 and a telnet configuration server on 4444
$ # To launch on a dedicated terminal
$ openocd -f openocd.cfg
$ # Reset the board and the bin
$ cat reset.txt | nc localhost 4444
$ arm-none-eabi-gdb ./BUILD/Nucleo_blink_led.elf
$ (gef) target remote localhost:3333
$ (gef) # now learn to use gdb :)
```


