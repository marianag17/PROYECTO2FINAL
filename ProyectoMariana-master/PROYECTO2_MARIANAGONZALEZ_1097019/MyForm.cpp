#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int mai1(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PROYECTO2MARIANAGONZALEZ1097019::MyForm form;
	Application::Run(%form);
	return 0;
}


