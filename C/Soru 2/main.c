#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menuYazdir();
int us(int, int);
int sayiOku();

int main(int argc, char** argv) {
    /* Ufak bir hesap makinesi */
    while(1) {
    int sayi1,sayi2,sonuc;
    char islem;    

    menuYazdir();
    scanf("%c",&islem);
    
    switch(islem) {
        case '+':
            sayi1 = sayiOku();
            sayi2 = sayiOku();
            sonuc = sayi1 + sayi2;
            break;
        case '-':
            sayi1 = sayiOku();
            sayi2 = sayiOku();
            sonuc = sayi1 - sayi2;
            break;
        case '*':
            sayi1 = sayiOku();
            sayi2 = sayiOku();
            sonuc = sayi1 * sayi2;
            break;
        case '/':
            sayi1 = sayiOku();
            sayi2 = sayiOku();
            sonuc = sayi1 / sayi2;
            break;
        case 'M':
            sayi1 = sayiOku();
            sayi2 = sayiOku();
            sonuc = sayi1 % sayi2;
            break;
        case 'U':
            sayi1 = sayiOku();
            sayi2 = sayiOku();
            sonuc = us(sayi1,sayi2);
            break;
        case 'K':
            printf("Karekoku alınacak sayiyi giriniz :");
            scanf("%d",&sayi1);
            sonuc = sqrt(sayi1);
            break;
        case 'C':
            printf("Cikis Yapiliyor...");
            exit(0);
        default:
            printf("Gecerli bir islem turu seciniz.\n");
            break;
    }
    printf("%d\n",sonuc);
    }
    
    return (EXIT_SUCCESS);
}
void menuYazdir() {
    printf("\n(+) Toplama");
    printf("\n(-) Cikarma");
    printf("\n(*) Carpma");
    printf("\n(/) Bolme");
    printf("\n(M) Mod Alma");
    printf("\n(U) Ust Alma");
    printf("\n(K) Karekok Alma");
    printf("\n(C) Cikis");
    printf("\nYapmak istediginiz islemi seciniz :");
}
int us(int sayi1, int sayi2) {
    int i;
    for(i=1; i<sayi2; i++) {
        sayi1 *= sayi1;
    }
    return sayi1;
}
int sayiOku() {
    int sayi;
    printf("Sayiyi giriniz :");
    scanf("%d",&sayi);
    return sayi;        
}