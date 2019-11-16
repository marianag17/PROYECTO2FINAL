#pragma once
#include <string>
#include "Actividad.h"
#include "Alarma.h"
#include "Recordatorio.h"
class ElEvento
{
public:
public:
	std::string idEvento;
	std::string Descripcion;
	int prioridad;
	std::string horaInicio;
	std::string horaFin;
	std::string horaLimite;
	std::string lugarReunion;
	std::string personaInvolucrada;
	std::string materiales;
	ElEvento();
	~ElEvento();
	ElEvento(Actividad actividadRecibida);
	ElEvento(Recordatorio recordatoriosRecibidos);
	ElEvento(Alarma alarmasRecibidas);
};

