#ifndef OPTS_H
#define OPTS_H
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <inttypes.h>
#include <getopt.h>
#include <string.h>



struct params {
    int xNum;
};

void getOptions(int argc, char** argv, struct params* opts);
#endif