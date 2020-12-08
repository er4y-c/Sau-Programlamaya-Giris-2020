#include <iostream>
#include <ctime>
#include <cstdio>

using namespace std;
int main(int argc, char** argv) {
    srand(time(NULL));
    string harfler = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuopasdfghjklizxcvbnm";
    string kelime;
    int i,j;
    int a = rand() % 10;
    for(i=0; i<20; i++) {  
        for(j=0; j<a; j++) {
        kelime[j] = harfler[rand() % 42];
        cout<<kelime[j];
    }
        cout<<" "<<endl;
    }
    return 0;
}

