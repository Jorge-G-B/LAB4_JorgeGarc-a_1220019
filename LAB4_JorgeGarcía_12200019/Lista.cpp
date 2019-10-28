#include "Lista.h"



Lista::Lista()
{
}


Lista::~Lista()
{
}

void Lista::InsertarI(Pokemon valor) {
	NodoL *NuevoNodo = new NodoL();
	NuevoNodo->Valor = valor;
	if (Head == nullptr) {
		Head = NuevoNodo;
		End = NuevoNodo;
	}
	else
	{
		NuevoNodo->Siguiente = Head;
		Head->Anterior = NuevoNodo;
		Head = NuevoNodo;
	}
	NElementos++;
}
void Lista::InsertarF(Pokemon valor) {

	NodoL *NuevoNodo = new NodoL();
	NuevoNodo->Valor = valor;
	if (Head == nullptr) {
		Head = NuevoNodo;
		End = NuevoNodo;
	}
	else
	{
		End->Siguiente = NuevoNodo;
		NuevoNodo->Anterior = End;
		End = NuevoNodo;
	}
	NElementos++;
}
void Lista::InsertarP(Pokemon valor, int posicion) {

	NodoL *NuevoNodo = new NodoL;
	NuevoNodo->Valor = valor;
	if (Head == nullptr)
	{
		Head = NuevoNodo;
		End = NuevoNodo;
	}
	else
	{
		if (posicion == 1)
		{
			InsertarI(valor);
		}
		else if (posicion == (NElementos + 1))
		{
			InsertarF(valor);
		}
		else if (posicion > 1 && posicion < (NElementos + 1))
		{
			NodoL * Aux;
			Aux = Head;
			for (int i = 0; i < posicion; i++)
			{
				Aux = Aux->Siguiente;
			}
			Aux->Anterior->Siguiente = NuevoNodo;
			NuevoNodo->Siguiente = Aux;
			NuevoNodo->Anterior = Aux->Anterior;
			Aux->Anterior = NuevoNodo;
			NElementos++;
		}
		else
		{
			System::Windows::Forms::MessageBox::Show("Error posición invalida");
		}
	}
}

Pokemon Lista::Eliminar(int posicion)
{
	NElementos = NElementos - 1;
	NodoL * Aux;
	if (posicion == 1)
	{
		Aux = Head;
		Head = Head->Siguiente;
		return Aux->Valor;
	}
	else if (posicion == NElementos)
	{
		Aux = End;
		End = End->Anterior;
		return Aux->Valor;
	}
	else if (posicion > 1 && posicion < NElementos)
	{
		Aux = Head;
		for (int i = 0; i < NElementos; i++)
		{
			Aux = Aux->Siguiente;
		}
		Aux->Anterior->Siguiente = Aux->Siguiente;
		Aux->Siguiente->Anterior = Aux->Anterior;
		return Aux->Valor;
	}
	else
	{
		System::Windows::Forms::MessageBox::Show("Error posición invalida");
	}
}
Pokemon Lista::MostrarP(int posicion) {
	NodoL * Aux = new NodoL();
	Pokemon * pok = new Pokemon;
	Aux = Head;
	if (posicion >= 0 && posicion <= NElementos)
	{
		for (int i = 0; i < posicion; i++)
		{
			Aux = Aux->Siguiente;
		}
		return Aux->Valor;
	}
	else
	{
		return *pok;
	}

}