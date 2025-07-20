#ifndef AVATARCPU_H
#define AVATARCPU_H

#include "Avatar.h" // Heredamos de Avatar 

class AvatarCPU : public Avatar {
public:
    // Sobrescribimos el método mover.
    // Aunque recibe una 'direccion', la ignoraremos para movernos aleatoriamente.
    void mover(char direccion) override;
};

#endif //AVATARCPU_H