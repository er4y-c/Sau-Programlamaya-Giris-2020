#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;
int main(int argc, char** argv) {
/*Rastgele uzunlukta(10 harften kucuk) 20 kelime olusturur*/
    srand(time(NULL));
    int uzunluk = rand() % 10;
    char dizi[20][uzunluk];
    
    int i,j;
    for(i=0; i<20; i++) {
        for(j=0; j<uzunluk-1; j++) {
            dizi[i][j] ='A' + rand() % 26;
            cout<<dizi[i][j];
        }
        cout<<" "<<endl;
    }
    
    return (EXIT_SUCCESS);
} 
