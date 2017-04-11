#include <iostream>

using namespace std;

int tam_bits (int x){
    int temp = 0;

    while (x != 0){
        x = (x >> 1);
        temp++;
    }
    return temp;
}

int desplazamiento(int A, int Q, int Q_1){
    int temp;

    temp = (A << tam_bits(Q)+1);
    temp += Q;
    temp += Q_1;

    return temp;
}

int booth(int multiplicando, int multiplicador, int n){

    int A = 0;
    int Q_1 = 0;
    int M = multiplicando;
    int Q = multiplicador;
    int contador = n;

    while (contador != 0){
        if ((Q % 2) & (Q_1 == 1)){
            A += M;
        }
        else if (~(Q % 2) & (Q_1 == 0)){
            A -= M;
        }

    }

    return 0;
}

int main()
{
    int c = 432;

    cout << sizeof(c) << endl;
    return 0;
}
