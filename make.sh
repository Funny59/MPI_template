#!/bin/bash

module add mpi
module add  mpi/mpich-3.2-x86_64
rm *.out
mpicc $1 -o filename -lm -O3
sbatch -n ${2:-4} -t 1 -p debug --wrap "mpiexec ./filename"
squeue

