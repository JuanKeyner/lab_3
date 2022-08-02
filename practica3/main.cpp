#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
void registro();
int main()
{
    registro();

    return 0;
}

void registro(){
    ofstream listaDeUsiarios;

    listaDeUsiarios.open("C://Users//Juan//Documents//usuarios.txt",ios::out); //nombre y modo escritura lo crea desde cero o lo reepmplaza
    if (listaDeUsiarios.fail()){
        cout<<"no se pudo abrir la lista de usuarios.";
        exit(1);
    }


    listaDeUsiarios<<"";
    listaDeUsiarios.close();
}
