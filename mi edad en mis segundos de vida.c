#include <stdio.h>
#include <stdlib.h>

int main(){
    double min = 60;
    double hora = 60;
    double dia = 24;
    double año = 365;
    double edad = 18;
    
    double yo= edad*año*dia*hora*min;
    

   printf("%f",yo+ 305*dia*hora*min);
   printf("\n");
  
   return 0;
  }
    