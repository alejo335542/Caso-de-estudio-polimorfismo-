#include "Juego.h"
#include "Tablero.h"
#include "VistaConsola.h"
#include "LogicaDeMovimiento.h"
#include "Avatar.h"
#include "AvatarCPU.h" // 1. Incluir el nuevo header
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    // Inicializar la semilla para el generador de números aleatorios
    srand(time(0));

    Tablero tablero;
    tablero.cargarDesdeArchivo("dataTablero.txt"); [cite: 255]

    // 2. Crear instancias de Avatar y AvatarCPU
    IPersonaje* avatar = new Avatar(); [cite: 257]
    avatar->setPosicionFila(2); [cite: 258]
    avatar->setPosicionColumna(2); [cite: 259]

    IPersonaje* cpu = new AvatarCPU(); [cite: 257]
    cpu->setPosicionFila(10); [cite: 259]
    cpu->setPosicionColumna(5); [cite: 260]

    // 3. Crear el vector de jugadores
    std::vector<IPersonaje*> jugadores = {avatar, cpu}; [cite: 261, 262]

    LogicaDeMovimiento logicaDeMovimiento;
    Juego juego(&tablero, jugadores, &logicaDeMovimiento, true); [cite: 266]
    VistaConsola vista(&tablero, jugadores); [cite: 267]

    while (juego.getEstado()) { [cite: 268]
        vista.mostrarJuego(); [cite: 269]
        vista.mostrarMensaje("Digite su movimiento (W, A, S, D):"); [cite: 270]
        char input = vista.getEntradaConsola();
        
        // La lógica de movimiento moverá a ambos personajes.
        // El Avatar usará el input, el AvatarCPU lo ignorará y se moverá aleatoriamente.
        logicaDeMovimiento.mover(jugadores, input); [cite: 271]
    }

    // Liberar memoria
    delete avatar;
    delete cpu;

    return 0; [cite: 275]
}
