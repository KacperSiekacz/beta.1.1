#include <stdio.h>

int main() {
    printf("Hello, World!\n");

    printf("dodajmy siebie\n");
    printf("jestem\n");
    double potega;
    potega=0.1;
    for(int i=0; i<=19; i++)
        printf("10 do potegi %*d= %*.f \n",2,i, 20, potega=potega*10);
    return 0;
}
