#include <cctype>
#include <iostream>
#include <cstring>

void menuYazdir();
void buyut(char[], char[]);
void kucult(char[], char[]);
void bkkb(char[], char[]);
void kihb(char[], char[]);

using namespace std;
int main(int argc, char** argv) {
    char secim;    
    char kelime1[100];
    char kelime2[100];
    
    menuYazdir();
    cin>>secim;
    cout<<"Kelimeyi yaziniz :";
    cin>>kelime1;
    
    switch(secim) {
        case '1':
            buyut(kelime1,kelime2);
            cout<<kelime2<<endl;
            break;
        case '2':
            kucult(kelime1,kelime2);
            cout<<kelime2<<endl;
            break;
        case '3':
            bkkb(kelime1,kelime2);
            cout<<kelime2<<endl;
            break;
        case '4':
            kihb(kelime1,kelime2);
            cout<<kelime2<<endl;
            break;
        case '0':
            cout<<"Cikis Yapiliyor...";
            exit(0);
        default:
            cout<<"Gecerli bir islem seciniz!"<<endl;
            break;
    }
    return 0;
}
void menuYazdir() {
    cout<<"1. Tamamen büyük"<<endl;
    cout<<"2. Tamamen kucuk"<<endl;
    cout<<"3. Buyukse kucuk kucukse buyuk"<<endl;
    cout<<"4. Kelimelerin ilk harfini buyuk"<<endl;
    cout<<"0. Cikis"<<endl;
    cout<<"Yapmak istediginiz islemi seciniz :";
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
