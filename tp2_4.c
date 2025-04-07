#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

struct compu
{
  int velocidad;        // Velocidad de procesamiento en GHz (valor entre 1 y 3)
  int anio;             // Año de fabricación (valor entre 2015 y 2024)
  int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
  char *tipo_cpu;       // Tipo de procesador (apuntador a cadena de caracteres)
};

void listarPCs(struct compu pcs[], int cantidad);

void mostrarMasVieja(struct compu pcs[], int cantidad);

void mostrarMasVeloz(struct compu pcs[], int cantidad);

int main()
{
  srand(time(NULL));

  struct compu pcs[N];

  char tipos[6][20] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

  char *tipo_cpu[6];

  for (int i = 0; i < 6; i++)
  {
    tipo_cpu[i] = tipos[i];
  }

  for (int i = 0; i < N; i++)
  {
    pcs[i].velocidad = 1 + rand() % 3;
    pcs[i].anio = 2015 + rand() % 10;
    pcs[i].cantidad_nucleos = 1 + rand() % 8;

    int indice = rand() % 6;
    pcs[i].tipo_cpu = tipo_cpu[indice];
  }

  listarPCs(pcs, N);

  mostrarMasVieja(pcs, N);

  mostrarMasVeloz(pcs, N);
}

void listarPCs(struct compu pcs[], int cantidad)
{

  for (int i = 0; i < cantidad; i++)
  {
    printf("\nDatos de la computadora %d:\n", i + 1);
    printf("Velocidad: %d GHz, ", pcs[i].velocidad);
    printf("Anio: %d, ", pcs[i].anio);
    printf("Cantidad de nucleos: %d, ", pcs[i].cantidad_nucleos);
    printf("Tipo de CPU: %s\n", pcs[i].tipo_cpu);
  }
}

void mostrarMasVieja(struct compu pcs[], int cantidad)
{
  int anio_mas_viejo = pcs[0].anio;

  for (int i = 0; i < cantidad; i++)
  {
    if (pcs[i].anio <= anio_mas_viejo)
    {
      anio_mas_viejo = pcs[i].anio;
    }
  }

  for (int i = 0; i < cantidad; i++)
  {
    if (pcs[i].anio == anio_mas_viejo)
    {
      printf("\nLa computadora mas vieja es la computadora %d:\n", i + 1 );
      printf("Velocidad: %d GHz, ", pcs[i].velocidad);
      printf("Anio: %d, ", pcs[i].anio);
      printf("Cantidad de nucleos: %d, ", pcs[i].cantidad_nucleos);
      printf("Tipo de CPU: %s\n", pcs[i].tipo_cpu);
      break;
    }
  }
}

void mostrarMasVeloz(struct compu pcs[], int cantidad){


  int velocidad_mas_rapida = pcs[0].velocidad;

  for (int i = 0; i < cantidad; i++)
  {
    if (pcs[i].velocidad >= velocidad_mas_rapida)
    {
      velocidad_mas_rapida = pcs[i].velocidad;
    }
  }

  for (int i = 0; i < cantidad; i++)
  {
    if (pcs[i].velocidad == velocidad_mas_rapida)
    {
      printf("\nLa computadora mas veloz es la computadora %d:\n", i + 1 );
      printf("Velocidad: %d GHz, ", pcs[i].velocidad);
      printf("Anio: %d, ", pcs[i].anio);
      printf("Cantidad de nucleos: %d, ", pcs[i].cantidad_nucleos);
      printf("Tipo de CPU: %s\n", pcs[i].tipo_cpu);
      break;
    }
  }
 
}