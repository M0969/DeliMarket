#pragma once
namespace AppView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace AppController;
	using namespace AppModel;

	/// <summary>
	/// Resumen de Ubicacion
	/// </summary>
	public ref class Ubicacion : public System::Windows::Forms::Form
	{
	public:
		Ubicacion(void)
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
		~Ubicacion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ checkBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Ubicacion::typeid));
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(52, 30);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(63, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Mi casa";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(265, 30);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Direccion1";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(52, 62);
			this->checkBox2->Margin = System::Windows::Forms::Padding(2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(167, 17);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"Agregar ubicacion en el mapa";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(258, 62);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(221, 131);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(255, 207);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(224, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Escribir direccion";
			this->label2->Click += gcnew System::EventHandler(this, &Ubicacion::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(77, 245);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Tiempo estimado de llegada:";
			this->label3->Click += gcnew System::EventHandler(this, &Ubicacion::label3_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(255, 245);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(224, 18);
			this->label4->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(209, 275);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 27);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Confirmar";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// Ubicacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(515, 309);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Ubicacion";
			this->Text = L"Ubicacion";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
