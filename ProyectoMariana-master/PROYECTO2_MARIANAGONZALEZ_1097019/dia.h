#pragma once
#include <iostream>; 
#include <string>;
#include <vector>;
#include <map>;
#include "ElEvento.h";
class dia
{
public:
	std::string fecha;
	std::multimap<std::string, ElEvento> eventos;
	dia();
	~dia();


};

