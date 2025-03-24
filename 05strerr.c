#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <linux/limits.h>
#include "rocerror.h"

int main(int argc, char *argv[]) {
    char filename[PATH_MAX] = {0};

    if (argc != 2) {
        app_error("Usage: ./05strerr <filename>");
    }

    strncpy(filename, argv[1], sizeof(filename) - 1);

    if (creat(filename, 0644) == -1) {
        posix_error(errno, "Error creating file");
    }

    printf("File '%s' created successfully.\n", filename);
    return 0;
}

