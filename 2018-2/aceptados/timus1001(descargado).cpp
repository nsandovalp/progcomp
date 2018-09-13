#include <stdio.h> 
#include <math.h>
 
double buf[128 * 1024];
int main()
{
    int i = 0;
    unsigned long long n; // entero de 64 bit
    while (scanf("%llu", &n) != EOF) {
        buf[i ++] = (double)sqrt(n * 1.0); // almacena en el buffer las raices cuadradas de los numeros ingresados
    }
    for (; --i >= 0; ) {
        printf("%.4lf\n", buf[i]); // imprime en orden reverso
    }
    return 0;
}
