#include <cstdlib>
#include <iostream>

int asalMi(int );

using namespace std;
int main(int argc, char** argv) {
    /*10.Soru C++ Versiyon
     * ASCII degeri asal olan harfleri ekrana yazdirir.*/
    char buyuk[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char kucuk[27] = "abcdefghijklmnopqrstuvwxyz";
    int i,a,b;
    for(i=0,a=65,b=97; i<26; i++,a++,b++) {
        if(asalMi(a)==0) {
            cout <<kucuk[i]<<endl;
        }
        if(asalMi(b)==0) {
            cout <<buyuk[i]<<endl;
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
