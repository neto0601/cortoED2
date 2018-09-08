#include <stdio.h>

int main(){

 int tamanio, cprimo, nprimo=0;

 /*Aqui se crean las dos matrices, dado que el producto de dos matrices sigue un lineamiento, decidi hacer que las
 dos matrices tengan el mismo tamanio para evitar problemas*/

   printf("Introduzca el tamanio de las dos matrices (numero de filas y de columnas)   ");
     scanf("%d", &tamanio);
       int matriz1[tamanio][tamanio];
       int matriz2[tamanio][tamanio];

//En estos dos bucles se llenan las matrices con los valores que el usuario desee

       for(int i=0; i<tamanio;i++){
         for(int j=0; j<tamanio; j++){
           printf("Escribe el valor de la matriz 1 en la posicion (%d, %d)    ",i+1, j+1);
           scanf("%d", &matriz1[i][j]);
         }
       }

       for(int i=0; i<tamanio;i++){
         for(int j=0; j<tamanio; j++){
           printf("Escribe el valor de la matriz 2 en la posicion (%d, %d)    ",i+1, j+1);
           scanf("%d", &matriz2[i][j]);
         }
       }

//En este bucle for se procede a multiplicar la matriz 1 y 2, y por consiguiente se crea la matriz 3

    int matriz3[tamanio][tamanio];

       for(int i=0;i<tamanio;i++){
           for(int j=0;j<tamanio;j++){
               matriz3[i][j]=0;
               for(int k=0;k<tamanio;k++){
                   matriz3[i][j]=(matriz3[i][j]+(matriz1[i][k]*matriz2[k][j]));
               }
           }
       }

//Aqui se muestra la tercera matriz

       printf("\n\n\t\t\t Matriz 3");
       printf("\n");
       for(int i=0;i<tamanio;i++){
           printf("\n\t\t");
           for(int j=0;j<tamanio;j++){
               printf("  %6d  ", matriz3[i][j]);
           }
       }

//Aqui verificaremos si la matriz 3 contiene numeros primos, y daremos ademas su posicion de existir


printf("\n\n\t\t\t Estos numeros son primos");
printf("\n\n\n\n");

      for(int i=0; i<tamanio; i++){
        for(int j=0; j<tamanio; j++){
         cprimo=0;
           for(int k=1; k<=matriz3[i][j]; k++){
             if(matriz3[i][j]%k==0){
               cprimo++;
             }
           }
             if(cprimo==2){
               nprimo++;

//la variable nprimo guarda el numero de primos que hay, esto es para instanciar el vector donde se guardaran

             printf("Este numero es primo: (%d) en la posicion (%d, %d)", matriz3[i][j], i+1, j+1);

//Combiene aclarar que las posiciones se mostraran al usuario empezando desde 1,1 para aquellos usuarios no familiarizados con las matrices

             printf("\n\n\n");
           }
        }
      }

//Que largo esta esto :'v
//Aqui meteremos los primos en un vector

int vector[nprimo];
  printf("\n");
   return 0;
}
