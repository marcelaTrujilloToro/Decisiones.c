# include <stdio.h>

// 48. Leer un número entero y si es menor que 100 determinar si es primo.

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

    if (numero < 100 ){
        if(definir_num_primo(numero)==2){
             printf("El numero es un primo");
        }else
        {
             printf("El numero no es un primo");
        }
        
        
       
    }
    
}