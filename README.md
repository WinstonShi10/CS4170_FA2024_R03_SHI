
# Reflection 03: OpenMP II: Count Sort

Completed by Winston Shi

## Summary

This reflection uses code snippets from class to implement the parallelization of Count Sort. This code will be ran on the Ohio Supercomputing Center (OSC) servers.

This program will run a sorting function that sorts a vector of numbers in ascending order with a count sort function that is parallelized. Vectors are filled with a function that populate them with a random integer between 1 to 100. the size of the vectors range from 10,000 to 100,000 in steps of 10,000. these vectors are then sorted with 1 to 12 threads to see the speedup occuring with the increase in cores.

## Lessons Learned

**Key Lessons:**
 * 
 * 
 * 
 * 
 * 

**Code Snippets:**

```bash

```

```bash

```

```bash

```

```bash

```

```bash

```

## Run Locally

Clone Repository

```bash
    git clone git@gitlab.com:Winston.Shi.BGSU/cs4170-fa2024-r03-shi.git reflection_03
```

Compile with Docker

```bash
    docker run --rm -v ${PWD}:/tmp -w /tmp/Default rgreen13/alpine-bash-gpp make all
```

Run with Docker

```bash
    docker run --rm -v ${PWD}:/tmp -w /tmp/Default rgreen13/alpine-bash-gpp ./OpenMP
```

## Run on Ohio Super Computer

Login to the Ohio Super Computer

```bash
ssh USERNAME@owens.osc.edu
```

Load the Git module and setup the environment to use a specific version of Git

```bash
module load git
```

Remove the value of the SSH_ASKPASS environment variable

```bash
unset SSH_ASKPASS
```

Clone repository

```bash
git clone git@gitlab.com:Winston.Shi.BGSU/cs4170-fa2024-r03-shi.git reflection_03
```

Change directory

```bash
cd reflection_03
```

Submit job using SLURM file

```bash
sbatch jobScript.slurm
```

Come back to repository after job completion confirmation

<div align="center">
    <img src="Results/Confirmation.jpeg" alt="Image of Confirmation" width="300" align="center">
<div align="left">

Change directory to Default File

```bash
cd Default
```

Open CVS file to see result

```bash
cat results.csv
```

## Check Job

job status

```bash
squeue -j BATCH_ID_NUM
```

OSC job queue

```bash
squeue
```

Show batch job information:
 * Resource usage statistics
 * CPU usage
 * Memory usage
 * I/O operations
 * Process creation rate

```bash
sacct -j BATCH_ID_NUM
```

## Results

