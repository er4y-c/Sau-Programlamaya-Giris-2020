#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;
int main(int argc, char** argv) {
    /*4.Soru C++ Versiyon
     * 2000 den kucuk 10 tane rastgele sayı uretir.Sayıları kucukten buyuye sıralar.
    Sayıları ve en buyugunu ekrana yazdırır.*/
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
    cout <<"Sayi Listesi :"<<endl;
    for(i=0; i<10; i++) {
        cout <<sayilar[i] <<endl;
    }
    cout <<"En buyuk sayi : "<<sayilar[9];
    return 0;
}
 