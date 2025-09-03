#include <stdio.h>

// ---------------------------------------------------
// Ejercicio 1: Declara una union con un int y un float
// ---------------------------------------------------
void ejercicio1() {
    union Numero {
        int entero;
        float decimal;
    };

    union Numero n;

    printf("=== Ejercicio 1 ===\n");
    n.entero = 10; // Guardamos un entero
    printf("Valor entero: %d\n", n.entero);

    n.decimal = 3.14; // Guardamos un float (sobrescribe al entero)
    printf("Valor float: %.2f\n", n.decimal);
    printf("Entero después de asignar float: %d\n\n", n.entero);
}

// ---------------------------------------------------
// Ejercicio 2: Union para almacenar diferentes tipos
// ---------------------------------------------------
void ejercicio2() {
    union Datos {
        int i;
        float f;
        char c;
    };

    union Datos d;

    printf("=== Ejercicio 2 ===\n");
    d.i = 100;
    printf("Entero: %d\n", d.i);

    d.f = 9.81;
    printf("Float: %.2f\n", d.f);

    d.c = 'A';
    printf("Char: %c\n\n", d.c);
}

// ---------------------------------------------------
// Ejercicio 3: Union que puede ser entero o carácter
// ---------------------------------------------------
void ejercicio3() {
    union Valor {
        int numero;
        char letra;
    };

    union Valor v;

    printf("=== Ejercicio 3 ===\n");
    v.numero = 65;
    printf("Como entero: %d\n", v.numero);

    v.letra = 'A';
    printf("Como caracter: %c\n\n", v.letra);
}

// ---------------------------------------------------
// Ejercicio 4: Tamaño de una union con varios tipos
// ---------------------------------------------------
void ejercicio4() {
    union MiUnion {
        int i;
        float f;
        double d;
        char c;
    };

    printf("=== Ejercicio 4 ===\n");
    printf("Tamaño de la union: %lu bytes\n\n", sizeof(union MiUnion));
}

// ---------------------------------------------------
// Ejercicio 5: Union para convertir entre tipos de datos
// ---------------------------------------------------
void ejercicio5() {
    union Convertir {
        int i;
        float f;
    };

    union Convertir conv;

    printf("=== Ejercicio 5 ===\n");
    conv.i = 1067030938; // Valor binario que corresponde a 1.5 en float
    printf("Interpretado como int: %d\n", conv.i);
    printf("Interpretado como float: %.2f\n\n", conv.f);
}

// ---------------------------------------------------
// Función principal
// ---------------------------------------------------
int main() {
    printf("=====================================\n");
    printf("   PROGRAMAS CON UNION EN C\n");
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
