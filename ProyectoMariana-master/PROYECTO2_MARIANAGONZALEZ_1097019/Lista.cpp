#include "Lista.h"
#include "General.h"
#include "Nodo.h"


Lista::Lista()
{
	First = nullptr;
	Last = nullptr;
}
bool Lista::Vacio()
{
	//Comprueba si el último elemento está vacío
	return First == nullptr;
}
void Lista::Insertar(General x)
{
	Nodo* NewValue = new Nodo();
	NewValue->valor = x;
	if (Vacio())
	{
		//Si está vacía solo se le asigna el valor del primero y ultimo 
		Last = NewValue;
		First = NewValue;
	}
	else
	{
		//El apuntador apunte al nuevo elemento
		Last->Siguiente = NewValue;
		//El nuevo elemento es el último
		Last = NewValue;
	}
}
General Lista::QuitarPrimero()
{
		General ValueReturn = First->valor;
		//Cambia el apuntador del primero al siguiente
		Nodo * elim = new Nodo();
		elim = First;
		First = First->Siguiente;
		delete elim;
		return ValueReturn;
	
}
std::string Lista::Primero()
{
	//Elegir el primer elemento
		return First->valor.fecha;
	
}
std::string Lista::Imprimir()
{
	std::string res = "";
	Nodo* recorrer;
	recorrer = First;

	if (First == nullptr) {
		res = "Pila vacía";
		return res;
	}
	else {
		while (recorrer != nullptr)
		{
			res += ("Descripcion: " + recorrer->valor.descripcion + "\r\n I.D: " + recorrer->valor.identificador + "\r\n Hora Fin: " + recorrer->valor.horafin + "\r\n Prioridad: " + std::to_string(recorrer->valor.prioridad) );
			res += "\r\n";
			recorrer = recorrer->Siguiente;

		}
		return res;
	}


}
Lista::~Lista()
{
}
