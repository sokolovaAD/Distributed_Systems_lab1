#include "opts.h"


int main(int argc, char** argv) {
    struct params options;
    getOptions(argc, argv, &options);
    return 0;
    makeNet(options.xNum);
}
