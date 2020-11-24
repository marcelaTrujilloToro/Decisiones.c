#include <stdio.h>


// 49. Leer un número entero y si es múltiplo de 4 determinar si su último dígito es primo.

int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
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

    int numero = 0;
    numero = pedir_numero();
    
    int dig = 0;
    if(numero % 4 == 0){

        dig = numero % 10;  
        if (definir_num_primo(dig)==2){
            printf("El ultimo digito es primo");
        }else
        {
            printf("El ultimo digito no es primo");
        }     
        
    }    
   
}

