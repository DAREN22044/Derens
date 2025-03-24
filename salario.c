#include <stdio.h>

int main() {
    int HST, PH, S;

    printf("Ingrese las horas trabajadas semanalmente: ");
    scanf("%d", &HST);
    
    printf("Ingrese el valor cada por hora: $ ");
    scanf("%d", &PH);

    
    if (HST <= 40) {
        S = HST * PH;
    } else {
        S =  (HST * (PH * 1.5 ));
    }

    printf("El salario semanal es: $ %d\n",  S);

    return 0;
}