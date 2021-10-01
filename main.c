#include <stdio.h>
#include <math.h>

#define EPS_FLOAT 0.0000001 // dokładność zmiennych pojedynczej precyzji
#define EPS_Double 0.000000000000001 // dokładność zmiennych podwójnej precyzji

void main(){
    float test1 = 0.0f;
    double test2 = 0.0;
    int licznik = 0;
    //while (test2 != 1.0){
    while (fabs( 1.0 - test2) > EPS_Double){
        test2 += 0.1;
        printf("%d: Test2 ma wartosc: %lf\n",licznik, test2);
        licznik++;
    }
    
system("pause");
}// end of main