#include <stdio.h>

// ----------------------------------------------------
// Ejercicio 1: Almacenar edades con short
// ----------------------------------------------------
void ejercicio1() {
    int n, i;

    printf("=== EJERCICIO 1: Edades con short ===\n");

    printf("¿Cuántas personas? ");
    scanf("%d", &n);

    short edades[n]; // arreglo de short

    for (i = 0; i < n; i++) {
        printf("Edad de la persona %d: ", i + 1);
        scanf("%hd", &edades[i]);
    }

    printf("\nEdades almacenadas:\n");
    for (i = 0; i < n; i++) {
        printf("Persona %d: %hd años\n", i + 1, edades[i]);
    }
    printf("\n");
}

// ----------------------------------------------------
// Ejercicio 2: Suma de dos números short
// ----------------------------------------------------
void ejercicio2() {
    short a, b, suma;

    printf("=== EJERCICIO 2: Suma de short ===\n");

    printf("Ingrese el primer número: ");
    scanf("%hd", &a);
    printf("Ingrese el segundo número: ");
    scanf("%hd", &b);

    suma = a + b;

    printf("La suma de %hd y %hd es: %hd\n\n", a, b, suma);
}

// ----------------------------------------------------
// Ejercicio 3: Verificar múltiplo de 5
// ----------------------------------------------------
void ejercicio3() {
    short n;

    printf("=== EJERCICIO 3: Múltiplo de 5 ===\n");

    printf("Ingrese un número: ");
    scanf("%hd", &n);

    if (n % 5 == 0) {
        printf("%hd es múltiplo de 5.\n\n", n);
    } else {
        printf("%hd NO es múltiplo de 5.\n\n", n);
    }
}

// ----------------------------------------------------
// Ejercicio 4: Contar pares en arreglo de short
// ----------------------------------------------------
void ejercicio4() {
    int n, i, contador = 0;

    printf("=== EJERCICIO 4: Contar pares en arreglo ===\n");

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    short arr[n]; // arreglo de short

    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%hd", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            contador++;
        }
    }

    printf("El arreglo contiene %d números pares.\n\n", contador);
}

// ----------------------------------------------------
// Ejercicio 5: Convertir short a binario
// ----------------------------------------------------
void ejercicio5() {
    short n;
    int i;

    printf("=== EJERCICIO 5: Conversión a binario ===\n");

    printf("Ingrese un número: ");
    scanf("%hd", &n);

    printf("El número %hd en binario es: ", n);
    for (i = 15; i >= 0; i--) {  // 16 bits para short
        printf("%d", (n >> i) & 1);
    }
    printf("\n\n");
}

// ----------------------------------------------------
// Función principal
// ----------------------------------------------------
int main() {
    printf("=====================================\n");
    printf("   PROGRAMAS CON SHORT EN C\n");
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
