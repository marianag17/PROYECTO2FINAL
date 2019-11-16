#pragma once
#include <list>
#include <msclr\marshal_cppstd.h>
#include <iterator> 
#include <vector> 
#include <fstream>
#include <iostream>
#include <sstream>
#include "Usuario.h"
#include <sstream>
#include <string>
#include "MyForm.h"
#include "ElUsuario.h"

namespace PROYECTO2MARIANAGONZALEZ1097019 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	ElUsuario datosUsuario;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::ListBox^  listBox1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(150, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"AGENDA";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(72, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Usuario";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(62, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Contraseña";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(133, 216);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 86);
			this->button1->TabIndex = 3;
			this->button1->Text = L"INGRESAR O CREAR USUARIO";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(181, 103);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(181, 151);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(399, 74);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(229, 196);
			this->listBox1->TabIndex = 6;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(659, 382);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		string line;
		Usuario lineUsuario;
		vector<Usuario> vectorUsuarios;
		int coma;
		vector<string> DatosUsuario;
		string nuevalinea = "";
		list<string> listastring;
		list<string>::iterator itr = listastring.begin();
		msclr::interop::marshal_context context;
		ifstream archivotxt("users.csv");
		string linea;
		string laslineas;

		while (!archivotxt.eof()) {
			archivotxt >> linea;
			listastring.insert(itr, linea);
		}
		archivotxt.close();
		for (itr = listastring.begin(); itr != listastring.end(); ++itr) {
			line += " " + *itr;
		}
		for each (laslineas in listastring)
		{

			Usuario newUsuario;
			coma = laslineas.find(",");
			DatosUsuario.push_back(laslineas.substr(0, coma));
			nuevalinea = laslineas.substr(coma + 1, laslineas.size());
			DatosUsuario.push_back(nuevalinea);
			newUsuario.usuario = DatosUsuario[0];
			newUsuario.contra = DatosUsuario[1];
			vectorUsuarios.push_back(newUsuario);
			String^ archivoo = gcnew String(laslineas.c_str());
			listBox1->Items->Add(archivoo->ToString());
		}
		int size = vectorUsuarios.size();
		Usuario* us = new Usuario[size];
		for (int i = 0; i < size; i++)
		{
			us[i] = vectorUsuarios[i];
		}
		std::string textousuario = context.marshal_as<std::string>(textBox1->Text->ToString());
		std::string textocontra = context.marshal_as<std::string>(textBox2->Text->ToString());

		for (int i = 0; i < size; i++)
		{
			if (textousuario == us[i].usuario)
			{
				if (textocontra == us[i].contra)
				{
					MyForm ^form = gcnew MyForm(textBox1->Text);
					form->Show();
					MyForm1::Visible = false;
					break;
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Contrasena incorrecta, intente de nuevo", "Aviso");
				}
			}//bien
			else
			{
		}
		}
	}

	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
		listBox1->Visible = false;
	}
	
	};
}
