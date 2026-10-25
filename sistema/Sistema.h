#ifndef SISTEMA_H
#define SISTEMA_H

#include "C:/Users/Usuario/Desktop/Informatica II/Teoria/Desafio II/Codigo/UdeABook/clases/Usuario.h"

class Sistema
{
private:

    Usuario** usuarios;

    int cantidadUsuarios;

    int** matrizAmistades;

public:

    Sistema();

    void cargarDatos();

    void login();

};

#endif
