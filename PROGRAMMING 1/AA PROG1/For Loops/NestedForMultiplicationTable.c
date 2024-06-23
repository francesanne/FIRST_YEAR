/*
 C program to print multiplication table from 1 to 5
*/

#include <stdio.h>
int main(){

    int row, col;

    for(row=1; row<=5; row++){

        for(col=1; col<=row; col++){
            printf("%d", col);
        }
        row*=col;
    }

    return 0;
}