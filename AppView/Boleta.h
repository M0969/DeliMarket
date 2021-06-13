#pragma once

namespace AppView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Boleta
	/// </summary>
	public ref class Boleta : public System::Windows::Forms::Form
	{
	public:
		Boleta(void)
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
		~Boleta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Descripcion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PrecioUnitario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Importe;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ NumeroDNI;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ TOTAL;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Boleta::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Descripcion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PrecioUnitario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Importe = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->NumeroDNI = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TOTAL = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(142, 66);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Cantidad,
					this->Descripcion, this->PrecioUnitario, this->Importe
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->dataGridView1->Location = System::Drawing::Point(63, 173);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(668, 117);
			this->dataGridView1->TabIndex = 2;
			// 
			// Cantidad
			// 
			this->Cantidad->HeaderText = L"Cantidad";
			this->Cantidad->MinimumWidth = 8;
			this->Cantidad->Name = L"Cantidad";
			this->Cantidad->ReadOnly = true;
			this->Cantidad->Width = 150;
			// 
			// Descripcion
			// 
			this->Descripcion->HeaderText = L"Descripcion";
			this->Descripcion->MinimumWidth = 8;
			this->Descripcion->Name = L"Descripcion";
			this->Descripcion->Width = 150;
			// 
			// PrecioUnitario
			// 
			this->PrecioUnitario->HeaderText = L"Precio Unitario";
			this->PrecioUnitario->MinimumWidth = 8;
			this->PrecioUnitario->Name = L"PrecioUnitario";
			this->PrecioUnitario->Width = 150;
			// 
			// Importe
			// 
			this->Importe->HeaderText = L"Importe";
			this->Importe->MinimumWidth = 8;
			this->Importe->Name = L"Importe";
			this->Importe->Width = 150;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(59, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nombre del cliente";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(650, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"RUC XXXXXXX";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(650, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Boleta de Venta";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(650, 52);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"N12345";
			// 
			// NumeroDNI
			// 
			this->NumeroDNI->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->NumeroDNI->Location = System::Drawing::Point(553, 130);
			this->NumeroDNI->Name = L"NumeroDNI";
			this->NumeroDNI->Size = System::Drawing::Size(139, 30);
			this->NumeroDNI->TabIndex = 7;
			this->NumeroDNI->Text = L"Numero DNI";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Checked = false;
			this->dateTimePicker1->Enabled = false;
			this->dateTimePicker1->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->dateTimePicker1->Location = System::Drawing::Point(63, 336);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(282, 26);
			this->dateTimePicker1->TabIndex = 8;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Boleta::dateTimePicker1_ValueChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(63, 410);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(105, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Tipo de pago:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Tarjeta", L"Efectivo" });
			this->comboBox1->Location = System::Drawing::Point(175, 410);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(462, 309);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(121, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Con descuento:";
			// 
			// TOTAL
			// 
			this->TOTAL->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->TOTAL->Location = System::Drawing::Point(589, 309);
			this->TOTAL->Name = L"TOTAL";
			this->TOTAL->Size = System::Drawing::Size(100, 23);
			this->TOTAL->TabIndex = 12;
			this->TOTAL->Text = L"TOTAL";
			// 
			// Boleta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(838, 474);
			this->Controls->Add(this->TOTAL);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->NumeroDNI);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Boleta";
			this->Text = L"Boleta";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
