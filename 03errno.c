#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <linux/limits.h>
#include "rocerror.h"

int main(int argc, char *argv[]) {
    char filename[PATH_MAX] = {0};

    if (argc != 2) {
        app_error("Usage: ./03errno <filename>");
    }

    strncpy(filename, argv[1], sizeof(filename) - 1);

    if (creat(filename, 0644) == -1) {
        unix_error("Failed to create file");
    }

    printf("File '%s' created successfully.\n", filename);
    return 0;
}

