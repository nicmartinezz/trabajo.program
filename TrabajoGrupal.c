#include <stdio.h>

// Punto 1: Conversión de metros a centímetros y viceversa

// Código del alumno: Lucas Martin Rojas
// Link de GIT personal:
// Link del GIT grupal (Lider: Nicole Stefania Martinez):

float metros_a_centimetros(float metros)
{
    return metros * 100;
}

float centimetros_a_metros(float centimetros)
{
    return centimetros / 100;
}

// Punto 2: Conversión de centímetros a pulgadas y viceversa

// Código del alumno: Bianca Marina Sanchez
// Link de GIT personal:
// Link del GIT grupal (Lider: Nicole Stefania Martinez):

float centimetros_a_pulgadas(float centimetros)
{
    return centimetros / 2.54;
}

float pulgadas_a_centimetros(float pulgadas)
{
    return pulgadas * 2.54;
}

// Punto 3: Repetir texto X veces

// Código del alumno: Nicolas Gabriel Silva
// Link de GIT personal:
// Link del GIT grupal (Lider: Nicole Stefania Martinez):

void repetir(char* texto, int veces)
{
    for (int i = 0; i < veces; i++)
    {
        printf("%s\n", texto);
    }
}

// Mostrar un texto dentro de un cartel delimitado
void cartel(char* texto, int veces)
{
    printf("--------------------\n");
    repetir(texto, veces);
    printf("--------------------\n");
}

// Punto 4: Procedimiento para imprimir una línea de caracteres

// Código del alumno: Nicole Stefania Martinez
// Link de GIT personal:
// Link del GIT grupal (Lider: Nicole Stefania Martinez):

void linea(char simbolo)
{
    for (int i = 0; i < 20; i++)
    {
        printf("%c", simbolo);
    }
    printf("\n");
}

// Union de puntos

// Código del alumno: Nicole Stefania Martinez
// Link de GIT personal:
// Link del GIT grupal (Lider: Nicole Stefania Martinez):

int main()
{
    // Repetición de texto
    repetir("juan", 3);
    repetir("pepe", 2);
    
    // Cartel
    cartel("Maria", 5);
    
    // Conversión de metros a centímetros
    printf("La conversión de 2 metros a centímetros es: %.0fcm\n", metros_a_centimetros(2));
    
    // Línea de caracteres T
    linea('T');

    // Conversión a centímetros desde 0
    printf("La conversión de 80 centímetros a pulgadas es: %.4f\n", centimetros_a_pulgadas(80));
    
    // Línea de caracteres $
    linea('$');

    // Cartel con texto "Marcos"
    cartel("Marcos", 4);

    return 0;
}
