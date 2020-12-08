#include <stdio.h>

int asalMi(int );

int main(int argc, char** argv) {
    /*ASCII degeri asal olan harfleri ekrana yazdirir.*/
    char buyuk[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char kucuk[27] = "abcdefghijklmnopqrstuvwxyz";
    int i,a,b;
    for(i=0,a=65,b=97; i<26; i++,a++,b++) {
        if(asalMi(a)==0) {
            printf("%c ",kucuk[i]);
        }
        if(asalMi(b)==0) {
            printf("%c ",buyuk[i]);
        }
    }    
   
    return 0;
}
int asalMi(int sayi) {
    int i;
    int sayac = 0;
    for(i=2; i<26; i++) {
        if(sayi%i==0) {
            sayac++;
        }
    }
    if(sayac==0) {
        return 0;
    } else
        return 1;
}

