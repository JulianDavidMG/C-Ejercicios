#include <stdio.h>

// ------------------------------------
// Ejercicio 1: Enum días de la semana
// ------------------------------------
void ejercicio1() {
    printf("===== EJERCICIO 1: DIAS DE LA SEMANA =====\n");

    // Declaramos el enum
    enum DiaSemana { LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO };

    // Pedimos al usuario un valor
    int valor;
    printf("Ingrese un numero (0 = Lunes, 6 = Domingo): ");
    scanf("%d", &valor);

    // Imprimimos el día correspondiente
    switch(valor) {
        case LUNES: printf("El dia es Lunes.\n\n"); break;
        case MARTES: printf("El dia es Martes.\n\n"); break;
        case MIERCOLES: printf("El dia es Miercoles.\n\n"); break;
        case JUEVES: printf("El dia es Jueves.\n\n"); break;
        case VIERNES: printf("El dia es Viernes.\n\n"); break;
        case SABADO: printf("El dia es Sabado.\n\n"); break;
        case DOMINGO: printf("El dia es Domingo.\n\n"); break;
        default: printf("Valor invalido.\n\n");
    }
}

// ------------------------------------
// Ejercicio 2: Enum meses del año
// ------------------------------------
void ejercicio2() {
    printf("===== EJERCICIO 2: MESES DEL AÑO ====\n");

    enum Mes { ENERO = 1, FEBRERO, MARZO, ABRIL, MAYO, JUNIO,
               JULIO, AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE };

    int numero;
    printf("Ingrese un numero (1 - 12): ");
    scanf("%d", &numero);

    switch(numero) {
        case ENERO: printf("Enero\n\n"); break;
        case FEBRERO: printf("Febrero\n\n"); break;
        case MARZO: printf("Marzo\n\n"); break;
        case ABRIL: printf("Abril\n\n"); break;
        case MAYO: printf("Mayo\n\n"); break;
        case JUNIO: printf("Junio\n\n"); break;
        case JULIO: printf("Julio\n\n"); break;
        case AGOSTO: printf("Agosto\n\n"); break;
        case SEPTIEMBRE: printf("Septiembre\n\n"); break;
        case OCTUBRE: printf("Octubre\n\n"); break;
        case NOVIEMBRE: printf("Noviembre\n\n"); break;
        case DICIEMBRE: printf("Diciembre\n\n"); break;
        default: printf("Numero invalido.\n\n");
    }
}

// ------------------------------------
// Ejercicio 3: Enum semáforo
// ------------------------------------
void ejercicio3() {
    printf("===== EJERCICIO 3: SEMAFORO =====\n");

    enum Semaforo { ROJO, AMARILLO, VERDE };

    enum Semaforo estado = ROJO; // Estado inicial

    // Mostramos el estado según el valor
    if(estado == ROJO) {
        printf("El semaforo esta en ROJO.\n\n");
    }

    estado = AMARILLO;
    if(estado == AMARILLO) {
        printf("El semaforo esta en AMARILLO.\n\n");
    }

    estado = VERDE;
    if(estado == VERDE) {
        printf("El semaforo esta en VERDE.\n\n");
    }
}

// ------------------------------------
// Ejercicio 4: Enum niveles de dificultad
// ------------------------------------
void ejercicio4() {
    printf("===== EJERCICIO 4: NIVELES DE DIFICULTAD =====\n");

    enum Dificultad { FACIL = 1, MEDIO, DIFICIL };

    printf("Nivel %d: Facil\n", FACIL);
    printf("Nivel %d: Medio\n", MEDIO);
    printf("Nivel %d: Dificil\n\n", DIFICIL);
}

// ------------------------------------
// Ejercicio 5: Recorrer un enum
// ------------------------------------
void ejercicio5() {
    printf("===== EJERCICIO 5: RECORRER ENUM =====\n");

    enum Colores { ROJO = 1, AZUL, VERDE, AMARILLO, NEGRO };

    for(int i = ROJO; i <= NEGRO; i++) {
        switch(i) {
            case ROJO: printf("Rojo\n"); break;
            case AZUL: printf("Azul\n"); break;
            case VERDE: printf("Verde\n"); break;
            case AMARILLO: printf("Amarillo\n"); break;
            case NEGRO: printf("Negro\n"); break;
        }
    }
    printf("\n");
}

// ------------------------------------
// Función principal
// ------------------------------------
int main() {
    printf("=====================================\n");
    printf("   PROGRAMAS CON ENUM EN C\n");
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
