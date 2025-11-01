#include <iostream>
#include <ctime>
#include "funciones.h"
using namespace std;

int main()
{
    int opcion;
    srand(time(0));

    do {
        system("cls");

        cout<<"MENU PRINCIPAL"<< endl;
        cout<<"-----------------"<< endl;
        cout<<"1.Jugar un jugador"<< endl;

        cout<<"3.Mostrar Puntuacion mas alta"<< endl;
        cout<<"4.Creditos"<< endl;
        cout<<"5.Salir"<< endl;
        cout<<"-----------------"<< endl;
        cout<<"Seleccione una opcion: ";
        cin>>opcion;

        switch(opcion)
        {
        case 1:
            unJugador();
            break;

        case 3:
            puntajeMayor();
            break;

        case 4:
            system("cls");
            cout<<"Materia:Programacion"<< endl;
            cout<<"Grupo:6"<< endl;
            cout<<"Integrantes:"<<endl;
            cout<<endl<<"Emanuel Acevedo _Legajo: "<<endl;
            cout<<endl<<"Diego Celan _ Legajo: "<< endl;
            cout<<endl<<"Alejandro Reinich _Legajo: "<< endl;
            cout<<endl<<"Selena Belizan_Legajo:" <<endl;
            cout<<endl;
            break;

        case 5:
            cout<<"Gracias por jugar."<<endl;
            return 0;
            break;

        default:
            cout<<"Opcion invalida."<< endl;
            break;
        }
        system("pause");

    }

    while(opcion !=0);
    return 0;
}
