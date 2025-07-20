#include "AvatarCPU.h"
#include <cstdlib> // Para rand()
#include <ctime>   // Para srand()

// Implementación del movimiento aleatorio
void AvatarCPU::mover(char direccion) {

    // Lo adaptaremos para usar las mismas letras de dirección que el Avatar normal.
    int random_dir = std::rand() % 4;
    char move_char;

    switch (random_dir) {
        case 0: move_char = 'W'; break; // Arriba
        case 1: move_char = 'S'; break; // Abajo
        case 2: move_char = 'A'; break; // Izquierda
        case 3: move_char = 'D'; break; // Derecha
    }

    // Llamamos a la implementación de mover de la clase base (Avatar)
    // para que actualice la posición.
    Avatar::mover(move_char);
}