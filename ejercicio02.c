#include <stdio.h>

int main(void){

int tamanio, posicion=0, aux, ma=0;

printf("Introduzca el tamanio del vector:   ");
  scanf("%d", &tamanio);
    int vector[tamanio];

/*La logica de este programa es extrana, muy extrana, pero es la unica forma que encontre de hacerlo, el vector al principio se
llena con un numero que nadie introduciria, el -3506, esto es para usarlo de comparacion en el bucle de validacion*/

     for(int i=0; i<tamanio; i++){
       vector[i]=-3506;
       }

//El primer valor se introducira sin ningun problema ya que no hay otros para compararlo

      printf("Escribe el valor del vector en la posicion (%d):    ",posicion);
      scanf("%d", &vector[posicion]);

//Aqui es donde se empiezan a validar las posiciones

       for(int i=1; i<=tamanio; i++){
         do{

//Al principio el valor se asigna a la posicion, sea igual a la anterior o no

           printf("Escribe el valor del vector en la posicion (%d):    ",i);
           scanf("%d", &vector[i]);

//Es en este bucle for donde se valida si es igual a algun numero del vector

           for(int j=0; j<i; j++){

//Si es igual, dentro del if se da un texto de advertencia y se le asigna a la posicion nuevamente el numero prohibido

             if(vector[i]==vector[j]){
               printf("Este valor ya se encuentra en el vector, introduzca otro \n");
               vector[i]=-3506;
             }
           }

/*Si entro al if, quiere decir que era igual, por lo que la condicion del do while se cumple y no deja salir del bucle
hasta que se introduzca un numero valido*/

}while(vector[i]==-3506);
           }

//Aqui se muestra el vector por primera vez

      printf("\n\n Este es el vector--->");
        printf("\t");
         for(int i=0;i<tamanio;i++){
             printf("  %6d  ", vector[i]);
         }

//Aqui se ordena el vector de forma descendente

        for(int i=0; i<tamanio; i++){
          for(int j=0; j<tamanio; j++){
            if(vector[j]<vector[j+1]){
              aux= vector[j];
              vector[j]= vector[j+1];
              vector[j+1]=aux;
            }
          }
        }
//Aqui se muestra el vector de forma descendente

     printf("\n\n Este es el vector ordenado de forma descendente--->");

     printf("\t");
      for(int i=0;i<tamanio;i++){
          printf("  %6d  ", vector[i]);
      }

//Aqui se calcula la media aritmetica y se muestra el resultado

     for(int i=0; i<tamanio; i++){
         ma=ma+vector[i];
        }
         float resultado= (ma/tamanio);

         printf("\n\n Esta es la media aritmetica--->  (%f)", resultado);

//Ahora se mostraran el mayor valor y el menor

     printf("\n\n Este es el mayor valor--->  %d", vector[0]);
      printf("\n\n");
     printf("\n\n Este es el menor valor--->  %d", vector[tamanio-1]);



printf("\n\n");


}
