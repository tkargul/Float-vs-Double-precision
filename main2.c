

#include <stdio.h>
#include <math.h>

#define EPS_FLOAT 0.000001 // dokładność zmiennych pojedynczej precyzji
#define EPS_Double 0.000000000000001 // dokładność zmiennych podwójnej precyzji

void main(){
float f = 0;
for( int i = 0; i < 10; ++i )
     f += 0.1f;
printf("Wynik 1: %lf czy rowne 1? %s",f, f == 1.f ? "tak": "nie" );
printf("\n");
printf("Wynik 2: %lf czy w przyblizeniu rowne 1? %s",f, fabs(f-1) < EPS_FLOAT ? "tak": "nie" );
printf("\n");
printf("Wynik 3: %lf czy w przyblizeniu rowne 1? %s",f, fabs(f-1) < (EPS_FLOAT*0.1f) ? "tak": "nie" );
printf("\n");
system("pause");
}