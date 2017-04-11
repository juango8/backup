#ifndef AFIN_H
#define AFIN_H

#include <iostream>
#include <string>

class afin
{
    public:
        afin ();
        void generarclaves(int);
        std::string cifrar (std::string);
        std::string decifrar (std::string);
        ~afin();

    private:
        std::string alfabeto;
        int a, b;
        int tam;
};

#endif // AFIN_H
