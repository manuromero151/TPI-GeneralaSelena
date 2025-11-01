#include <iostream>
#include "funciones.h"
using namespace std;


///Un Jugador

void unJugador(){
    system("cls");
    string nombre;
    int ronda=0;
    int puntajeTotal, lanzamiento;
    cout << "Ingrese nombre del jugador: ";
    cin >> nombre;
    cout << "------------------------------------------------------------" << endl;
    cout << "TURNO DE " << nombre << " | RONDA N° " << ronda << " | PUNTAJE TOTAL: " << puntajeTotal << " PUNTOS" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "LANZAMIENTO N° " << lanzamiento << endl;
    cout << "------------------------------------------------------------" << endl;

    int dados[5];
for(int i=0;i<3;i++){
    do{

    tiradaDados(dados);

    ronda++;
    cout<<endl;
    cout<< "Ronda #"<<ronda<<endl;

    mostrarDados(dados);
    }while(ronda <= 2);


}
}
///modo "aleatorio"
int tirarDado(){
    return rand() %6+1;

}

void tiradaDados(int dados[]){
    for(int i=0; i<5; i++){
        dados[i] = tirarDado();
    }
}

void mostrarDados(int dados[]){
    cout<<"[";
    for(int i=0; i<5; i++){
            cout<<dados[i]<< " ";
    }
    cout<<"]"<<endl;

    int respuesta;
    do{
    system("pause");
    cout<<"¿CONTINUAR LANZANDO SI O NO?:"<<endl;
    cin>>respuesta;
    if (respuesta || "si") {

        } else if (respuesta && "no") {
            cout << "¡Deteniendo el lanzamiento!\n";
        } else {
            cout << "Respuesta no válida. Por favor, escribe 'si' o 'no'.\n";
        }
    }
    while(respuesta !=0);
    system("cls");



}



///escalera






///Dos jugadores


void puntajeMayor(){

}




