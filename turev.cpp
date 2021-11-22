#include <iostream>
#include <cstdlib>

using namespace std;

class Turev {
    public:
    char *x, *islemTuru;
    float *y, *z;
    char ptr;
    int *siraTutucu;
    int degiskenSayi,siraTutucuBoyut = 0;
    float sonuc = 0;
    char islemler[5] = "+-*/";
    void bellekAyir() {
        x = (char *) malloc(sizeof(char) * degiskenSayi);
        y = (float *) malloc(sizeof(float) * degiskenSayi);
        z = (float *) malloc(sizeof(float) * degiskenSayi); 
        islemTuru = (char *) malloc(sizeof(char)* degiskenSayi + 1);
        islemTuru[degiskenSayi] = ' ';
    }
    void bellekBosalt() {
        free(x);
        free(y);
        free(z);
        free(islemTuru);
        free(siraTutucu);
    }
    void turevAl(int ptr) {
        if(ptr != -1) {
        ptr -= 1;
        z[ptr] *= y[ptr];
        y[ptr] -=1;
        }
    }
    void fonksiyonYaz() {
        for(int i=0; i<degiskenSayi; i++) {
            if(islemTuru[i] != '1')
            cout<<'('<<z[i]<<'*'<<x[i]<<'^'<<y[i]<<')'<<islemTuru[i+1];
        }
    }
    void hesapla(char ptr) {
        siraTutucu = (int*) malloc(sizeof(int));
        for(int i=0; i<degiskenSayi; i++) {
            if(x[i]==ptr) {
                siraTutucu[siraTutucuBoyut] = i;
                ++siraTutucuBoyut;
                siraTutucu = (int*) realloc(siraTutucu,sizeof(int)*siraTutucuBoyut);
            }
        }
    }
};

int main() {
    Turev turev1;
    cout<<"Kac adet degisken gireceksiniz : ";
    cin>>turev1.degiskenSayi;
    turev1.bellekAyir(); 
    cout<<"Degiskenlerin uslerini sirasiyla yaziniz"<<endl;
    for(int i = 0; i<turev1.degiskenSayi; i++) {
        cin>>turev1.y[i];
    }
    cout<<"Degiskenlerin kat sayilarini sirasiyla yaziniz"<<endl;
    for(int i = 0; i<turev1.degiskenSayi; i++) {
        cin>>turev1.z[i];
    }
    cout<<"Degiskenler arasindaki islemleri sirayla yaziniz"<<endl;
    for(int i = 0; i<turev1.degiskenSayi-1; i++) {
        cin>>turev1.islemTuru[i+1];
    }
    cout<<"Degiskenleri sirasiyla yaziniz"<<endl;
    for(int i = 0; i<turev1.degiskenSayi; i++) {
        cin>>turev1.x[i];
    }
    cout<<"Hangi degiskene gore turev alinacak"<<endl;
    cin>>turev1.ptr;
    turev1.hesapla(turev1.ptr);
    cout<<"\n===============Turev alinmamis hali==============="<<endl;
    turev1.fonksiyonYaz();
    cout<<"\n===============Turev alinmis hali==============="<<endl;
    
    for(int i=1; i<=turev1.siraTutucuBoyut; i++) {
        turev1.turevAl(i);
    }
    turev1.fonksiyonYaz();
    turev1.bellekBosalt();
    return 0;
}
