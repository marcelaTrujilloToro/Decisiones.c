# include <stdio.h>

/* 46. Leer un número entero de 2 dígitos y si terminar en 1 mostrar en pantalla su primer dígito, si
termina en 2 mostrar en pantalla la suma de sus dígitos y si termina en 3 mostrar en pantalla el
producto de sus dos dígitos. */

int sumar(int numero){
    int dig1 =0;
    int dig2 = 0;
    int suma = 0;

    dig1 = numero /10;
    dig2 = numero % 10;
    suma = dig1+ dig2;
    return suma;
}

int multiplicar(int numero){
    int dig1 =0;
    int dig2 = 0;
    int resultado = 0;

    dig1 = numero /10;
    dig2 = numero % 10;
    resultado = dig1 * dig2;
    return resultado;
}

int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

int main(){

    int numero = 0;
    numero = pedir_numero();

    if (numero % 10 == 1){
        int dig =0;
        dig = numero /10;
        printf("El numero termina en 1 -- El primer digito es: %d", dig);

    }else if (numero % 10 == 2){
        int suma = 0; 
        suma = sumar(numero);
        printf("El numero termina en 2 -- La suma de sus digitos es: %d", suma);
    }else
    {
        int resultado = 0;
        resultado = multiplicar(numero);
        printf("El numero termina en 3 -- La producto de sus digitos es: %d", resultado);
    }
}
