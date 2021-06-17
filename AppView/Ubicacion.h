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

	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnAddressCheck_Click;
	private: System::Windows::Forms::TextBox^ txtCustomAddressC;
	private: System::Windows::Forms::TextBox^ txtArrivalTime;
	private: System::Windows::Forms::TextBox^ textBox1;




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
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnAddressCheck_Click = (gcnew System::Windows::Forms::Button());
			this->txtCustomAddressC = (gcnew System::Windows::Forms::TextBox());
			this->txtArrivalTime = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(93, 35);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(89, 24);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Mi casa";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(93, 84);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(245, 24);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"Agregar ubicacion en el mapa";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(387, 74);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(730, 350);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(270, 483);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(211, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Tiempo estimado de llegada:";
			this->label3->Click += gcnew System::EventHandler(this, &Ubicacion::label3_Click);
			// 
			// btnAddressCheck_Click
			// 
			this->btnAddressCheck_Click->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnAddressCheck_Click->ForeColor = System::Drawing::Color::Black;
			this->btnAddressCheck_Click->Location = System::Drawing::Point(468, 529);
			this->btnAddressCheck_Click->Name = L"btnAddressCheck_Click";
			this->btnAddressCheck_Click->Size = System::Drawing::Size(124, 42);
			this->btnAddressCheck_Click->TabIndex = 7;
			this->btnAddressCheck_Click->Text = L"Confirmar";
			this->btnAddressCheck_Click->UseVisualStyleBackColor = false;
			this->btnAddressCheck_Click->Click += gcnew System::EventHandler(this, &Ubicacion::btnAddressCheck_Click_Click);
			// 
			// txtCustomAddressC
			// 
			this->txtCustomAddressC->Location = System::Drawing::Point(556, 430);
			this->txtCustomAddressC->Name = L"txtCustomAddressC";
			this->txtCustomAddressC->Size = System::Drawing::Size(259, 26);
			this->txtCustomAddressC->TabIndex = 8;
			this->txtCustomAddressC->Text = L"Escribir  Direccion";
			this->txtCustomAddressC->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Ubicacion::txtCustomAddressC_KeyDown);
			// 
			// txtArrivalTime
			// 
			this->txtArrivalTime->Location = System::Drawing::Point(556, 480);
			this->txtArrivalTime->Name = L"txtArrivalTime";
			this->txtArrivalTime->Size = System::Drawing::Size(259, 26);
			this->txtArrivalTime->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(387, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(341, 26);
			this->textBox1->TabIndex = 10;
			// 
			// Ubicacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1156, 578);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->txtArrivalTime);
			this->Controls->Add(this->txtCustomAddressC);
			this->Controls->Add(this->btnAddressCheck_Click);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Name = L"Ubicacion";
			this->Text = L"Ubicacion";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}*/
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnAddressCheck_Click_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void txtCustomAddressC_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyData == Keys::Enter)
	{
		txtArrivalTime->Text = AppController::DBController::CompareAdress(txtCustomAddressC->Text);

	}
}
};
}
