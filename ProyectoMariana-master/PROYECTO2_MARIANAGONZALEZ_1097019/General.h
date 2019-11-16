#pragma once
#include <string>
class General
{
public:
	std::string descripcion;
	int prioridad;
	std::string horafin;
	std::string identificador;
	std::string fecha;
public:
	General();
	~General();
	General(std::string,std::string, std::string, std::string,int);
};

