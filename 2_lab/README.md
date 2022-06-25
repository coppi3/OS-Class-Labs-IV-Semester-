# 2 Lab. MemBomb

## Task 
1. Write a program that allocates memory and fills it with zeros with step equal to the size of the memory page (mmap, VirtualAlloc)
2. Graph Free Memory
3. In Linux: read about the operation of the OOM Killer daemon
4. In windows: get the message about not being able to allocate memory

## Source list 
1. **./src/mmap_linux.c** - [Linux] MemBomb using mmap. Makes your computer freeze and only reboot can fix the situation.
2. **./src/calloc_linux.c** - [Linux] MemBomb using calloc. After about 10 seconds when there is no free memory OOM-killer just kills the process.
3. **./src/virtualAlloc_windows.cpp** - [Windows] MemBomb using VirtualAlloc.

## How to run?

> $ cmake .
$ make 
$ echo -e "qwerty" | ./calloc 
 
*P.S. the passowrd is **qwerty***

## Results
It's interesting that mmap can't be dealt with using OOM-killer for some reason. 
Windows is pretty bad as always... 
