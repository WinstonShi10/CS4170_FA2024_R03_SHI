
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

```csv:Results/results.csv













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