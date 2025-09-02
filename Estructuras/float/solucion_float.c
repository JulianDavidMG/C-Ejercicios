#include <stdio.h>
#include <math.h> // Para sqrt()

// ------------------------------------
// Ejercicio 1: Área de un círculo
// ------------------------------------
void ejercicio1() {
    float radio, area;
    const float PI = 3.14159;

    printf("===== EJERCICIO 1: AREA DE UN CIRCULO =====\n");
    printf("Ingrese el radio: ");
    scanf("%f", &radio);

    area = PI * radio * radio; // Fórmula: pi * r^2
    printf("El area del circulo es: %.2f\n\n", area);
}

// ------------------------------------
// Ejercicio 2: Celsius a Fahrenheit
// ------------------------------------
void ejercicio2() {
    float celsius, fahrenheit;

    printf("===== EJERCICIO 2: CELSIUS A FAHRENHEIT =====\n");
    printf("Ingrese la temperatura en Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f °C equivalen a %.2f °F\n\n", celsius, fahrenheit);
}

// ------------------------------------
// Ejercicio 3: Promedio de 3 números
// ------------------------------------
void ejercicio3() {
    float a, b, c, promedio;

    printf("===== EJERCICIO 3: PROMEDIO DE 3 NUMEROS =====\n");
    printf("Ingrese el primer numero: ");
    scanf("%f", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &b);
    printf("Ingrese el tercer numero: ");
    scanf("%f", &c);

    promedio = (a + b + c) / 3;
    printf("El promedio es: %.2f\n\n", promedio);
}

// ------------------------------------
// Ejercicio 4: Comparar dos números
// ------------------------------------
void ejercicio4() {
    float x, y;

    printf("===== EJERCICIO 4: COMPARAR DOS NUMEROS =====\n");
    printf("Ingrese el primer numero: ");
    scanf("%f", &x);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &y);

    if(x > y) {
        printf("%.2f es mayor que %.2f\n\n", x, y);
    } else if(y > x) {
        printf("%.2f es mayor que %.2f\n\n", y, x);
    } else {
        printf("Ambos numeros son iguales: %.2f\n\n", x);
    }
}

// ------------------------------------
// Ejercicio 5: Raíz cuadrada
// ------------------------------------
void ejercicio5() {
    float num, raiz;

    printf("===== EJERCICIO 5: RAIZ CUADRADA =====\n");
    printf("Ingrese un numero: ");
    scanf("%f", &num);

    if(num < 0) {
        printf("No se puede calcular la raiz cuadrada de un numero negativo.\n\n");
    } else {
        raiz = sqrt(num); // Función de math.h
        printf("La raiz cuadrada de %.2f es %.2f\n\n", num, raiz);
    }
}

// ------------------------------------
// Función principal
// ------------------------------------
int main() {
    printf("=====================================\n");
    printf("   PROGRAMAS CON FLOAT EN C\n");
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
