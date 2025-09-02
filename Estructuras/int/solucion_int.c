#include <stdio.h>

// ----------------------------------------------------
// Ejercicio 1: Suma de dos números enteros
// ----------------------------------------------------
void ejercicio1() {
    int a, b, suma;

    printf("=== EJERCICIO 1: Suma de dos enteros ===\n");

    // Pedimos dos números enteros
    printf("Ingrese el primer número entero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo número entero: ");
    scanf("%d", &b);

    // Calculamos la suma
    suma = a + b;

    // Mostramos el resultado
    printf("La suma de %d y %d es: %d\n\n", a, b, suma);
}

// ----------------------------------------------------
// Ejercicio 2: Número par o impar
// ----------------------------------------------------
void ejercicio2() {
    int num;

    printf("=== EJERCICIO 2: Par o impar ===\n");

    // Pedimos un número
    printf("Ingrese un número entero: ");
    scanf("%d", &num);

    // Verificamos si el número es par o impar
    if (num % 2 == 0) {
        printf("El número %d es PAR.\n\n", num);
    } else {
        printf("El número %d es IMPAR.\n\n", num);
    }
}

// ----------------------------------------------------
// Ejercicio 3: Factorial de un número
// ----------------------------------------------------
void ejercicio3() {
    int n, i;
    long long factorial = 1; // usamos long long para valores grandes

    printf("=== EJERCICIO 3: Factorial ===\n");

    // Pedimos un número entero positivo
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("El factorial no está definido para números negativos.\n\n");
        return;
    }

    // Calculamos el factorial con un ciclo
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    // Mostramos el resultado
    printf("El factorial de %d es: %lld\n\n", n, factorial);
}

// ----------------------------------------------------
// Ejercicio 4: Mayor de tres números
// ----------------------------------------------------
void ejercicio4() {
    int a, b, c, mayor;

    printf("=== EJERCICIO 4: Mayor de tres números ===\n");

    // Pedimos tres números
    printf("Ingrese el primer número: ");
    scanf("%d", &a);
    printf("Ingrese el segundo número: ");
    scanf("%d", &b);
    printf("Ingrese el tercer número: ");
    scanf("%d", &c);

    // Suponemos que el primero es el mayor
    mayor = a;

    // Comparamos con el segundo
    if (b > mayor) {
        mayor = b;
    }

    // Comparamos con el tercero
    if (c > mayor) {
        mayor = c;
    }

    // Mostramos el resultado
    printf("El mayor de los tres números es: %d\n\n", mayor);
}

// ----------------------------------------------------
// Ejercicio 5: Contar del 1 al 100
// ----------------------------------------------------
void ejercicio5() {
    int i;

    printf("=== EJERCICIO 5: Contar del 1 al 100 ===\n");

    // Usamos un ciclo for para contar del 1 al 100
    for (i = 1; i <= 100; i++) {
        printf("%d ", i);
    }

    printf("\n\n");
}

// ----------------------------------------------------
// Función principal
// ----------------------------------------------------
int main() {
    printf("=====================================\n");
    printf("   PROGRAMAS CON ENTEROS EN C\n");
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
