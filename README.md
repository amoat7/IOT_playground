# Debug configurations for printf output

- Right click on project seetings -> debug configurations ->Debugger-> Select ST link -> Select SWD -> Enable Serial wire viewer ->

- Change syscalls.c

## Debugging

Select project -> debug as stm32project

## Checking printf output

Window -> Show view-> SWV -> SWV ITM DataConsole
Configure trace -> select port 0 -> reset debug session -> start trace (red buton)

## FPU warning fix

right click on the project -->properties -> expand C/C++ build --> Settings --> Tool settings -->MCU settings ->

FPU: None
abi: software implementation
