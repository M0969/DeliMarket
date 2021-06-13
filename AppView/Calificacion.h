#pragma once

namespace AppView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Calificacion
	/// </summary>
	public ref class Calificacion : public System::Windows::Forms::Form
	{
	public:
		Calificacion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Calificacion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Nombre;
	protected:
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::Label^ puntuacion;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::Button^ Finalizar;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Nombre = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->puntuacion = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->Finalizar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Nombre
			// 
			this->Nombre->AutoSize = true;
			this->Nombre->Location = System::Drawing::Point(166, 91);
			this->Nombre->Name = L"Nombre";
			this->Nombre->Size = System::Drawing::Size(205, 20);
			this->Nombre->TabIndex = 0;
			this->Nombre->Text = L"Nombre del Representante:";
			// 
			// name
			// 
			this->name->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->name->Location = System::Drawing::Point(377, 88);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(416, 33);
			this->name->TabIndex = 1;
			// 
			// puntuacion
			// 
			this->puntuacion->AutoSize = true;
			this->puntuacion->Location = System::Drawing::Point(278, 151);
			this->puntuacion->Name = L"puntuacion";
			this->puntuacion->Size = System::Drawing::Size(93, 20);
			this->puntuacion->TabIndex = 2;
			this->puntuacion->Text = L"Puntuacion:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->checkBox1->Location = System::Drawing::Point(452, 149);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(22, 21);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->checkBox2->Location = System::Drawing::Point(533, 150);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(22, 21);
			this->checkBox2->TabIndex = 4;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->checkBox3->Location = System::Drawing::Point(496, 150);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(22, 21);
			this->checkBox3->TabIndex = 5;
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->checkBox4->Location = System::Drawing::Point(573, 150);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(22, 21);
			this->checkBox4->TabIndex = 6;
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Calificacion::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->checkBox5->Location = System::Drawing::Point(614, 150);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(22, 21);
			this->checkBox5->TabIndex = 7;
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// Finalizar
			// 
			this->Finalizar->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Finalizar->Location = System::Drawing::Point(393, 261);
			this->Finalizar->Name = L"Finalizar";
			this->Finalizar->Size = System::Drawing::Size(103, 45);
			this->Finalizar->TabIndex = 8;
			this->Finalizar->Text = L"Finalizar";
			this->Finalizar->UseVisualStyleBackColor = false;
			// 
			// Calificacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(952, 444);
			this->Controls->Add(this->Finalizar);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->puntuacion);
			this->Controls->Add(this->name);
			this->Controls->Add(this->Nombre);
			this->Name = L"Calificacion";
			this->Text = L"Calificacion al Repartidor";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
