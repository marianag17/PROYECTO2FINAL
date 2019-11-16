#pragma once
#include "Nodo.h"
#include "General.h"

class Lista
{
public:
	Lista();
	~Lista();
	Nodo*First = nullptr;
	Nodo* Last = nullptr;
	bool Vacio();
	void Insertar(General evento);
	General QuitarPrimero();
	std::string Primero();
	std::string Imprimir();
};

