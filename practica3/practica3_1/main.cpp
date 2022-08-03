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


    ofstream listaDeUsuarios("C://Users//Juan//Documents//usuarios.txt");
    cout<< "ingrese datos";
    char palabra[20];
    cin>>palabra;
    listaDeUsiarios<<palabra;

    listaDeUsiarios.close();


}



char* codificador(char* contenidoDelArchivo ){//de caracter a entero y de entero a binario
   int enteroAscii[50];
   //convertir de caracter a numero en tabla ascii
    for(int i=0;i<50;i++){
        enteroAscii[i]= contenidoDelArchivo[i];
    }
   //_________________________________________
   //_______de entero a binario_____________________
    char* Arreglobinario;
    int acomulador;

    for(int j=0;j<50;j++){

        while (enteroAscii[j]>1){
            acomulador=enteroAscii[j]%2;
        }
        Arreglobinario[j]=acomulador;


    }

    return Arreglobinario;



}

