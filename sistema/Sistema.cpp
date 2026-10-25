#include "Sistema.h"
#include "Persistencia.h"

Sistema::Sistema()
{
    usuarios = nullptr;
    cantidadUsuarios = 0;
}

void Sistema::cargarDatos()
{
    Persistencia::cargarUsuarios();
}

void Sistema::login()
{
}