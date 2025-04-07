#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
struct compu {
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
   };
   
   int main(){
     srand(time(NULL));

     struct compu pc[4];

     char *tipo_cpu[] = {"intel i5", "intel i7", "AMD Ryzen 5", "AMD Ryzen 7", "intel i9"};


      
   for (int i = 0; i < N; i++)
   {
    pc[i].velocidad = 1 + rand() % 3;
    pc[i].anio = 2015 + rand() % 10;
    pc[i].cantidad_nucleos = 1 + rand()% 8;
    
    int indice = rand() % 5;
    pc[i].tipo_cpu = tipo_cpu[indice];
   }
   
   for ( int i = 0; i < N; i++)
   {
    printf("\nDatos de la computadora %d:\n", i+1);
    printf("Velocidad: %d GHz, ", pc[i].velocidad);
    printf("Anio: %d, ", pc[i].anio);
    printf("Cantidad de nucleos: %d, ", pc[i].cantidad_nucleos);
    printf("Tipo de CPU: %s\n", pc[i].tipo_cpu);

   }
   

   }