#include "MyForm2.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int mai2(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PROYECTO2MARIANAGONZALEZ1097019::MyForm2 form;
	Application::Run(%form);
	return 0;
}

