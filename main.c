///monto,tasa interes
#include <stdio.h>
#include <math.h>

float calculointeres(float a, float b) {
    return a * (b / 100);
}

int main(int argc, char const *argv[]) {
    int tiempo, i;
    float monto, interes, div, saldo, ts, ta, mm, ti;
    
    printf("Ingrese su monto a pedir: ");
    scanf("%f", &monto);
    printf("Ingrese la tasa de interes: ");
    scanf("%f", &interes);
    printf("Ingrese el plazo (Años): ");
    scanf("%d", &tiempo);
    
    div = monto / tiempo;
    saldo = monto;
    ti = 0; 
    
    printf("Año\tInteres\tMonto mensual\n");
    for (i = 1; i <= tiempo; i++) {
        ts = calculointeres(saldo, interes);
        ti += ts; 
        ta = div + ts;
        mm = ta / 12;
        saldo -= div;
        printf("%d\t%.2f\t%.2f\n", i, ts, mm);  
    }

    printf("El total de interes a pagar es: %.2f\n", ti);

    return 0;
}
