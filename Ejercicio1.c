#include<stdio.h>

const int DEF_RANG_MIN =  -1;
const int DEF_RANG_MAX =-2;

const int VALOR_PAR = 2;


int main(){

    int i =0;
	int contadorPar= 0;
	int contadorImpar= 0;
    int rang_min = DEF_RANG_MIN;
    int rang_max = DEF_RANG_MAX;

    printf("Ingrese el numero de rango minimo:\n");
    scanf("%i", &rang_min);
    printf("Ingrese el numero de rango maximo:\n");
    scanf("%i", &rang_max);

    for(i = rang_min; i <= rang_max; i++){
        if((i % VALOR_PAR) == 0){
            printf("%i es par\n", i);
            contadorPar = contadorPar + 1;
        }else{
            //contadorImpar = contadorImpar + 1;
			contadorImpar++;
			printf("%i es impar\n", i);

        }            
    }
    printf("Cantidad de numeros pares: %i\n", contadorPar);
    printf("Cantidad de numeros impares: %i\n", contadorImpar);

    return 0;
}