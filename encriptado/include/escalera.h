#ifndef ESCALERA_H
#define ESCALERA_H

#include <string>
#include <iostream>

class escalera
{
    public:
        escalera(int);
        std::string cifrar (std::string);
        std::string decifrar (std::string);
        ~escalera();

    private:
        int clave;
};

#endif // ESCALERA_H
