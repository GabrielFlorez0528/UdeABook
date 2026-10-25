#include "Persistencia.h"
#include <fstream>

void Persistencia::cargarUsuarios()
{
    std::ifstream archivo("C:/Users/Usuario/Desktop/Informatica II/Teoria/Desafio II/Codigo/UdeABook/data/usuarios.txt");

    if(!archivo)
        return;

}
