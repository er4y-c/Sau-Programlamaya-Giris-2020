#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
    /*2000 den kucuk 10 tane rastgele sayı uretir.SAyıları kucukten buyuye sıralar.
    SAyıları ve en buyugunu ekrana yazdırır.*/
    int* sayilar;
    srand(time(NULL));
    int i,j,gecici;
    /*Sayilara rastgele deger atıyoruz*/
    for(i=0; i<10; i++) {
        sayilar[i] = rand() % 2000;
    }
    /*Sayıları bubble sort algoritmasıyla sıralıyoruz*/
    for(i=0; i<10; i++) {
        for(j=0; j<10-i; j++) {
            if(sayilar[j]>sayilar[j+1]) {
                gecici = sayilar[j];
                sayilar[j] = sayilar[j+1];
                sayilar[j+1] = gecici;
            }
        }
    }
    /*Sayıları ekrana yazdırıyoruz*/
    printf("Sayi Listesi :");
    for(i=0; i<10; i++) {
        printf("%d ",sayilar[i]);
    }
    printf("\nEn buyuk sayi : %d",sayilar[9]);
    return (EXIT_SUCCESS);
}

