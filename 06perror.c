#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <linux/limits.h>
#include "rocerror.h"

int main(int argc, char *argv[]) {
    char filename[PATH_MAX] = {0};

    if (argc != 2) {
        app_error("Usage: ./06perror <filename>");
    }

    strncpy(filename, argv[1], sizeof(filename) - 1);

    if (creat(filename, 0644) == -1) {
        // 假设触发某些特殊网络相关的错误
        if (errno == ENOENT) {
            gai_error(errno, "File or directory not found");
        } else {
            unix_error("General file creation error");
        }
    }

    printf("File '%s' created successfully.\n", filename);
    return 0;
}

