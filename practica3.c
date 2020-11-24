#include <stdio.h>

/* 47. Leer dos números enteros y si la diferencia entre los dos números es par mostrar en pantalla la
suma de los dígitos de los números, si dicha diferencia es un número primo menor que 10
entonces mostrar en pantalla el producto de los dos números y si la diferencia entre ellos
terminar en 4 mostrar en pantalla todos los dígitos por separado. */

int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

int restar(int numero1, int numero2){
    int diferencia = 0;
    diferencia = numero1 - numero2;
    return diferencia;
}

int multiplicar(int numero1, int numero2){
    int resultado = 0;
    resultado = numero1 * numero2;
}

int definir_num_primo(int numero){

    int contador = 0;
    for(int i=1; i<= numero; i++ ){
        if(numero % i ==0){
            contador++;
        }
    }

    return contador;

}

int main(){
    int num1 = 0;
    int num2 = 0;
    int diferencia = 0;
    num1 = pedir_numero();
    num2 = pedir_numero();
    diferencia = restar(num1, num2);

    int dig1 = 0;
    int dig2 =0;
    int dig3 = 0;
    int dig4 =0;
   
    dig1 = num1 /10;
    dig2 = num1 %10; 
    dig3 = num2 /10;
    dig4 = num2 %10;

    if (diferencia % 2 ==0){

        int suma = 0;       
        suma = dig1 + dig2 + dig3 + dig4;

        printf("La diferencia es par por lo tanto la suma de todos los digitos es: %d. \n", suma);

    }else if (diferencia <10 && definir_num_primo(diferencia)==2){
       int resultado =0;
       resultado = multiplicar(num1, num2);
       printf("La diferencia es primo menor que 10 por lo tanto el producto de los numeros es: %d. \n", resultado);

    }else if (diferencia % 4 == 0){
        printf("La diferencia es temina en 4 por lo tanto los digitos son:  %d, %d, %d, %d. \n", dig1, dig2, dig3, dig4);
    }
    
    return 0; 
}