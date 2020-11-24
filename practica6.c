#include <stdio.h>
#include <math.h>

/* 50. Leer un número entero y si es múltiplo de 4 mostrar en pantalla su mitad, si es múltiplo de 5
mostrar en pantalla su cuadrado y si es múltiplo e 6 mostrar en pantalla su primer dígito.
Asumir que el número no es mayor que 100. */

int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

int dividir(int numero){
    
    int mitad = 0;
    mitad = numero /2;
    return mitad;
}

int elevar_al_cuadrado(int numero){
    int cuadrado = 0;
    int potencia = 2;
    cuadrado = pow(numero, potencia);
    return cuadrado;
}

int sacar_ultimo_digito(int numero){
    int dig = 0;
    dig = numero % 10 ;
    return dig;
}

int main(){

    int numero = 0;
    numero = pedir_numero();

    if (numero < 100){
        if(numero % 4 == 0){
            int resultado = 0; 
            resultado = dividir(numero);
            printf("El numero es multiplo de 4. Su mitad es: %d\n", resultado);

        }else if (numero % 5 == 0)
        {
           int resultado = 0; 
            resultado = elevar_al_cuadrado(numero);
            printf("El numero es multiplo de 5. Su cuadrado es: %d\n", resultado);
        }else if (numero % 6 == 0)
        {
            int resultado = 0; 
            resultado = sacar_ultimo_digito(numero);
            printf("El numero es multiplo de 6 Su ultimo digito es: %d\n", resultado);
        }
    }
}