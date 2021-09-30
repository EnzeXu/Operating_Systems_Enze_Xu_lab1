CSC-641 - Lab 1 - EnzeXu
===========================
This document is used to show the detailed description of each part in lab1.

See at `https://github.com/EnzeXu/Operating_Systems_Enze_Xu_lab1` or
```shell
$ git clone https://github.com/EnzeXu/Operating_Systems_Enze_Xu_lab1.git
```

****
 
| Project Name | Operating Systems - Lab1 |
| ---- | ---- |
| Author | Enze Xu |
| Due | 09/30/2021 |

****
# Catalog

* [1 Purpose of Lab](#1-purpose-of-lab)
* [2 Compile & Execution Instructions](#2-compile--execution-instructions)
* [3 Questions](#3-questions)

****

# 1 Purpose of Lab
Command line arguments

When a C program is called, the arguments on the command line are made available to the main
program as an argument count argc and an array of character strings argv containing the arguments.
Manipulating these arguments is one of the most common uses of multiple levels of pointers (“pointer to
pointer to ...''). By convention, argc is greater than zero; the first argument (in argv[0]) is the command
name itself.

Command line data structure

The following figure shows the structure of the command line arguments when you type:

% ./a.out Hello World


Program guidelines

Write a C program that will read a line from stdin, decodes the input, and creates a command line data
structure.

You must consider the following situations:

- An empty line. The user hit the return key without having typed any input.
- The program should terminate when the user types exit token in the command line.


A sample execution would look like this:

```shell
%csc: ./prog1
%enter data: ./a.out Hello World
argv[0] ./a.out
argv[1] Hello
argv[2] World
%enter data: this is my command
argv[0] this
argv[1] is
argv[2] my
argv[3] command
%enter data: exit
OK close shop and go home
%csc:
```

****

# 2 Compile & Execution Instructions
```shell
$ cd xxx/Operating_Systems_Enze_Xu_lab1
$ cc Enze_Xu_lab1.c -o lab1
$ ./lab1
$ [Enjoy your time!]
```

****

# 3 Questions
None for lab1

