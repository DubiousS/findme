#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "file.h"

int matrix(int col, int rows, int *A)
{
    srand(time(NULL));
    int k, j = col * rows, i = 0;
    for(k = 0; k < j; k++) {
        i = rand() % 100;
        *A = i;
        A++;
    }
    return 0;
}

int fmatrix(char *name, int *rtp, int col, int rows) {
    FILE *text;
    text = fopen(name, "w");
    int k = 0, j = 0;
    
    fprintf(text, "%d %d \n", col, rows);
 
    
    for(k = 0; k < rows; k++) {
        for(j = 0; j < col; j++) {
            fprintf(text, "|%3d", *rtp);
            rtp++;
        }
        fprintf(text, "|\n");
    }
    fclose(text);
    return 0;
}

