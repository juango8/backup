#include "cesar.h"
#include "funciones.h"

cesar::cesar(int x)
{
    this->alfabeto = "abcdefghijklmnopqrstuvwxyz ";
    this->tam = alfabeto.size();
    this->clave = x;
}

std::string cesar::cifrar(std::string texto)
{
    int temp;
	std::string textocifrado/* = ""*/;

	for(unsigned int i = 0; i < texto.size(); i++){
		temp = mod(alfabeto.find(texto[i]) + clave, tam);
		textocifrado += alfabeto[temp];
	}
	return textocifrado;
}

std::string cesar::decifrar(std::string texto)
{
    /*int temp;
	std::string textodecifrado = "";
	for(int i = 0; i < texto.size(); i++){
		temp = mod(alfabeto.find(texto[i]) - clave, tam);
		textodecifrado += alfabeto[temp];
	}
	return textodecifrado;*/
    clave = -clave;
    return cifrar(texto);

}

cesar::~cesar()
{
    //dtor
}
