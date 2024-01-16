#include <stdio.h>

int main() {
    
    struct alumno {
        int matricula;
        char nombre[50];
        char direccion[50];
        char carrera[50];
        float promedio;
    } alumnos[100];  // Crear un arreglo de alumnos

    int n = 0;  
    int opcion;  

    do {
        // Mostramos el menu que elegira el usuario , este tendra dos opciones
        puts("\n1. Ingresar alumno");
        puts("2. Ver alumnos ingresados");
        puts("3. Salir");
        puts("Seleccione una opcion: ");
        scanf("%d", &opcion);
        getchar(); 

        switch (opcion) {
            case 1:  // Ingresar alumno y se guarde los datos, utilizamos el arreglo.
                if (n < 100) {
                    printf("\nIngrese los datos del alumno %d:\n", n + 1);
                    puts("Ingrese la matricula: ");
                    scanf("%d", &alumnos[n].matricula);
                    getchar();  
                    puts("Ingrese el nombre: ");
                    gets(alumnos[n].nombre);
                    puts("Ingrese la direccion: ");
                    gets(alumnos[n].direccion);
                    puts("Ingrese la carrera: ");
                    gets(alumnos[n].carrera);
                    puts("Ingrese el promedio: ");
                    scanf("%f", &alumnos[n].promedio);
                    getchar(); 
                    n++;
                } else {
                    puts("No se pueden ingresar más alumnos.");
                }
                break;
        }
    }
}