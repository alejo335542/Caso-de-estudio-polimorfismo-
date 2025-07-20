#ifndef AVATARINNOVADOR_H
#define AVATARINNOVADOR_H

#include "Avatar.h"

class AvatarInnovador : public Avatar {
private:
    int pasos_dados;
    bool patrullando_derecha;

public:
    AvatarInnovador(); // Constructor para inicializar las variables
    void mover(char direccion) override;
};

#endif //AVATARINNOVADOR_H