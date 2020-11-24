#include <stdio.h>

/* 45. Leer un número entero de 2 dígitos y si es par mostrar en pantalla la suma de sus dígitos, si es
primo  mostrar en pantalla su último dígito y si es múltiplo de 5 y menor que 30
mostrar en pantalla el primer dígito. */

int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}


int sumar(int numero){   
   
    int suma = 0;   
    if (numero % 2 == 0){
        int dig1 = numero / 10;
        int dig2 = numero % 10;
        suma = dig1 + dig2;
    }
    printf("El numero ingresado es par. La suma de sus digitos es: %d.", suma);
    return suma;
   
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

int (int numero){
    int dig = numero / 10;
    printf("El primer digito es: %d", dig);
    return 0;
}

int main(){
    int num1=0;
    num1 = pedir_numero(); 

    if(num1 % 2 ==0){
        sumar(num1);

    }else 
    if( definir_num_primo(num1) == 2 ){
        int dig1 = num1 % 10;
        printf("El ultimo digito es: %d", dig1);

    }else
     if(num1 < 30  && num1 % 5 == 0 ){
        mostrar_primer_digito(num1);
    }
    
  
    return 0;
}
