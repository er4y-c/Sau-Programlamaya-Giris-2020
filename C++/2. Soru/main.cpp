#include <iostream>
#include <cmath>

void menuYazdir();
double us(double, double);
double sayiOku();

using namespace std;
int main(int argc, char** argv) {
    /* Ufak bir hesap makinesi */
    while(1) {
    double sayi1,sayi2,sonuc;
    char islem;    

    menuYazdir();
    cin>>islem;
    
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
            int a,b;
            cout<<"Sayiyi giriniz : ";
            cin>>a;
            cout<<"Sayiyi giriniz : ";
            cin>>b;
            sonuc = a % b;
            break;
        case 'U':
            sayi1 = sayiOku();
            sayi2 = sayiOku();
            sonuc = us(sayi1,sayi2);
            break;
        case 'K':
            cout<<"Karekoku alınacak sayiyi giriniz :";
            cin>>sayi1;
            sonuc = sqrt(sayi1);
            break;
        case 'C':
            cout<<"Cikis Yapiliyor...";
            exit(0);
        default:
            cout<<"Gecerli bir islem turu seciniz."<<endl;
            break;
    }
    cout<<sonuc<<endl;
    }
    
    return 0;
}

void menuYazdir() {
    cout<<"(+) Toplama"<<endl;
    cout<<"(-) Cikarma"<<endl;
    cout<<"(*) Carpma"<<endl;
    cout<<"(/) Bolme"<<endl;
    cout<<"(M) Mod Alma"<<endl;
    cout<<"(U) Ust Alma"<<endl;
    cout<<"(K) Karekok Alma"<<endl;
    cout<<"(C) Cikis"<<endl;
    cout<<"Yapmak istediginiz islemi seciniz :";
}
double us(double sayi1, double sayi2) {
    int i;
    for(i=1; i<sayi2; i++) {
        sayi1 *= sayi1;
    }
    return (double) sayi1;
}
double sayiOku() {
    double sayi;
    cout<<"Sayiyi giriniz :";
    cin>>sayi;
    return (double) sayi;        
} 