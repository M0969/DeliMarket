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
	private: System::Windows::Forms::DataGridView^ dgvOrder;






	public: System::Windows::Forms::TextBox^ txtDeliveryman;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TicketCode;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CustomerName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OrderDestination;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OrderStatus;
	private: System::Windows::Forms::DataGridViewImageColumn^ ViewOrder;


















	protected:


















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
			this->dgvOrder = (gcnew System::Windows::Forms::DataGridView());
			this->txtDeliveryman = (gcnew System::Windows::Forms::TextBox());
			this->TicketCode = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CustomerName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OrderDestination = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OrderStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ViewOrder = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrder))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(188, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"LISTA DE PEDIDOS";
			// 
			// dgvOrder
			// 
			this->dgvOrder->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvOrder->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvOrder->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->TicketCode,
					this->CustomerName, this->OrderDestination, this->OrderStatus, this->ViewOrder
			});
			this->dgvOrder->Location = System::Drawing::Point(12, 58);
			this->dgvOrder->Name = L"dgvOrder";
			this->dgvOrder->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dgvOrder->Size = System::Drawing::Size(451, 163);
			this->dgvOrder->TabIndex = 1;
			this->dgvOrder->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &OrderListForm::dgvOrder_CellContentClick);
			// 
			// txtDeliveryman
			// 
			this->txtDeliveryman->Location = System::Drawing::Point(363, 18);
			this->txtDeliveryman->Name = L"txtDeliveryman";
			this->txtDeliveryman->Size = System::Drawing::Size(100, 20);
			this->txtDeliveryman->TabIndex = 2;
			// 
			// TicketCode
			// 
			this->TicketCode->HeaderText = L"Cód. Boleta";
			this->TicketCode->Name = L"TicketCode";
			this->TicketCode->ReadOnly = true;
			this->TicketCode->Width = 70;
			// 
			// CustomerName
			// 
			this->CustomerName->HeaderText = L"Cliente";
			this->CustomerName->Name = L"CustomerName";
			this->CustomerName->ReadOnly = true;
			this->CustomerName->Width = 115;
			// 
			// OrderDestination
			// 
			this->OrderDestination->HeaderText = L"Destino";
			this->OrderDestination->Name = L"OrderDestination";
			this->OrderDestination->ReadOnly = true;
			// 
			// OrderStatus
			// 
			this->OrderStatus->HeaderText = L"Estado";
			this->OrderStatus->Name = L"OrderStatus";
			this->OrderStatus->ReadOnly = true;
			this->OrderStatus->Width = 75;
			// 
			// ViewOrder
			// 
			this->ViewOrder->HeaderText = L"Ver pedido";
			this->ViewOrder->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ViewOrder.Image")));
			this->ViewOrder->ImageLayout = System::Windows::Forms::DataGridViewImageCellLayout::Stretch;
			this->ViewOrder->Name = L"ViewOrder";
			this->ViewOrder->Width = 70;
			// 
			// OrderListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 370);
			this->Controls->Add(this->txtDeliveryman);
			this->Controls->Add(this->dgvOrder);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"OrderListForm";
			this->Text = L"OrderListForm";
			this->Load += gcnew System::EventHandler(this, &OrderListForm::OrderListForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrder))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OrderListForm_Load(System::Object^ sender, System::EventArgs^ e) {
		RefreshDGVOrder();
	}
		   public: 
			   void RefreshDGVOrder() {
				   List<Order^>^ listOrder = AppManager::QueryAllSales();
				   String^ mode;
				   dgvOrder->Rows->Clear();
				   for (int i = 0; i < listOrder->Count; i++) {
					   if (listOrder[i]->Status == 'W') { mode = "EN ESPERA";}
					   else if (listOrder[i]->Status == 'G') {mode = "EN CAMINO"; }
					   else { mode = "ENTREGADO"; }
				   
					   dgvOrder->Rows->Add(gcnew array<String^> {
						   "" + listOrder[i]->Id,
						   "" + listOrder[i]->User->FirstName + " " + listOrder[i]->User->LastName,
							   "Ubicacion",
						   "" + mode
							

					   });
				   }
			   
			   }
private: System::Void dgvOrder_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	


	if (dgvOrder->Rows[e->RowIndex]->Cells[4]->Selected) {
		int selectedrowindex = dgvOrder->SelectedCells[0]->RowIndex;
		MessageBox::Show("Se agrego");
		DataGridViewRow^ selectedRow = dgvOrder->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();
		int saleid = Int32::Parse(a);
		int deliveryManId = UserManager::ReturnIDbyUserName(txtDeliveryman->Text);

		Order^ order = AppManager::QueryOrderbyId(saleid);
		order->Status = 'G';

	
		order->DeliveryMan = UserManager::QueryDeliveryManbyId(deliveryManId);

		AppManager::UpdateOrder(order);

		
	}
}
};
}
