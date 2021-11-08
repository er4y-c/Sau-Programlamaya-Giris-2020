#include <iostream>
#include <ctime>
#include <cstdlib>
#include <clocale>

using namespace std;

void soru1();
void soru2();

int main(int argc, char** argv) {
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"Cevap 1:"<<endl;
    soru1();
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"Cevap 2:"<<endl;
    soru2();
    cout<<"----------------------------------------------------------------"<<endl;

    return 0;
}
void soru1() {
    setlocale(LC_ALL, "Turkish");
    int boyut;
    srand(time(NULL));
    
    cout<<"Dizinin boyutunu giriniz : ";
    cin>>boyut;
    if(boyut>100) {
        cout<<"100'den büyük bir değer girmeliydiniz."<<endl;
        return;
    }
    int dizi[boyut];
    int i = 0;
    
    while(i<boyut) {
        dizi[i] = rand() % 10;
        switch(i) {
            case 0:
            cout<<"---->"<<dizi[i]<<endl;
            i++;
            break;
            default:
            cout<<"     "<<dizi[i]<<endl; 
            i++;
            break;
        }
    }
     
    while(1) {
        char secim;
        static int sira = 0;
        i = 0;
        
        cout<<"Aşağı ilerlemek için 'A' veya 'a' tuşuna basınız"<<endl;
        cout<<"Yukarı ilerlemek için 'D' veya 'd' tuşuna basınız"<<endl;
        cout<<"Çikmak için 'C' veya 'c' tuşuna basınız"<<endl;
        cout<<"Yapmak istediğiniz işlem : ";
        cin>>secim;
        
        if(secim == 'C' || secim == 'c') {
            return;
        } else if(secim == 'A' || secim == 'a') {
            sira++;
            while(i<boyut) {
                if(sira==boyut) {
                    sira = 0;
                }
                if(sira==i) {
                    cout<<"---->"<<dizi[i]<<endl;
                } else
                    cout<<"     "<<dizi[i]<<endl;
                i++;
            }
        }
        else if(secim == 'D' || secim == 'd') {
            sira--;
            while(i<boyut) {
                if(sira<0) {
                    sira = boyut-1;
                }
                if(sira==boyut) {
                    sira = 0;
                }
                if(sira==i) {
                    cout<<"---->"<<dizi[i]<<endl;
                } else
                    cout<<"     "<<dizi[i]<<endl;
                i++;
            }
        }
    }   
}
void soru2() {
    int boyut,i,j,s,l;
    srand(time(NULL));
    cout<<"Enter square matrix's size : ";
    cin>>boyut;
    int dizi[boyut][boyut];
    
    cout<<"Enter small number : ";
    cin>>s;
    cout<<"Enter large number : ";
    cin>>l;
    
    for(i=0; i<boyut; i++) {
        for(j=0; j<boyut; j++) {
            dizi[i][j] = rand() % 10;
            cout<<" "<<dizi[i][j]<<" ";
        }
        cout<<" "<<endl;
    }
    
    cout<<"Crypted Array"<<endl;
    
    for(i=0; i<boyut; i++) {
        for(j=0; j<boyut; j++) {
            if(dizi[i][j]<l && dizi[i][j]>s || dizi[i][j]==s || dizi[i][j]==l) {
                cout<<" ~ ";
            } else if(dizi[i][j]<s) {
                cout<<" * ";
            } else if(dizi[i][j]>l) {
                cout<<" - ";
            }
        }
        cout<<" "<<endl;
    }
}
