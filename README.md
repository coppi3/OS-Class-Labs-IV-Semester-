# OS CLASS Labs done in IV semester 

## Lab 1. ForkBomb 
1. Write a forkbomb program for Linux, Windows
2. Make a graph of the number of processes in the OS
3. Analyze how the OS reacts to the forkbomb

## Lab 2. MemBomb
1. Write a program that allocates memory and fills it with zeros with
step equal to the size of the memory page (mmap, VirtualAlloc)
2. Graph Free Memory
3. Read about the operation of the OOM Killer daemon in Linux
4. In windows: get the message about not being able to allocate memory 

## Lab 3. Schedulers and performance 

**Easy**

Find and compile the linpack program to evaluate computer performance (Flops) and test it under various OS operating modes:
1. With different task priorities in the scheduler
2. With and without CPU affinity
3. Run multiple tests, compare results by 3 sigma or other statistical criteria

**HARD**

Same thing, plus change kernel-level options (pick one):
1. Disable execution of all threads except the one being tested (by disabling interrupts) (cli sti)
2. Find other process schedulers for 1Linux and compare the results of a computational task on them
3. Influence the settings of an existing scheduler
4. Interfere with the scheduler at the kernel level 

