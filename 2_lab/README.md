# 2 Lab. MemBomb

## Task 
1. Write a program that allocates memory and fills it with zeros with step equal to the size of the memory page (mmap, VirtualAlloc)
2. Graph Free Memory
3. In Linux: read about the operation of the OOM Killer daemon
4. In windows: get the message about not being able to allocate memory

## Source list 
1. **./src/mmap_linux.c** - [Linux] MemBomb using mmap. Makes your computer freeze and only reboot can fix the situation.
2. **./src/calloc_linux.c** - [Linux] MemBomb using calloc. After about 10 seconds (when there is no free memory) OOM-killer just kills the process.
3. **./src/virtualAlloc_windows.cpp** - [Windows] MemBomb using VirtualAlloc. Just sends Windows straight to reboot. 

## How to run?
*Linux*

> 
    $ cmake .
    $ make 
    $ echo -e "qwerty" | ./calloc 

*Windows*
> 
    $ g++ ./src/virtualAlloc_windows.cpp -o win.exe
    $ win.exe

*P.S. the passowrd is **qwerty***

## Results
Linux:
When MemBomb is done using callocs/mallocs etc. the OOM-killer wakes up and kills the process just fine (after like 10 secs depending on your specs).
It's interesting that mmap can't be dealt with using OOM-killer for some reason and Linux just reboots. 

Windows:
Windows just crashes after like 20 seconds of insane lags... 
In Windows if there's quite a lot of RAM initially it firstly tries to close some application except the MemBomb itself. And only after it closed like a couple apps it starts rebooting.
