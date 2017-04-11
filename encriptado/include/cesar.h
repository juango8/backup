#ifndef CESAR_H
#define CESAR_H

#include <string>
#include <iostream>

class cesar
{
    public:
        cesar(int);
        std::string cifrar (std::string);
        std::string decifrar (std::string);
        ~cesar();

    private:
        std::string alfabeto;
        int clave;
        int tam;
};

#endif // CESAR_H
