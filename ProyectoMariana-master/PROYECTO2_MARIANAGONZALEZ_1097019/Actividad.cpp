#include "Actividad.h"

Actividad::Actividad(int _horainicio, std::string _lugar, std::string _personas, std::string _materiales)
{
	horainicio = _horainicio;
	lugar = _lugar;
	personas = _personas;
	materiales = _materiales;
}

Actividad::Actividad()
{
}


Actividad::~Actividad()
{
}
