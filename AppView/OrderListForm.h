#pragma once

namespace AppView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de OrderListForm
	/// </summary>
	public ref class OrderListForm : public System::Windows::Forms::Form
	{
	public:
		OrderListForm(void)
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
		~OrderListForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TicketCode;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CustomerName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OrderDestination;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OrderStatus;
	private: System::Windows::Forms::DataGridViewImageColumn^ ViewOrder;











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OrderListForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->TicketCode = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CustomerName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OrderDestination = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OrderStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ViewOrder = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(194, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"LISTA DE PEDIDOS";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->TicketCode,
					this->CustomerName, this->OrderDestination, this->OrderStatus, this->ViewOrder
			});
			this->dataGridView1->Location = System::Drawing::Point(11, 61);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(470, 176);
			this->dataGridView1->TabIndex = 1;
			// 
			// TicketCode
			// 
			this->TicketCode->HeaderText = L"Cód. Boleta";
			this->TicketCode->Name = L"TicketCode";
			this->TicketCode->Width = 70;
			// 
			// CustomerName
			// 
			this->CustomerName->HeaderText = L"Cliente";
			this->CustomerName->Name = L"CustomerName";
			this->CustomerName->Width = 115;
			// 
			// OrderDestination
			// 
			this->OrderDestination->HeaderText = L"Destino";
			this->OrderDestination->Name = L"OrderDestination";
			// 
			// OrderStatus
			// 
			this->OrderStatus->HeaderText = L"Estado";
			this->OrderStatus->Name = L"OrderStatus";
			this->OrderStatus->Width = 75;
			// 
			// ViewOrder
			// 
			this->ViewOrder->HeaderText = L"Ver pedido";
			this->ViewOrder->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ViewOrder.Image")));
			this->ViewOrder->Name = L"ViewOrder";
			this->ViewOrder->Width = 70;
			// 
			// OrderListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 370);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"OrderListForm";
			this->Text = L"OrderListForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
