#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a = 10;
    int b = 20; 
    
    int i,j;
    for(i=0; i<10; i++) {
        for(j=0; j<10; j++) {
            if((i*(i+1)) % 10 == 0) {
                printf("*");
            }
        }
        printf("\n");
        if(i != 9) {
        printf("**");
        }
    }
    printf("\n---------------------------------------------------------\n");
    int mid = b / 2; 
    for (i = 0; i < b; i++) { 
        for (j = 0; j <= b; j++) { 
            if (j == mid || j == (b-mid) || (i == a / 2 && j > mid && j < (b - mid))) 
                printf("*"); 
            else
                printf(" "); 
        } 
        printf("\n"); 
        mid--; 
    }

    return (EXIT_SUCCESS);
}

