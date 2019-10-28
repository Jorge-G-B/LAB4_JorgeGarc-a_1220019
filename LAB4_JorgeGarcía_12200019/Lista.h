#pragma once
#include "NodoL.h"
#include "Pokemon.h"
class Lista
{
public:
	NodoL * Head = nullptr;
	NodoL * End = nullptr;
public:
	int NElementos = 0;
public:
	void InsertarI(Pokemon valor);
public:
	void InsertarF(Pokemon valor);
public:
	void InsertarP(Pokemon valor, int posicion);
public:
	Pokemon MostrarP(int Posicion);
public:
	Pokemon Eliminar(int posicion);
public:
	Lista();
	~Lista();
};

