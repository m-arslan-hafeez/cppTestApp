#pragma once

#include "EncDecLibrary.h"
#include <string>
#include <msclr/marshal_cppstd.h>

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tbFileName;
	private: System::Windows::Forms::TextBox^  tbKey;
	private: System::Windows::Forms::Button^  btnEncrypt;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tbFileName = (gcnew System::Windows::Forms::TextBox());
			this->tbKey = (gcnew System::Windows::Forms::TextBox());
			this->btnEncrypt = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tbFileName
			// 
			this->tbFileName->Location = System::Drawing::Point(98, 81);
			this->tbFileName->Name = L"tbFileName";
			this->tbFileName->Size = System::Drawing::Size(252, 20);
			this->tbFileName->TabIndex = 0;
			// 
			// tbKey
			// 
			this->tbKey->Location = System::Drawing::Point(98, 128);
			this->tbKey->Name = L"tbKey";
			this->tbKey->Size = System::Drawing::Size(252, 20);
			this->tbKey->TabIndex = 1;
			// 
			// btnEncrypt
			// 
			this->btnEncrypt->Location = System::Drawing::Point(150, 179);
			this->btnEncrypt->Name = L"btnEncrypt";
			this->btnEncrypt->Size = System::Drawing::Size(75, 23);
			this->btnEncrypt->TabIndex = 2;
			this->btnEncrypt->Text = L"Encrypt";
			this->btnEncrypt->UseVisualStyleBackColor = true;
			this->btnEncrypt->Click += gcnew System::EventHandler(this, &Form1::btnEncrypt_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"File Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Enter Key:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(379, 228);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnEncrypt);
			this->Controls->Add(this->tbKey);
			this->Controls->Add(this->tbFileName);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main Form";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void btnEncrypt_Click(System::Object^  sender, System::EventArgs^  e) {
		//string file_name = tbFileName->Text->ToString;
		string file_name = msclr::interop::marshal_as<string>(tbFileName->Text);
		int key = System::Convert::ToInt32(tbKey->Text);

		encryptFile(file_name, key);
		MessageBox::Show("Encrypted..."); 

		// Concatenate the values and show them in a message box
		/*std::string message = "File name: " + file_name + "\nKey: " + std::to_string(key);
		MessageBox::Show(gcnew String(message.c_str()));*/
		
	}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
