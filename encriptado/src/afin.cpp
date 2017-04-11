#include "afin.h"
#include <stdlib.h>
#include <iostream>
#include "funciones.h"

afin::afin()
{
    this->alfabeto = "abcdefghijklmnopqrstuvwxyz ";
    this->tam = alfabeto.size();
    generarclaves(tam);
    std::cout<< a << std::endl;
    std::cout<< b << std::endl;
}

void afin::generarclaves(int tam)
{
    //srand(TIME(NULL));
    a = rand() % 98;
    b = rand() % 98;

    while (euclides(a, tam) != 1)
        std::cout<< "LL" << std::endl;
        a = rand() % 100;
    this->a = a;
    this->b = b;
}

afin::~afin()
{
    //dtor
}
