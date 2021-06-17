#pragma once

namespace AppView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace AppModel;
	using namespace AppController;
	using namespace System::Collections::Generic;


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
	private: System::Windows::Forms::DataGridView^ dgvBoleta;
	protected:







	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;



	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UnitPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	public: System::Windows::Forms::TextBox^ textDateTimeB;
	private:
	public: System::Windows::Forms::TextBox^ textTypePaymentB;
	private: System::Windows::Forms::Label^ label1;
	public:
	private: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::TextBox^ textIdSaleDetailB;
	private:
	public: System::Windows::Forms::TextBox^ textTotalSaleB;
	public: System::Windows::Forms::TextBox^ textNameCB;

	public:

	public: System::Windows::Forms::TextBox^ txtDocumentNumberCB;



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
			this->dgvBoleta = (gcnew System::Windows::Forms::DataGridView());
			this->ProductId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UnitPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textDateTimeB = (gcnew System::Windows::Forms::TextBox());
			this->textTypePaymentB = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textIdSaleDetailB = (gcnew System::Windows::Forms::TextBox());
			this->textTotalSaleB = (gcnew System::Windows::Forms::TextBox());
			this->textNameCB = (gcnew System::Windows::Forms::TextBox());
			this->txtDocumentNumberCB = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBoleta))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(8, 8);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(95, 43);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// dgvBoleta
			// 
			this->dgvBoleta->AllowUserToAddRows = false;
			this->dgvBoleta->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvBoleta->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ProductId,
					this->ProductName, this->Quantity, this->UnitPrice, this->Price
			});
			this->dgvBoleta->GridColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->dgvBoleta->Location = System::Drawing::Point(26, 105);
			this->dgvBoleta->Margin = System::Windows::Forms::Padding(2);
			this->dgvBoleta->Name = L"dgvBoleta";
			this->dgvBoleta->RowHeadersWidth = 62;
			this->dgvBoleta->RowTemplate->Height = 28;
			this->dgvBoleta->Size = System::Drawing::Size(490, 112);
			this->dgvBoleta->TabIndex = 2;
			// 
			// ProductId
			// 
			this->ProductId->HeaderText = L"Id";
			this->ProductId->Name = L"ProductId";
			this->ProductId->ReadOnly = true;
			this->ProductId->Width = 35;
			// 
			// ProductName
			// 
			this->ProductName->HeaderText = L"Nombre del Producto";
			this->ProductName->MinimumWidth = 8;
			this->ProductName->Name = L"ProductName";
			this->ProductName->ReadOnly = true;
			this->ProductName->Width = 150;
			// 
			// Quantity
			// 
			this->Quantity->HeaderText = L"Cantidad";
			this->Quantity->MinimumWidth = 8;
			this->Quantity->Name = L"Quantity";
			this->Quantity->ReadOnly = true;
			this->Quantity->Width = 55;
			// 
			// UnitPrice
			// 
			this->UnitPrice->HeaderText = L"Precio Unitario";
			this->UnitPrice->MinimumWidth = 8;
			this->UnitPrice->Name = L"UnitPrice";
			this->UnitPrice->ReadOnly = true;
			// 
			// Price
			// 
			this->Price->HeaderText = L"Importe";
			this->Price->MinimumWidth = 8;
			this->Price->Name = L"Price";
			this->Price->ReadOnly = true;
			this->Price->Width = 85;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(433, 8);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"RUC XXXXXXX";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(433, 25);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Boleta de Venta";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 266);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Tipo de pago:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(387, 240);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Total:";
			// 
			// textDateTimeB
			// 
			this->textDateTimeB->Location = System::Drawing::Point(26, 237);
			this->textDateTimeB->Name = L"textDateTimeB";
			this->textDateTimeB->ReadOnly = true;
			this->textDateTimeB->Size = System::Drawing::Size(189, 20);
			this->textDateTimeB->TabIndex = 13;
			// 
			// textTypePaymentB
			// 
			this->textTypePaymentB->Location = System::Drawing::Point(101, 263);
			this->textTypePaymentB->Name = L"textTypePaymentB";
			this->textTypePaymentB->ReadOnly = true;
			this->textTypePaymentB->Size = System::Drawing::Size(114, 20);
			this->textTypePaymentB->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Nombre del Cliente:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(357, 78);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"N° de Documento";
			// 
			// textIdSaleDetailB
			// 
			this->textIdSaleDetailB->Location = System::Drawing::Point(436, 41);
			this->textIdSaleDetailB->Name = L"textIdSaleDetailB";
			this->textIdSaleDetailB->ReadOnly = true;
			this->textIdSaleDetailB->Size = System::Drawing::Size(100, 20);
			this->textIdSaleDetailB->TabIndex = 17;
			// 
			// textTotalSaleB
			// 
			this->textTotalSaleB->Location = System::Drawing::Point(426, 237);
			this->textTotalSaleB->Name = L"textTotalSaleB";
			this->textTotalSaleB->ReadOnly = true;
			this->textTotalSaleB->Size = System::Drawing::Size(100, 20);
			this->textTotalSaleB->TabIndex = 18;
			// 
			// textNameCB
			// 
			this->textNameCB->Location = System::Drawing::Point(128, 75);
			this->textNameCB->Name = L"textNameCB";
			this->textNameCB->ReadOnly = true;
			this->textNameCB->Size = System::Drawing::Size(145, 20);
			this->textNameCB->TabIndex = 19;
			// 
			// txtDocumentNumberCB
			// 
			this->txtDocumentNumberCB->Location = System::Drawing::Point(455, 75);
			this->txtDocumentNumberCB->Name = L"txtDocumentNumberCB";
			this->txtDocumentNumberCB->ReadOnly = true;
			this->txtDocumentNumberCB->Size = System::Drawing::Size(81, 20);
			this->txtDocumentNumberCB->TabIndex = 20;
			// 
			// Boleta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(559, 308);
			this->Controls->Add(this->txtDocumentNumberCB);
			this->Controls->Add(this->textNameCB);
			this->Controls->Add(this->textTotalSaleB);
			this->Controls->Add(this->textIdSaleDetailB);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textTypePaymentB);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dgvBoleta);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textDateTimeB);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Boleta";
			this->Text = L"Boleta";
			this->Load += gcnew System::EventHandler(this, &Boleta::Boleta_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBoleta))->EndInit();
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
private: System::Void Boleta_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshDGVBoleta();
}
	   void RefreshDGVBoleta() {
		   int idsale = AppManager::QueryLastSaleId();
		   Order^ order = AppManager::QueryOrderbyId(idsale);
		   
		   //List <SaleDB^>^ sdList = AppManager::QueryLastSaleId();
		   dgvBoleta->Rows->Clear();
		   for (int i = 0; i < order->Details->Count; i++) {
			   dgvBoleta->Rows->Add(gcnew array<String^>{
				 "" + order->Details[i]->Product->Id,
				 "" + order->Details[i]->Product->Name,
				"" + order->Details[i]->Quantity,
				 "" + order->Details[i]->UnitPrice,
					   "" + order->Details[i]->SubTotal

			   });
		   }
			 //  dgvBoleta->Rows->Add(gcnew array<String^> {
				//       "" + sdList[i]->Id,
					//        sdList[i]->Name,
					  // "" + sdList[i]->Quantity,
					  // "" + sdList[i]->Price,
					  // "" + sdList[i]->Price*sdList[i]->Quantity
			  // });
		   //}
	   }
};
}
