#include <iostream>
#include <cstring>

using namespace std;
int main(int argc, char** argv) {
    /*Girilen kelimeyi tersine pointer aracılıgıyla cevirir*/
    char *dizi1, *dizi2;
    
    fflush(stdin);
    cout<<"Kelimeyi yaziniz :";
    cin>>dizi1;
    
    int sayi = strlen(dizi1);
    int i,j;
    for(i=0,j=sayi-1; i<sayi,j>=0; i++,j--) {
        dizi2[i] = dizi1[j];
        cout<<dizi2[i];
    }
    
    return 0;
}

