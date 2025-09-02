#include <stdio.h>
#include <string.h>  // Para strlen()
#include <ctype.h>   // Para tolower(), toupper(), isdigit()

// ------------------------------------
// Ejercicio 1: Mostrar código ASCII
// ------------------------------------
void ejercicio1() {
    char c;
    printf("===== EJERCICIO 1: CODIGO ASCII =====\n");
    printf("Ingrese un caracter: ");
    scanf(" %c", &c);

    printf("El caracter '%c' tiene el codigo ASCII: %d\n\n", c, c);
}

// ------------------------------------
// Ejercicio 2: Vocal o consonante
// ------------------------------------
void ejercicio2() {
    char c;
    printf("===== EJERCICIO 2: VOCAL O CONSONANTE =====\n");
    printf("Ingrese una letra: ");
    scanf(" %c", &c);

    c = tolower(c); // Convertimos a minúscula para comparar fácilmente

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        printf("La letra '%c' es una VOCAL.\n\n", c);
    } else {
        printf("La letra '%c' es una CONSONANTE.\n\n", c);
    }
}

// ------------------------------------
// Ejercicio 3: Convertir a mayúscula
// ------------------------------------
void ejercicio3() {
    char c;
    printf("===== EJERCICIO 3: MINUSCULA A MAYUSCULA =====\n");
    printf("Ingrese una letra minuscula: ");
    scanf(" %c", &c);

    char mayuscula = toupper(c);

    printf("La letra en mayuscula es: %c\n\n", mayuscula);
}

// ------------------------------------
// Ejercicio 4: Contar letra en palabra
// ------------------------------------
void ejercicio4() {
    char palabra[100];
    char letra;
    int contador = 0;

    printf("===== EJERCICIO 4: CONTAR LETRA EN PALABRA =====\n");
    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    printf("Ingrese la letra a buscar: ");
    scanf(" %c", &letra);

    for(int i = 0; i < strlen(palabra); i++) {
        if(palabra[i] == letra) {
            contador++;
        }
    }

    printf("La letra '%c' aparece %d veces en la palabra %s.\n\n", letra, contador, palabra);
}

// ------------------------------------
// Ejercicio 5: Verificar si es dígito
// ------------------------------------
void ejercicio5() {
    char c;
    printf("===== EJERCICIO 5: VERIFICAR DIGITO =====\n");
    printf("Ingrese un caracter: ");
    scanf(" %c", &c);

    if(isdigit(c)) {
        printf("El caracter '%c' es un DIGITO NUMERICO.\n\n", c);
    } else {
        printf("El caracter '%c' NO es un digito numerico.\n\n", c);
    }
}

// ------------------------------------
// Función principal
// ------------------------------------
int main() {
    printf("=====================================\n");
    printf("   PROGRAMAS DE CARACTERES EN C\n");
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
