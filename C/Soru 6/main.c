#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void menuYazdir();
void buyut(char[], char[]);
void kucult(char[], char[]);
void bkkb(char[], char[]);
void kihb(char[], char[]);

int main(int argc, char** argv) {
    char secim;    
    char kelime1[100];
    char kelime2[100];
    
    menuYazdir();
    fflush(stdin);
    scanf("%c",&secim);
    fflush(stdin);
    printf("Kelimeyi yaziniz :");
    scanf("%s",kelime1);
    
    switch(secim) {
        case '1':
            buyut(kelime1,kelime2);
            printf("%s",kelime2);
            break;
        case '2':
            kucult(kelime1,kelime2);
            printf("%s",kelime2);
            break;
        case '3':
            bkkb(kelime1,kelime2);
            printf("%s",kelime2);
            break;
        case '4':
            kihb(kelime1,kelime2);
            printf("%s",kelime2);
            break;
        case '0':
            printf("Cikis Yapiliyor...");
            exit(0);
        default:
            printf("\nGecerli bir islem seciniz!\n");
            break;
    }
    return (EXIT_SUCCESS);
}
void menuYazdir() {
    printf("\n1. Tamamen büyük\n");
    printf("2. Tamamen kucuk\n");
    printf("3. Buyukse kucuk kucukse buyuk\n");
    printf("4. Kelimelerin ilk harfini buyuk\n");
    printf("0. Cikis\n");
    printf("Yapmak istediginiz islemi seciniz :\n");
}
void buyut(char dizi1[],char dizi2[]) {
    int i;
    int a = strlen(dizi1);
    for(i=0; i<a; i++) {
        dizi2[i] = toupper(dizi1[i]);
    }
}
void kucult(char dizi1[], char dizi2[]) {
    int i;
    int a = strlen(dizi1);
    for(i=0; i<a; i++) {
        dizi2[i] = tolower(dizi1[i]);
    }
}
void bkkb(char dizi1[], char dizi2[]){
    char buyuk[27] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    char kucuk[27] = "qwertyuiopasdfghjklzxcvbnm";
    
    int i,j;
    for(i=0; i<strlen(dizi1); i++) {
        for(j=0; j<27; j++) {
            if(dizi1[i]==buyuk[j]) {
                dizi2[i]=tolower(dizi1[i]);
            }  
            
            if(dizi1[i]==kucuk[j]) {
                dizi2[i]=toupper(dizi1[i]);
            }
        }
    }
}
void kihb(char dizi1[], char dizi2[]) {
    dizi2[0] = toupper(dizi1[0]);
    
    int i;
    for(i=1; i<strlen(dizi1); i++) {
        dizi2[i] = dizi1[i];
    }
}