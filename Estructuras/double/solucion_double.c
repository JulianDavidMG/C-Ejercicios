#include <stdio.h>

// ------------------------------------
// Ejercicio 1: Aproximación de PI con Leibniz
// ------------------------------------
void ejercicio1() {
    int n = 1000; // Cantidad de términos
    double pi = 0.0;

    printf("===== EJERCICIO 1: VALOR DE PI (SERIE DE LEIBNIZ) =====\n");

    for(int i = 0; i < n; i++) {
        // Fórmula: pi/4 = 1 - 1/3 + 1/5 - 1/7 + ...
        if(i % 2 == 0) {
            pi += 1.0 / (2*i + 1);
        } else {
            pi -= 1.0 / (2*i + 1);
        }
    }

    pi *= 4.0; // Multiplicamos por 4 para obtener pi
    printf("El valor aproximado de PI con %d terminos es: %.10lf\n\n", n, pi);
}

// ------------------------------------
// Ejercicio 2: Suma de dos doubles
// ------------------------------------
void ejercicio2() {
    double a, b;
    printf("===== EJERCICIO 2: SUMA DE DOS DOUBLES =====\n");

    printf("Ingrese el primer numero: ");
    scanf("%lf", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%lf", &b);

    printf("La suma es: %.10lf\n\n", a + b);
}

// ------------------------------------
// Ejercicio 3: Promedio de 5 números
// ------------------------------------
void ejercicio3() {
    double num, suma = 0.0;
    printf("===== EJERCICIO 3: PROMEDIO DE 5 NUMEROS =====\n");

    for(int i = 1; i <= 5; i++) {
        printf("Ingrese el numero %d: ", i);
        scanf("%lf", &num);
        suma += num;
    }

    double promedio = suma / 5.0;
    printf("El promedio es: %.2lf\n\n", promedio);
}

// ------------------------------------
// Ejercicio 4: Número positivo, negativo o cero
// ------------------------------------
void ejercicio4() {
    double x;
    printf("===== EJERCICIO 4: POSITIVO, NEGATIVO O CERO =====\n");

    printf("Ingrese un numero: ");
    scanf("%lf", &x);

    if(x > 0) {
        printf("El numero %.2lf es POSITIVO.\n\n", x);
    } else if(x < 0) {
        printf("El numero %.2lf es NEGATIVO.\n\n", x);
    } else {
        printf("El numero es CERO.\n\n");
    }
}

// ------------------------------------
// Ejercicio 5: Potencia de un número (sin pow)
// ------------------------------------
void ejercicio5() {
    double base, exponente;
    printf("===== EJERCICIO 5: POTENCIA DE UN NUMERO =====\n");

    printf("Ingrese la base: ");
    scanf("%lf", &base);

    printf("Ingrese el exponente (entero): ");
    scanf("%lf", &exponente);

    // Cálculo manual de potencia
    double resultado = 1.0;
    int exp = (int)exponente; // Solo tratamos exponentes enteros

    if(exp >= 0) {
        for(int i = 0; i < exp; i++) {
            resultado *= base;
        }
    } else {
        for(int i = 0; i < -exp; i++) {
            resultado *= base;
        }
        resultado = 1.0 / resultado; // Si el exponente es negativo
    }

    printf("%.2lf elevado a %.2lf es: %.5lf\n\n", base, exponente, resultado);
}

// ------------------------------------
// Función principal
// ------------------------------------
int main() {
    printf("=====================================\n");
    printf("   PROGRAMAS CON NUMEROS DE PUNTO FLOTANTE (double)\n");
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
