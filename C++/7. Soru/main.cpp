#include <cstdlib>
#include <cstdio>
#include <ctime>
using namespace std;


void asalMi(int );
int cikis(char );

int main(int argc, char** argv) {
    /* 7. SORU
    Noktalama isareti girilene kadar sayi uretir ve sayinin asal olup olmadigini bulur*/
    printf("\n------------------------------------------------\n\n");
    printf("Durdurmak icin herhangi bir noktalama isaretine basiniz.\n");
    printf("Devam etmek icin herhangi bir tusa basiniz.\n");
    printf("\n------------------------------------------------\n\n");
    srand(time(NULL));
    
    while(1) {
    char secim;
    printf("Bir tusa basiniz :");
    scanf("%c",&secim);
    if(cikis(secim)) {
        exit(0);
    }
    int a = rand();
    asalMi(a);
    } 
    return (EXIT_SUCCESS);
}
void asalMi(int sayi) {
    int sayac = 0;
    int i;
    for(i=2; i<sayi; i++) {
        if(sayi%i==0) {
            sayac++;
        }
    }
    if(sayac==0) {
        printf("%d sayisi asaldir.\n",sayi);
    } else
        printf("%d sayisi asal degildir.\n",sayi);
}
int cikis(char secim) {
    char dizi[17] = ".:,;'-_?/()[]{}";
    int i;
    for(i=0; i<12; i++) {
        if(dizi[i]==secim){
            return 1;
            break;
        }
    }
    return 0;
}

