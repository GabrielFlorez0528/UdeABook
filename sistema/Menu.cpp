#include "Menu.h"
#include <iostream>

void Menu::principal()
{
    int opcion;

    do
    {
        std::cout<<"\n1. Administrar Amistades";
        std::cout<<"\n2. Ver Perfil";
        std::cout<<"\n3. Mensajes";
        std::cout<<"\n4. Sugerencias";
        std::cout<<"\n0. Salir";

        std::cin>>opcion;

    }while(opcion!=0);
}
