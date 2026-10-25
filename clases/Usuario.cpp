#include "Usuario.h"
#include <cstring>

Usuario::Usuario()
{
}

Usuario::Usuario(const Usuario &otro)
{
    strncpy(usuario, otro.usuario, MAX_NOMBRE - 1);
    usuario[MAX_NOMBRE - 1] = '\0';
    strncpy(clave, otro.clave, MAX_CLAVE - 1);
    clave[MAX_CLAVE - 1] = '\0';
    strncpy(correo, otro.correo, MAX_CORREO - 1);
    correo[MAX_CORREO - 1] = '\0';
    strncpy(ciudad, otro.ciudad, MAX_CIUDAD - 1);
    ciudad[MAX_CIUDAD - 1] = '\0';
    strncpy(pais, otro.pais, MAX_PAIS - 1);
    pais[MAX_PAIS - 1] = '\0';
    strncpy(fechaNacimiento, otro.fechaNacimiento, MAX_FECHA - 1);
    fechaNacimiento[MAX_FECHA - 1] = '\0';
    strncpy(fechaRegistro, otro.fechaRegistro, MAX_FECHA - 1);
    fechaRegistro[MAX_FECHA - 1] = '\0';
    strncpy(fotoPerfil, otro.fotoPerfil, MAX_RUTA - 1);
    fotoPerfil[MAX_RUTA - 1] = '\0';
}

bool Usuario::operator==(const Usuario &otro)
{
    return strcmp(usuario, otro.usuario) == 0;
}
