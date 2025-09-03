#include <stdio.h>
#include <string.h>

// ------------------------------------
// Ejercicio 1: Definir un struct estudiante
// ------------------------------------
void ejercicio1() {
    printf("---- EJERCICIO 1 ----\n");

    struct Estudiante {
        char nombre[50];
        int edad;
        float promedio;
    };

    // Creamos una variable del tipo struct Estudiante
    struct Estudiante estudiante1 = {"Carlos", 20, 4.5};

    // Mostramos los datos
    printf("Nombre: %s\n", estudiante1.nombre);
    printf("Edad: %d\n", estudiante1.edad);
    printf("Promedio: %.2f\n", estudiante1.promedio);

    printf("\n");
}

// ------------------------------------
// Ejercicio 2: Arreglo de structs de libros
// ------------------------------------
void ejercicio2() {
    printf("---- EJERCICIO 2 ----\n");

    struct Libro {
        char titulo[50];
        char autor[50];
        int año;
    };

    // Creamos un arreglo de 5 libros
    struct Libro biblioteca[5] = {
        {"Cien Años de Soledad", "Gabriel Garcia Marquez", 1967},
        {"Don Quijote", "Miguel de Cervantes", 1605},
        {"La Odisea", "Homero", -800},
        {"El Principito", "Antoine de Saint-Exupery", 1943},
        {"1984", "George Orwell", 1949}
    };

    // Imprimimos todos los libros
    for (int i = 0; i < 5; i++) {
        printf("Libro %d:\n", i + 1);
        printf("  Titulo: %s\n", biblioteca[i].titulo);
        printf("  Autor: %s\n", biblioteca[i].autor);
        printf("  Año: %d\n", biblioteca[i].año);
    }

    printf("\n");
}

// ------------------------------------
// Ejercicio 3: Datos de una persona
// ------------------------------------
void ejercicio3() {
    printf("---- EJERCICIO 3 ----\n");

    struct Persona {
        char nombre[50];
        int edad;
        char ciudad[50];
    };

    struct Persona persona1;

    // Pedimos datos al usuario
    printf("Ingrese nombre: ");
    scanf("%s", persona1.nombre);

    printf("Ingrese edad: ");
    scanf("%d", &persona1.edad);

    printf("Ingrese ciudad: ");
    scanf("%s", persona1.ciudad);

    // Mostramos la información
    printf("\nDatos ingresados:\n");
    printf("Nombre: %s\n", persona1.nombre);
    printf("Edad: %d\n", persona1.edad);
    printf("Ciudad: %s\n", persona1.ciudad);

    printf("\n");
}

// ------------------------------------
// Ejercicio 4: Promedio de notas con structs
// ------------------------------------
void ejercicio4() {
    printf("---- EJERCICIO 4 ----\n");

    struct Estudiante {
        char nombre[50];
        float nota;
    };

    int n;
    printf("¿Cuántos estudiantes desea ingresar? ");
    scanf("%d", &n);

    struct Estudiante estudiantes[n];
    float suma = 0;

    for (int i = 0; i < n; i++) {
        printf("\nIngrese nombre del estudiante %d: ", i + 1);
        scanf("%s", estudiantes[i].nombre);

        printf("Ingrese nota: ");
        scanf("%f", &estudiantes[i].nota);

        suma += estudiantes[i].nota;
    }

    float promedio = suma / n;
    printf("\nPromedio de notas: %.2f\n", promedio);

    printf("\n");
}

// ------------------------------------
// Ejercicio 5: Comparar dos structs
// ------------------------------------
void ejercicio5() {
    printf("---- EJERCICIO 5 ----\n");

    struct Persona {
        char nombre[50];
        int edad;
    };

    struct Persona p1 = {"Ana", 25};
    struct Persona p2 = {"Ana", 25};

    // Comparamos campo por campo
    if (strcmp(p1.nombre, p2.nombre) == 0 && p1.edad == p2.edad) {
        printf("Las dos personas son iguales.\n");
    } else {
        printf("Las dos personas son diferentes.\n");
    }

    printf("\n");
}

// ------------------------------------
// Función principal
// ------------------------------------
int main() {
    printf("=====================================\n");
    printf("   PROGRAMAS CON STRUCT EN C\n");
    printf("=====================================\n\n");

    ejercicio1();
    ejercicio2();
    ejercicio3();
    ejercicio4();
    ejercicio5();

    printf("=====================================\n");
    printf("   FIN DEL PROGRAMA\n");
    printf("=====================================\n");

    return 0;
}
