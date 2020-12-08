#include <iostream>

int diziUzunluk(char[] );
int diziKarsilastir(char[], char[]);
void diziKopyala(char[], char[]);

using namespace std;
int main(int argc, char** argv) {
    char dizi[10] = "Eray";
    int a = diziUzunluk(dizi);
    cout<<a<<endl;

    return 0;
}
int diziUzunluk(char dizi[]) {
    /*Dizinin uzunluğunu bulup döndürür*/
    int i = 0;
    
    while(dizi[i] != '\0') {
       i++;
    }
    return i;
}
int diziKarsilastir(char dizi1[], char dizi2[]) {
    /*İki dizinin aynı olup olmadığını karşılaştırır.Aynıysa 0 değilse 1 değerini döndürür*/
    int sayac = 0,i = 0;
    
    while(dizi1[i] != '\0') {
        if(dizi1[i] != dizi2[i]){
            sayac++;
        } else
            i++;
        
        if(sayac == 0) {
            return 0;
        } else
            return 1;
    }
}

void diziKopyala(char dizi1[], char dizi2[]) {
    /*dizi1'i dizi2'ye kopyalar*/
    int i = 0;
    while(dizi1[i] != '\0') {
        dizi2[i] = dizi1[i]; 
        i++;
    }
}
