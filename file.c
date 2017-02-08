#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "file.h"
#ifndef FILE_H
#ifndef STDIO_H
#ifndef TIME_H
#ifndef STDLIB_H

int main() {
    int col, rows;
    char name[20];

    printf("Enter name file: ");
    fgets(name, 19, stdin);

    printf("Enter col and rows:\n");

    if(scanf("%d %d", &col, &rows) != 2) {
        printf("Error!!!");
        return 1;
    }


    //123

    int mass[col][rows];
    matrix(col, rows, &mass[0][0]);
    fmatrix(name, &mass[0][0], col, rows);
    return 0;
}
#endif
#endif
#endif
#endif