#!/bin/bash
#
#$ -cwd
#$ -j y
#$ -P admin_project
#$ -m n
#$ -pe mpich 1
#$ -S /bin/bash
#
./a.out