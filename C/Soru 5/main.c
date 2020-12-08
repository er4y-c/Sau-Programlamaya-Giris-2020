#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    /*Girilen kelimeyi tersine pointer aracılıgıyla cevirir*/
    char *dizi1, *dizi2;
    
    fflush(stdin);
    printf("Kelimeyi yaziniz :");
    gets(dizi1);
    
    int sayi = strlen(dizi1);
    int i,j;
    for(i=0,j=sayi-1; i<sayi,j>=0; i++,j--) {
        dizi2[i] = dizi1[j];
        printf("%c",dizi2[i]);
    }
    
    return (EXIT_SUCCESS);
}

