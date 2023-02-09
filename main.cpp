#include <iostream>
#include "Nodo.h"
#include "Neurona.h"
#include "NodoFloat.h"
#include "NeuronaFloat.h"

using namespace std;

int main()
{
    int menu, aggIn, aggFin;
    Neurona *neu=new Neurona;
    NeuronaFloat *neuflo=new NeuronaFloat();

    do{
            system("cls");
        cout<<"ELIJA LA OPERACION A REALIZAR \n"<<endl;
        cout<<"1-. AGREGAR INICIO \n2.-AGREGAR FINAL \n3.- MOSTRAR"<<endl;
        cin>>menu;
        switch(menu)
        {
        case 1: //Agregar inicio
            do{
            system("cls");
            cout<<"\tAGREGAR INICIO"<<endl;
            cout<<"En donde desea agregar?"<<endl;
            cout<<"1.- ID \n2.- Voltaje \n3.- POSICION_X \n4.- POSICION_Y \n5.- RED \n6.- GREEN \n7.- BLUE"<<endl;
            cout<<"8.- SALIR"<<endl;
            cin>>aggIn;
            switch(aggIn)
            {
            case 1:
                neu->insertarInicioId(5);
                break;
            case 2:
                neuflo->insertarInicioVoltaje(5.5);
                break;
            case 3:
                neu->insertarInicioPosx(15);
                break;
            case 4:
                neu->insertarInicioPosy(20);
                break;
            case 5:
                neu->insertarIniciored(4);
                break;
            case 6:
                neu->insertarIniciogreen(8);
                break;
            case 7:
                neu->insertarInicioblue(2);
                break;
            }
            }while(aggIn!=8);
            break;

            case 2:
                do{
                system("cls");
                cout<<"\tAGREGAR FINAL"<<endl;
                cout<<"En donde desea agregar final?"<<endl;
                cout<<"1.- ID \n2.- Voltaje \n3.- POSICION_X \n4.- POSICION_Y \n5.- RED \n6.- GREEN \n7.- BLUE"<<endl;
                cout<<"8.- SALIR"<<endl;
                cin>>aggFin;
                switch(aggFin)
                {
                case 1:
                    neu->insertarFinalId(34);
                    break;
                case 2:
                    neuflo->insertarFinVoltaje(2.1);
                    break;
                case 3:
                    neu->insertarFinalPosx(12);
                    break;
                case 4:
                    neu->insertarFinalPosy(16);
                    break;
                case 5:
                    neu->insertarFinalred(23);
                    break;
                case 6:
                    neu->insertarFinalgreen(32);
                    break;
                case 7:
                    neu->insertarFinalblue(45);
                    break;
                }
                }while(aggFin!=8);
                break;
                case 3:
                    cout<<"\tMOSTRAR"<<endl;
                    neu->mostrarId();
                    neuflo->mostrarFlo();
                    neu->mostrarPosx();
                    neu->mostrarPosy();
                    neu->mostrarRed();
                    neu->mostrarGreen();
                    neu->mostrarBlue();
                    system("pause");
                    break;

        }
    }while(menu!=4);
    cout << "Hello world!" << endl;
    return 0;
}
