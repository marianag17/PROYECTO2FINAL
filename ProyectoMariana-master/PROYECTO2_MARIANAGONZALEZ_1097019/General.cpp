#include "General.h"



General::General()
{
}
General::General(std::string _descripcion ,std::string _fecha,  std::string _horafin, std::string _identificador,int _prioridad )
{
	descripcion = _descripcion;
	prioridad = _prioridad;
	horafin = _horafin;
	identificador = _identificador;
	fecha = _fecha;
}

General::~General()
{
}
