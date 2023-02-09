#include "Neurona.h"

Neurona::Neurona(Nodo *nodoInicio)
{
	h=nodoInicio;
}

Neurona::Neurona()
{
	h=nullptr;      //Asigna Nulo a h
	//ctor
}

void Neurona::insertarFinalId(int d)
{
	Nodo *aux=new Nodo(d ,nullptr);
	Nodo *tmp=h;

if(!tmp) //
{
	h=aux;
}
else
{
	while(tmp->sig!=nullptr)
	{
		tmp=tmp->sig;
	}
tmp->sig=aux;
}
}

void Neurona::insertarFinalPosx(int d)
{
    Neurona *temp=new Neurona();

	Nodo *aux=new Nodo(d ,nullptr);
	Nodo *tmp=h;

if(!tmp) //
{
	h=aux;
}
else
{
	while(tmp->sig!=nullptr)
	{
		tmp=tmp->sig;
	}
tmp->sig=aux;
}
}

void Neurona::insertarFinalPosy(int d)
{
    Neurona *temp=new Neurona();

	Nodo *aux=new Nodo(d ,nullptr);
	Nodo *tmp=h;

if(!tmp) //
{
	h=aux;
}
else
{
	while(tmp->sig!=nullptr)
	{
		tmp=tmp->sig;
	}
tmp->sig=aux;
}
}

void Neurona::insertarFinalred(int d)
{
    Neurona *temp=new Neurona();

	Nodo *aux=new Nodo(d ,nullptr);
	Nodo *tmp=h;

if(!tmp) //
{
	h=aux;
}
else
{
	while(tmp->sig!=nullptr)
	{
		tmp=tmp->sig;
	}
tmp->sig=aux;
}
}

void Neurona::insertarFinalgreen(int d)
{
    Neurona *temp=new Neurona();

	Nodo *aux=new Nodo(d ,nullptr);
	Nodo *tmp=h;

if(!tmp) //
{
	h=aux;
}
else
{
	while(tmp->sig!=nullptr)
	{
		tmp=tmp->sig;
	}
tmp->sig=aux;
}
}

void Neurona::insertarFinalblue(int d)
{
    Neurona *temp=new Neurona();

	Nodo *aux=new Nodo(d ,nullptr);
	Nodo *tmp=h;

if(!tmp) //
{
	h=aux;
}
else
{
	while(tmp->sig!=nullptr)
	{
		tmp=tmp->sig;
	}
tmp->sig=aux;
}
}


void Neurona::insertarInicioId(int d)
{
    Nodo *aux=new Nodo(d, nullptr);
    Nodo *tmp=h;

    aux->sig=tmp;  //Auxiliar en su parte siguiente es igual a temporal
    h=aux;  //h es igual a auxiliar
}

void Neurona::insertarInicioPosx(int d)
{
    Neurona *temp=new Neurona();

    Nodo *aux=new Nodo(d, nullptr);
    Nodo *tmp=h;

    aux->sig=tmp;  //Auxiliar en su parte siguiente es igual a temporal
    h=aux;  //h es igual a auxiliar
}

void Neurona::insertarInicioPosy(int d)
{
    Neurona *temp=new Neurona();

    Nodo *aux=new Nodo(d, nullptr);
    Nodo *tmp=h;

    aux->sig=tmp;  //Auxiliar en su parte siguiente es igual a temporal
    h=aux;  //h es igual a auxiliar
}

void Neurona::insertarIniciored(int d)
{
    Neurona *temp=new Neurona();

    Nodo *aux=new Nodo(d, nullptr);
    Nodo *tmp=h;

    aux->sig=tmp;  //Auxiliar en su parte siguiente es igual a temporal
    h=aux;  //h es igual a auxiliar
}

void Neurona::insertarIniciogreen(int d)
{
    Neurona *temp=new Neurona();

    Nodo *aux=new Nodo(d, nullptr);
    Nodo *tmp=h;

    aux->sig=tmp;  //Auxiliar en su parte siguiente es igual a temporal
    h=aux;  //h es igual a auxiliar
}

void Neurona::insertarInicioblue(int d)
{
    Neurona *temp=new Neurona();

    Nodo *aux=new Nodo(d, nullptr);
    Nodo *tmp=h;

    aux->sig=tmp;  //Auxiliar en su parte siguiente es igual a temporal
    h=aux;  //h es igual a auxiliar
}


void Neurona::mostrarId(void)
{
	Nodo *tmp=h;

if(tmp==nullptr)
	cout<<"Lista vacia..."<<endl;
else
	while(tmp)
	{
		cout<<tmp->dato<<", ";
		tmp=tmp->sig;
	}
}

void Neurona::mostrarPosx(void)
{
	Nodo *temp=h;

if(temp==nullptr)
	cout<<"Lista vacia..."<<endl;
else
	while(temp)
	{
		cout<<temp->dato<<", ";
		temp=temp->sig;
	}
}

void Neurona::mostrarPosy(void)
{
	Nodo *temp=h;

if(temp==nullptr)
	cout<<"Lista vacia..."<<endl;
else
	while(temp)
	{
		cout<<temp->dato<<", ";
		temp=temp->sig;
	}
}

void Neurona::mostrarRed(void)
{
	Nodo *temp=h;

if(temp==nullptr)
	cout<<"Lista vacia..."<<endl;
else
	while(temp)
	{
		cout<<temp->dato<<", ";
		temp=temp->sig;
	}
}

void Neurona::mostrarGreen(void)
{
	Nodo *temp=h;

if(temp==nullptr)
	cout<<"Lista vacia..."<<endl;
else
	while(temp)
	{
		cout<<temp->dato<<", ";
		temp=temp->sig;
	}
}

void Neurona::mostrarBlue(void)
{
	Nodo *temp=h;

if(temp==nullptr)
	cout<<"Lista vacia..."<<endl;
else
	while(temp)
	{
		cout<<temp->dato<<", ";
		temp=temp->sig;
	}
}

bool Neurona::estaVacia() //Mostrar si la lista está vacia
{
    Nodo *tmp=h;
    return tmp==nullptr;
        cout<<"Esta vacia...."<<endl;
}
