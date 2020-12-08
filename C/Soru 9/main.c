#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
    srand(time(NULL));
    int uzunluk = rand() % 10;
    char dizi[20][uzunluk];
    
    int i,j;
    for(i=0; i<20; i++) {
        for(j=0; j<uzunluk-1; j++) {
            dizi[i][j] ='A' + rand() % 26;
            printf("%c",dizi[i][j]);
        }
        printf("\n");
    }
    
    return (EXIT_SUCCESS);
}