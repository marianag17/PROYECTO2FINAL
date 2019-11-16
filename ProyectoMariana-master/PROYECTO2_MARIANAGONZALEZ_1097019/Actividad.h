#pragma once
#include <string>
#include "General.h"
class Actividad :
	public General
{
public:
	std::string horainicio;
	std::string lugar;
	std::string personas;
	std::string materiales;
public:
	Actividad();
	~Actividad();
	Actividad(int,std::string, std::string, std::string);
};

