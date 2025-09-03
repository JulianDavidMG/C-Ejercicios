#include <stdio.h>

// ----------------------------------------------------
// Ejercicio 1: Factorial con long
// ----------------------------------------------------
void ejercicio1() {
    long n, i;
    long factorial = 1;

    printf("=== EJERCICIO 1: Factorial con long ===\n");

    printf("Ingrese un número (positivo): ");
    scanf("%ld", &n);

    if (n < 0) {
        printf("El factorial no está definido para números negativos.\n\n");
        return;
    }

    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("El factorial de %ld es: %ld\n\n", n, factorial);
}

// ----------------------------------------------------
// Ejercicio 2: Suma de dos números long
// ----------------------------------------------------
void ejercicio2() {
    long a, b, suma;

    printf("=== EJERCICIO 2: Suma de long ===\n");

    printf("Ingrese el primer número: ");
    scanf("%ld", &a);
    printf("Ingrese el segundo número: ");
    scanf("%ld", &b);

    suma = a + b;

    printf("La suma de %ld y %ld es: %ld\n\n", a, b, suma);
}

// ----------------------------------------------------
// Ejercicio 3: Contar impares en un arreglo de long
// ----------------------------------------------------
void ejercicio3() {
    int n, i, contador = 0;

    printf("=== EJERCICIO 3: Contar impares en arreglo ===\n");

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    long arr[n];  // arreglo de tamaño dinámico

    for (i = 0; i < n; i++) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%ld", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            contador++;
        }
    }

    printf("El arreglo contiene %d números impares.\n\n", contador);
}

// ----------------------------------------------------
// Ejercicio 4: Determinar si un número long es primo
// ----------------------------------------------------
void ejercicio4() {
    long n, i;
    int esPrimo = 1; // asumimos que es primo

    printf("=== EJERCICIO 4: Verificar primo ===\n");

    printf("Ingrese un número: ");
    scanf("%ld", &n);

    if (n <= 1) {
        esPrimo = 0; // 0 y 1 no son primos
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                esPrimo = 0;
                break;
            }
        }
    }

    if (esPrimo) {
        printf("%ld es un número primo.\n\n", n);
    } else {
        printf("%ld NO es un número primo.\n\n", n);
    }
}

// ----------------------------------------------------
// Ejercicio 5: Multiplicación de dos números grandes
// ----------------------------------------------------
void ejercicio5() {
    long a, b, producto;

    printf("=== EJERCICIO 5: Multiplicación con long ===\n");

    printf("Ingrese el primer número: ");
    scanf("%ld", &a);
    printf("Ingrese el segundo número: ");
    scanf("%ld", &b);

    producto = a * b;

    printf("El producto de %ld y %ld es: %ld\n\n", a, b, producto);
}

// ----------------------------------------------------
// Función principal
// ----------------------------------------------------
int main() {
    printf("=====================================\n");
    printf("   PROGRAMAS CON LONG EN C\n");
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
