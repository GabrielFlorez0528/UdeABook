#ifndef USUARIO_H
#define USUARIO_H

#include "C:/Users/Usuario/Desktop/Informatica II/Teoria/Desafio II/Codigo/UdeABook/Constantes.h"

class Usuario
{
private:

    char usuario[MAX_NOMBRE];
    char clave[MAX_CLAVE];

    char correo[MAX_CORREO];

    char ciudad[MAX_CIUDAD];
    char pais[MAX_PAIS];

    char fechaNacimiento[MAX_FECHA];
    char fechaRegistro[MAX_FECHA];

    char fotoPerfil[MAX_RUTA];

public:

    Usuario();

    Usuario(const Usuario &otro);

    bool operator==(const Usuario &otro);

};

#endif
