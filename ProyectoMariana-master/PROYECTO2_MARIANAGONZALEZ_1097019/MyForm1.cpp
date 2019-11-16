#include "MyForm1.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PROYECTO2MARIANAGONZALEZ1097019::MyForm1 form;
	Application::Run(%form);
	return 0;
}
