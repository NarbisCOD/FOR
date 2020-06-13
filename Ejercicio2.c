#include <stdio.h>
#include <string.h>

const int MAX_USUARIO = 0;

const int MAX_CLAVE = 10;
const int DEF_CLAVE = -1;
const int MAX_INTENTOS =  5;
const int CONTROL_INTENTOS = 4;


const int CLAVE_1 = 123;
const int CLAVE_2 = 456;
const int CLAVE_3 = 789;

int main(){    
    
    char usuario[MAX_USUARIO];

    char usuario_1[]="Narbis";
    char usuario_2[]="Amelia";
    char usuario_3[]="Merida3";

    int clave_ingresada = DEF_CLAVE;   
    int i =0;
   
    for ( i; i < MAX_INTENTOS; i++){
        printf("Ingrese nombre de usuario -Tienes %i intentos para acceder:\n", (MAX_INTENTOS - i));
        scanf("%s", &usuario);
        printf("Ingrese su Clave:\n");
        scanf("%i", &clave_ingresada);        
            if (((strcmp(usuario, usuario_1)==0) && (clave_ingresada == CLAVE_1)) || ((strcmp(usuario, usuario_2)==0) && (clave_ingresada == CLAVE_2)) || ((strcmp(usuario, usuario_3)==0) && (clave_ingresada == CLAVE_3))){
                printf("Bienvenido %s :)", usuario);
                i = MAX_INTENTOS;
                }else if(i < CONTROL_INTENTOS){
                    printf("Usuario y/o clave errada :< \n");
                }else{
                    printf("Espere un dia para volver a intentarlo");
                } 
    }
    return 0;
}

