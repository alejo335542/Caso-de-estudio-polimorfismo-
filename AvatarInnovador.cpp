#include "AvatarInnovador.h"

AvatarInnovador::AvatarInnovador() : pasos_dados(0), patrullando_derecha(true) {
    // El constructor inicializa el estado de la patrulla.
}

void AvatarInnovador::mover(char direccion) {
    char move_char;

    if (patrullando_derecha) {
        move_char = 'D'; // Mover a la derecha
        pasos_dados++;
        if (pasos_dados >= 4) {
            patrullando_derecha = false; // Cambiar de dirección
            pasos_dados = 0;
        }
    } else {
        move_char = 'A'; // Mover a la izquierda
        pasos_dados++;
        if (pasos_dados >= 4) {
            patrullando_derecha = true; // Cambiar de dirección
            pasos_dados = 0;
        }
    }
    
    // Usar la lógica de la clase base para ejecutar el movimiento
    Avatar::mover(move_char);
}