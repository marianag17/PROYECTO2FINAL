#include "ElEvento.h"



ElEvento::ElEvento()
{
}

ElEvento::ElEvento(Actividad actividadRecibida) {
	this->idEvento = actividadRecibida.identificador;
	this->Descripcion = actividadRecibida.descripcion;
	this->prioridad = actividadRecibida.prioridad;
	this->horaInicio = actividadRecibida.horainicio;
	this->horaFin = actividadRecibida.horafin;
	this->lugarReunion = actividadRecibida.lugar;
	this->personaInvolucrada = actividadRecibida.personas;
	this->materiales = actividadRecibida.materiales;
}

ElEvento::ElEvento(Recordatorio recordatorioRecibida) {
	this->idEvento = recordatorioRecibida.identificador;
	this->Descripcion = recordatorioRecibida.descripcion;
	this->prioridad = recordatorioRecibida.prioridad;
	this->horaLimite = recordatorioRecibida.horafin;
}

ElEvento::ElEvento(Alarma alarmaRecibida) {
	this->idEvento = alarmaRecibida.identificador;
	this->Descripcion = alarmaRecibida.descripcion;
	this->prioridad = alarmaRecibida.prioridad;
	this->horaLimite = alarmaRecibida.horafin;
}
ElEvento::~ElEvento()
{
}