```cvs
Threads: 1, Size: 10000, Time: 1.34239
Threads: 1, Size: 20000, Time: 5.25219
Threads: 1, Size: 30000, Time: 11.6416
Threads: 1, Size: 40000, Time: 20.8703
Threads: 1, Size: 50000, Time: 32.5621
Threads: 1, Size: 60000, Time: 46.9125
Threads: 1, Size: 70000, Time: 62.0026
Threads: 1, Size: 80000, Time: 81.8642
Threads: 1, Size: 90000, Time: 107.445
Threads: 1, Size: 100000, Time: 132.36
Threads: 2, Size: 10000, Time: 0.715382
Threads: 2, Size: 20000, Time: 2.67722
Threads: 2, Size: 30000, Time: 5.95994
Threads: 2, Size: 40000, Time: 10.6302
Threads: 2, Size: 50000, Time: 16.5646
Threads: 2, Size: 60000, Time: 23.9171
Threads: 2, Size: 70000, Time: 32.5539
Threads: 2, Size: 80000, Time: 42.4884
Threads: 2, Size: 90000, Time: 53.5638
Threads: 2, Size: 100000, Time: 65.6113
Threads: 3, Size: 10000, Time: 0.49148
Threads: 3, Size: 20000, Time: 1.75898
Threads: 3, Size: 30000, Time: 3.97507
Threads: 3, Size: 40000, Time: 7.08628
Threads: 3, Size: 50000, Time: 11.0914
Threads: 3, Size: 60000, Time: 16.0534
Threads: 3, Size: 70000, Time: 21.7341
Threads: 3, Size: 80000, Time: 28.3192
Threads: 3, Size: 90000, Time: 35.8091
Threads: 3, Size: 100000, Time: 44.3105
Threads: 4, Size: 10000, Time: 0.38649
Threads: 4, Size: 20000, Time: 1.36363
Threads: 4, Size: 30000, Time: 3.01772
Threads: 4, Size: 40000, Time: 5.33301
Threads: 4, Size: 50000, Time: 8.30802
Threads: 4, Size: 60000, Time: 11.9667
Threads: 4, Size: 70000, Time: 16.2839
Threads: 4, Size: 80000, Time: 21.2521
Threads: 4, Size: 90000, Time: 26.9036
Threads: 4, Size: 100000, Time: 33.1676
Threads: 5, Size: 10000, Time: 0.310972
Threads: 5, Size: 20000, Time: 1.10714
Threads: 5, Size: 30000, Time: 2.42365
Threads: 5, Size: 40000, Time: 4.27322
Threads: 5, Size: 50000, Time: 6.65574
Threads: 5, Size: 60000, Time: 9.57403
Threads: 5, Size: 70000, Time: 13.0712
Threads: 5, Size: 80000, Time: 17.0313
Threads: 5, Size: 90000, Time: 21.5596
Threads: 5, Size: 100000, Time: 26.5745
Threads: 6, Size: 10000, Time: 0.276057
Threads: 6, Size: 20000, Time: 0.925017
Threads: 6, Size: 30000, Time: 2.02319
Threads: 6, Size: 40000, Time: 3.56611
Threads: 6, Size: 50000, Time: 5.56777
Threads: 6, Size: 60000, Time: 7.98065
Threads: 6, Size: 70000, Time: 10.8517
Threads: 6, Size: 80000, Time: 14.2456
Threads: 6, Size: 90000, Time: 17.9587
Threads: 6, Size: 100000, Time: 22.1549
Threads: 7, Size: 10000, Time: 0.242524
Threads: 7, Size: 20000, Time: 0.801176
Threads: 7, Size: 30000, Time: 1.76923
Threads: 7, Size: 40000, Time: 3.09797
Threads: 7, Size: 50000, Time: 4.78777
Threads: 7, Size: 60000, Time: 6.85631
Threads: 7, Size: 70000, Time: 9.37309
Threads: 7, Size: 80000, Time: 12.1854
Threads: 7, Size: 90000, Time: 15.3814
Threads: 7, Size: 100000, Time: 18.9613
Threads: 8, Size: 10000, Time: 0.28061
Threads: 8, Size: 20000, Time: 0.982799
Threads: 8, Size: 30000, Time: 2.20066
Threads: 8, Size: 40000, Time: 3.54943
Threads: 8, Size: 50000, Time: 6.1628
Threads: 8, Size: 60000, Time: 8.54058
Threads: 8, Size: 70000, Time: 8.18745
Threads: 8, Size: 80000, Time: 10.6577
Threads: 8, Size: 90000, Time: 13.4509
Threads: 8, Size: 100000, Time: 16.6086
Threads: 9, Size: 10000, Time: 0.237903
Threads: 9, Size: 20000, Time: 0.873295
Threads: 9, Size: 30000, Time: 1.95513
Threads: 9, Size: 40000, Time: 3.50002
Threads: 9, Size: 50000, Time: 5.44413
Threads: 9, Size: 60000, Time: 7.84181
Threads: 9, Size: 70000, Time: 10.0024
Threads: 9, Size: 80000, Time: 11.6624
Threads: 9, Size: 90000, Time: 14.6707
Threads: 9, Size: 100000, Time: 14.8149
Threads: 10, Size: 10000, Time: 0.18108
Threads: 10, Size: 20000, Time: 0.567985
Threads: 10, Size: 30000, Time: 1.23201
Threads: 10, Size: 40000, Time: 2.13722
Threads: 10, Size: 50000, Time: 3.34748
Threads: 10, Size: 60000, Time: 4.92045
Threads: 10, Size: 70000, Time: 6.59127
Threads: 10, Size: 80000, Time: 8.55306
Threads: 10, Size: 90000, Time: 10.7863
Threads: 10, Size: 100000, Time: 13.3313
Threads: 11, Size: 10000, Time: 0.174309
Threads: 11, Size: 20000, Time: 0.507949
Threads: 11, Size: 30000, Time: 1.11655
Threads: 11, Size: 40000, Time: 1.99238
Threads: 11, Size: 50000, Time: 3.06189
Threads: 11, Size: 60000, Time: 4.38298
Threads: 11, Size: 70000, Time: 5.96932
Threads: 11, Size: 80000, Time: 7.76392
Threads: 11, Size: 90000, Time: 9.80064
Threads: 11, Size: 100000, Time: 12.0995
Threads: 12, Size: 10000, Time: 0.163111
Threads: 12, Size: 20000, Time: 0.484189
Threads: 12, Size: 30000, Time: 1.03802
Threads: 12, Size: 40000, Time: 1.80694
Threads: 12, Size: 50000, Time: 2.803
Threads: 12, Size: 60000, Time: 4.02334
Threads: 12, Size: 70000, Time: 5.45815
Threads: 12, Size: 80000, Time: 7.12897
Threads: 12, Size: 90000, Time: 9.01657
Threads: 12, Size: 100000, Time: 11.1274
```













You must also include a complete performance evaluation within this file including charts, graphs, and tables.

Summarize what you learned during this week of class. 
Note any particular features, concepts, code, or terms that you believe are important.

Include data along with the calculated Speedup, 
Efficiency, and Karp-Flatt metric. 
What do these metrics tell you?
Provide images/charts for each metric and include them in your repository and README.md. 


Were there any loop dependencies in this algorithm?

How much time did you spend on this reflection? 
How much time did you spending coding? 
Writing? 
Testing? 
Analyzing?



[TOC]