
#include <iostream>
#include<math.h>
using namespace std;

#define EPS_FLOAT 0.0000001 // dokładność zmiennych pojedynczej precyzji
#define EPS_Double 0.000000000000001 // dokładność zmiennych podwójnej precyzji

int main(){
    float test1 = 0.0f;
    double test2 = 0.0;
    int licznik = 0;

    while (test2 != 1.0){ // Pętla nieskonczona ze wzgledu na precyzje zmiennej
   // while (fabs( 1.0 - test2) > EPS_Double){ // petla skonczona, bo porownujemy wartosc z okreslona precyzja
        test2 += 0.1;
        cout << licznik << ") Test 2 ma wartosc:"<< test2 << endl;
        licznik++;
    }
    
system("pause");
return 0;
}