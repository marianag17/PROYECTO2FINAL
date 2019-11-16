#pragma once
#include <iostream>; 
#include <vector>;
#include <string>;
#include "dia.h";
class ElUsuario
{
public:

	std::string usuario;
	std::vector<dia> dias;
	ElUsuario();
	~ElUsuario();
};

