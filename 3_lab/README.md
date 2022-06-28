# 3 Lab. Performance, scheduling, kernel.

## Task 

**Basic variant:**

Find and compile the linpack program to evaluate computer performance (Flops) and test it under various OS operating modes:
1. With task priorities in the scheduler
2. The presence and absence of binding to the processor
3. Conduct multiple tests, compare results by 3 sigma or other evaluation criteria

**Enhanced version:**

Same thing, plus change the options at the kernel level (pick one):
1. Prohibit the execution of all threads, except for the one being tested (by prohibiting).
interrupts) (cli sti)
2. Find other process schedulers for Linux and compare the results of a computational task on them
3. Influence scheduler resource setting
4. Interfere with the scheduler at the kernel level

## Benchmarking

Used benchmark: linpack
The benchmark used in the LINPACK Benchmark is to solve a dense system of linear equations.
