#include "escalera.h"
#include "funciones.h"

escalera::escalera(int clave)
{
    this->clave = clave;
}

std::string escalera::cifrar (std::string texto)
{
    std::string texto_cifrado;
    int tam = texto.size();
    bool sw = true;

    if (mod(tam-1, clave-1) != 0){
        int temp = clave;
        while (tam > temp){
            texto += "X";
            tam ++;
            temp += clave-1;
        }
    }

    for (int i = clave; i > 0; i--){
        //while ()
    }
}



std::string escalera::decifrar (std::string texto)
{

}

escalera::~escalera()
{
    //dtor
}
