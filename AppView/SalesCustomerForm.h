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
	using namespace System::Collections::Generic;


	/// <summary>
	/// Resumen de SalesCustomerForm
	/// </summary>
	public ref class SalesCustomerForm : public System::Windows::Forms::Form
	{
	public:
		SalesCustomerForm(void)
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
		~SalesCustomerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dgvSales;
	protected:

	public: System::Windows::Forms::TextBox^ txtUser;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DeliveryMan;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Status;

	public:



	public:





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgvSales = (gcnew System::Windows::Forms::DataGridView());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DeliveryMan = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSales))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Estas en el formulario de compras";
			// 
			// dgvSales
			// 
			this->dgvSales->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSales->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Id, this->DeliveryMan,
					this->Status
			});
			this->dgvSales->Location = System::Drawing::Point(12, 90);
			this->dgvSales->Name = L"dgvSales";
			this->dgvSales->Size = System::Drawing::Size(486, 153);
			this->dgvSales->TabIndex = 1;
			// 
			// txtUser
			// 
			this->txtUser->Location = System::Drawing::Point(49, 51);
			this->txtUser->Name = L"txtUser";
			this->txtUser->ReadOnly = true;
			this->txtUser->Size = System::Drawing::Size(100, 20);
			this->txtUser->TabIndex = 2;
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			// 
			// DeliveryMan
			// 
			this->DeliveryMan->HeaderText = L"Repartidor";
			this->DeliveryMan->Name = L"DeliveryMan";
			this->DeliveryMan->ReadOnly = true;
			// 
			// Status
			// 
			this->Status->HeaderText = L"Estado de la venta";
			this->Status->Name = L"Status";
			this->Status->ReadOnly = true;
			// 
			// SalesCustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(510, 409);
			this->Controls->Add(this->txtUser);
			this->Controls->Add(this->dgvSales);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SalesCustomerForm";
			this->Text = L"SalesCustomerForm";
			this->Load += gcnew System::EventHandler(this, &SalesCustomerForm::SalesCustomerForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSales))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SalesCustomerForm_Load(System::Object^ sender, System::EventArgs^ e) {
		RefreshDGVSales();


	}
		   public:
			   void RefreshDGVSales() {
				   int customerId = UserManager::ReturnIDbyUserName(txtUser->Text);
				   User^ user = UserManager::QueryUserbyId(customerId);
				   List<Order^>^ listOrder = AppManager::QueryAllSales();
				   String^ mode;
				   String^ deliveryman;

				   dgvSales->Rows->Clear();
				   for (int i = 0; i < listOrder->Count; i++) {
					   if (listOrder[i]->User->Username->CompareTo(user->Username) == 0) {
					  if (listOrder[i]->Status == 'W') {
							 mode = "EN ESPERA";
							 deliveryman = "NO HAY AUN";

						 }
						 else if (listOrder[i]->Status == 'G') {
							 mode = "EN CAMINO";
							 deliveryman = listOrder[i]->DeliveryMan->FirstName;

						 }
						 else { mode = "ENTREGADO"; }


					   dgvSales->Rows->Add(gcnew array<String^> {
						   "" + listOrder[i]->Id,
							   deliveryman,
							    "" + mode

					   });
				   }

				   }
			   }
		 
};
}
