#include "opts.h"

void getOptions(int argc, char** argv, struct params* opts) {
    int c;
    while ((c = getopt(argc, argv, "p:")) != -1) {
        switch (c) {
        case 'p': strcpy(opts->xNum, optarg); break;
        }
    }
}