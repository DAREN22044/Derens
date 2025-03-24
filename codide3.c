#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero = 3; 
    printf("Número\n");
    

    
    while (numero <= 1000) {
        printf("%d\n", numero + numero);
        numero++; 
    }

    system("pause"); 
    return 0;
}