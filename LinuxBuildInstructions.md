# Build kk2glider on Ubuntu/Debian Linux #

## Setup build environment ##

Install following packages:
```
sudo apt-get install gcc gcc-avr avr-libc build-essential subversion
```


## Retrieve the source code ##

The source code is hosted on googlecode. See instructions for checkout on https://code.google.com/p/kk2glider/source/checkout

## Building ##

Enter the resulting **src** directory and execute make command:
```
make
```

The resulting .hex file will be created in same directory. You can use any flashing tool to prgram KK2.0 board.