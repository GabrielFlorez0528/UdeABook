#ifndef MENSAJE_H
#define MENSAJE_H

class Mensaje
{
private:

    int emisor;
    int receptor;

    char fecha[11];

    char texto[513];

    bool leido;

public:

    Mensaje();

};

#endif
