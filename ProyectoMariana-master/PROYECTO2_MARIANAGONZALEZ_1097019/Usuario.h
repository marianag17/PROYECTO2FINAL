#pragma once
#include <string>

class Usuario
{
public:
	Usuario();
	~Usuario();
public:
	std::string usuario;
	std::string contra;
	Usuario::Usuario(std::string us, std::string con);
};

