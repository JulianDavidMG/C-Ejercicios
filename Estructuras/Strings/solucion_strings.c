#include <stdio.h>
#include <string.h>
#include <ctype.h>

// ----------------------------------------------------
// Ejercicio 1: Imprimir cadena al revés
// ----------------------------------------------------
void ejercicio1() {
    char cadena[100];
    int i, len;

    printf("=== EJERCICIO 1: Cadena al revés ===\n");
    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    // Eliminar salto de línea si lo hay
    cadena[strcspn(cadena, "\n")] = '\0';

    len = strlen(cadena);

    printf("Cadena al revés: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", cadena[i]);
    }
    printf("\n\n");
}

// ----------------------------------------------------
// Ejercicio 2: Contar vocales
// ----------------------------------------------------
void ejercicio2() {
    char cadena[100];
    int i, contador = 0;

    printf("=== EJERCICIO 2: Contar vocales ===\n");
    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    for (i = 0; cadena[i] != '\0'; i++) {
        char c = tolower(cadena[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }

    printf("La cadena contiene %d vocales.\n\n", contador);
}

// ----------------------------------------------------
// Ejercicio 3: Comparar cadenas
// ----------------------------------------------------
void ejercicio3() {
    char cad1[100], cad2[100];

    printf("=== EJERCICIO 3: Comparar cadenas ===\n");
    printf("Ingrese la primera cadena: ");
    fgets(cad1, sizeof(cad1), stdin);
    cad1[strcspn(cad1, "\n")] = '\0';

    printf("Ingrese la segunda cadena: ");
    fgets(cad2, sizeof(cad2), stdin);
    cad2[strcspn(cad2, "\n")] = '\0';

    if (strcmp(cad1, cad2) == 0) {
        printf("Las cadenas son IGUALES.\n\n");
    } else {
        printf("Las cadenas son DIFERENTES.\n\n");
    }
}

// ----------------------------------------------------
// Ejercicio 4: Concatenar cadenas
// ----------------------------------------------------
void ejercicio4() {
    char cad1[100], cad2[100];

    printf("=== EJERCICIO 4: Concatenar cadenas ===\n");
    printf("Ingrese la primera cadena: ");
    fgets(cad1, sizeof(cad1), stdin);
    cad1[strcspn(cad1, "\n")] = '\0';

    printf("Ingrese la segunda cadena: ");
    fgets(cad2, sizeof(cad2), stdin);
    cad2[strcspn(cad2, "\n")] = '\0';

    strcat(cad1, cad2);

    printf("Resultado de la concatenación: %s\n\n", cad1);
}

// ----------------------------------------------------
// Ejercicio 5: Contar palabras
// ----------------------------------------------------
void ejercicio5() {
    char cadena[200];
    int i, palabras = 0, enPalabra = 0;

    printf("=== EJERCICIO 5: Contar palabras ===\n");
    printf("Ingrese una frase: ");
    fgets(cadena, sizeof(cadena), stdin);

    for (i = 0; cadena[i] != '\0'; i++) {
        if (isspace(cadena[i])) {
            enPalabra = 0;
        } else if (!enPalabra) {
            enPalabra = 1;
            palabras++;
        }
    }

    printf("La frase contiene %d palabras.\n\n", palabras);
}

// ----------------------------------------------------
// Función principal
// ----------------------------------------------------
int main() {
    printf("=====================================\n");
    printf("   PROGRAMAS CON CADENAS EN C\n");
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
