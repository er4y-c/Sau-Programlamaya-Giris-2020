#include <iostream>
#include <ctime>

using namespace std;

int asalMi(int );
int my_strlen(string dizi);

int main(int argc, char** argv) {
   
    srand(time(NULL));
    char buyuk[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char kucuk[27] = "abcdefghijklmnopqrstuvwxyz";
    string depo;
    int i=0,j=0,a=65,b=97;
    while(i<26) {
        if(asalMi(a)==0) {
            depo[j] = buyuk[i];
            j++;
        }
        if(asalMi(b)==0) {
            depo[j] = kucuk[i];
            j++;
        }
        i++;
        a++;
        b++;
    }
    
    char dizi[20][3];
    int k,l;
    for(k=0; k<20; k++) {
        for(l=0; l<3; l++) {
            int sayac = rand() % my_strlen(depo);
            dizi[k][l] = depo[sayac];
            cout<<dizi[k][l];    
        }
        cout<<" "<<endl;
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
int my_strlen(string dizi) {
    int i = 0;
    
    while(dizi[i] != '\0') {
       i++;
    }
    return i;
}
