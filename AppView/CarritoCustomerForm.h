#pragma once
#include "Ubicacion.h"
#include "ProductsCustomerForm.h"
#include "ComboBoxItem.h"
#include "Boleta.h"


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
	/// Resumen de CarritoCustomerForm
	/// </summary>
	public ref class CarritoCustomerForm : public System::Windows::Forms::Form
	{
		int cantidad = 1;
	public:
		
		CarritoCustomerForm(void)
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
		~CarritoCustomerForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






	private: System::Windows::Forms::TextBox^ txtTotalSale;

	private: System::Windows::Forms::Label^ labelTotal;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtBPAvailable;
	private: System::Windows::Forms::TextBox^ txtBPFinalPrice;
	private: System::Windows::Forms::Button^ btnRegisterSale;
	private: System::Windows::Forms::Button^ btnDeleteSale;
	private: System::Windows::Forms::ComboBox^ cmbBoxBPSelect;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnASCustom;




	private: System::Windows::Forms::Label^ label6;











	private: System::Windows::Forms::DataGridView^ dgvCarrito;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UnitPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Amount;
	private: System::Windows::Forms::DataGridViewImageColumn^ DeleteProduct;
	private: System::Windows::Forms::DateTimePicker^ dtpSaleDate;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cmbTypePayment;
	private: System::Windows::Forms::TextBox^ txtSAddres;
	public: System::Windows::Forms::TextBox^ textUserNameCS;
	private:



















	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CarritoCustomerForm::typeid));
			this->dgvCarrito = (gcnew System::Windows::Forms::DataGridView());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UnitPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Amount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DeleteProduct = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->txtTotalSale = (gcnew System::Windows::Forms::TextBox());
			this->labelTotal = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtBPAvailable = (gcnew System::Windows::Forms::TextBox());
			this->txtBPFinalPrice = (gcnew System::Windows::Forms::TextBox());
			this->btnRegisterSale = (gcnew System::Windows::Forms::Button());
			this->btnDeleteSale = (gcnew System::Windows::Forms::Button());
			this->cmbBoxBPSelect = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnASCustom = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dtpSaleDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cmbTypePayment = (gcnew System::Windows::Forms::ComboBox());
			this->txtSAddres = (gcnew System::Windows::Forms::TextBox());
			this->textUserNameCS = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCarrito))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvCarrito
			// 
			this->dgvCarrito->AllowUserToAddRows = false;
			this->dgvCarrito->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCarrito->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Name, this->Quantity,
					this->UnitPrice, this->Amount, this->DeleteProduct
			});
			this->dgvCarrito->Location = System::Drawing::Point(44, 32);
			this->dgvCarrito->Name = L"dgvCarrito";
			this->dgvCarrito->Size = System::Drawing::Size(420, 158);
			this->dgvCarrito->TabIndex = 0;
			this->dgvCarrito->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CarritoCustomerForm::dgvCarrito_CellClick);
			this->dgvCarrito->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CarritoCustomerForm::dgvCarrito_CellContentClick);
			this->dgvCarrito->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CarritoCustomerForm::dgvCarrito_CellValueChanged);
			// 
			// Name
			// 
			this->Name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Name->HeaderText = L"Producto";
			this->Name->Name = L"Name";
			this->Name->ReadOnly = true;
			this->Name->Width = 75;
			// 
			// Quantity
			// 
			this->Quantity->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Quantity->HeaderText = L"Cantidad";
			this->Quantity->Name = L"Quantity";
			this->Quantity->Width = 74;
			// 
			// UnitPrice
			// 
			this->UnitPrice->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->UnitPrice->HeaderText = L"Precio Unitario(S/)";
			this->UnitPrice->Name = L"UnitPrice";
			this->UnitPrice->ReadOnly = true;
			this->UnitPrice->Width = 109;
			// 
			// Amount
			// 
			this->Amount->HeaderText = L"Importe(S/)";
			this->Amount->Name = L"Amount";
			this->Amount->ReadOnly = true;
			this->Amount->Width = 80;
			// 
			// DeleteProduct
			// 
			this->DeleteProduct->HeaderText = L"Borrar";
			this->DeleteProduct->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DeleteProduct.Image")));
			this->DeleteProduct->Name = L"DeleteProduct";
			this->DeleteProduct->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->DeleteProduct->Width = 45;
			// 
			// txtTotalSale
			// 
			this->txtTotalSale->Location = System::Drawing::Point(357, 199);
			this->txtTotalSale->Name = L"txtTotalSale";
			this->txtTotalSale->ReadOnly = true;
			this->txtTotalSale->Size = System::Drawing::Size(81, 20);
			this->txtTotalSale->TabIndex = 1;
			// 
			// labelTotal
			// 
			this->labelTotal->AutoSize = true;
			this->labelTotal->Location = System::Drawing::Point(298, 202);
			this->labelTotal->Name = L"labelTotal";
			this->labelTotal->Size = System::Drawing::Size(52, 13);
			this->labelTotal->TabIndex = 2;
			this->labelTotal->Text = L"Total(S/):";
			this->labelTotal->Click += gcnew System::EventHandler(this, &CarritoCustomerForm::label1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(217, 229);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Puntos Bonus Disponibles:";
			this->label1->Click += gcnew System::EventHandler(this, &CarritoCustomerForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(206, 255);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Puntos Bonus a Seleccionar:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(220, 282);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Precio con Puntos Bonus:";
			// 
			// txtBPAvailable
			// 
			this->txtBPAvailable->Location = System::Drawing::Point(357, 226);
			this->txtBPAvailable->Name = L"txtBPAvailable";
			this->txtBPAvailable->ReadOnly = true;
			this->txtBPAvailable->Size = System::Drawing::Size(81, 20);
			this->txtBPAvailable->TabIndex = 6;
			// 
			// txtBPFinalPrice
			// 
			this->txtBPFinalPrice->Location = System::Drawing::Point(356, 279);
			this->txtBPFinalPrice->Name = L"txtBPFinalPrice";
			this->txtBPFinalPrice->ReadOnly = true;
			this->txtBPFinalPrice->Size = System::Drawing::Size(82, 20);
			this->txtBPFinalPrice->TabIndex = 8;
			// 
			// btnRegisterSale
			// 
			this->btnRegisterSale->Location = System::Drawing::Point(373, 324);
			this->btnRegisterSale->Name = L"btnRegisterSale";
			this->btnRegisterSale->Size = System::Drawing::Size(109, 37);
			this->btnRegisterSale->TabIndex = 9;
			this->btnRegisterSale->Text = L"Registrar Compra";
			this->btnRegisterSale->UseVisualStyleBackColor = true;
			this->btnRegisterSale->Click += gcnew System::EventHandler(this, &CarritoCustomerForm::btnRegisterSale_Click);
			// 
			// btnDeleteSale
			// 
			this->btnDeleteSale->Location = System::Drawing::Point(241, 324);
			this->btnDeleteSale->Name = L"btnDeleteSale";
			this->btnDeleteSale->Size = System::Drawing::Size(109, 37);
			this->btnDeleteSale->TabIndex = 10;
			this->btnDeleteSale->Text = L"Eliminar Registro";
			this->btnDeleteSale->UseVisualStyleBackColor = true;
			this->btnDeleteSale->Click += gcnew System::EventHandler(this, &CarritoCustomerForm::btnDeleteSale_Click);
			// 
			// cmbBoxBPSelect
			// 
			this->cmbBoxBPSelect->FormattingEnabled = true;
			this->cmbBoxBPSelect->Location = System::Drawing::Point(356, 252);
			this->cmbBoxBPSelect->Name = L"cmbBoxBPSelect";
			this->cmbBoxBPSelect->Size = System::Drawing::Size(82, 21);
			this->cmbBoxBPSelect->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(41, 202);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Lugar de Entrega:";
			// 
			// btnASCustom
			// 
			this->btnASCustom->Location = System::Drawing::Point(58, 218);
			this->btnASCustom->Name = L"btnASCustom";
			this->btnASCustom->Size = System::Drawing::Size(75, 23);
			this->btnASCustom->TabIndex = 15;
			this->btnASCustom->Text = L"Personalizar";
			this->btnASCustom->UseVisualStyleBackColor = true;
			this->btnASCustom->Click += gcnew System::EventHandler(this, &CarritoCustomerForm::btnASCustom_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(37, 202);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 39);
			this->label6->TabIndex = 17;
			this->label6->Text = L".";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dtpSaleDate
			// 
			this->dtpSaleDate->Location = System::Drawing::Point(12, 330);
			this->dtpSaleDate->Name = L"dtpSaleDate";
			this->dtpSaleDate->Size = System::Drawing::Size(200, 20);
			this->dtpSaleDate->TabIndex = 19;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(41, 282);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 13);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Método de Pago:";
			// 
			// cmbTypePayment
			// 
			this->cmbTypePayment->FormattingEnabled = true;
			this->cmbTypePayment->Location = System::Drawing::Point(58, 298);
			this->cmbTypePayment->Name = L"cmbTypePayment";
			this->cmbTypePayment->Size = System::Drawing::Size(88, 21);
			this->cmbTypePayment->TabIndex = 21;
			// 
			// txtSAddres
			// 
			this->txtSAddres->Location = System::Drawing::Point(58, 248);
			this->txtSAddres->Name = L"txtSAddres";
			this->txtSAddres->ReadOnly = true;
			this->txtSAddres->Size = System::Drawing::Size(100, 20);
			this->txtSAddres->TabIndex = 22;
			// 
			// textUserNameCS
			// 
			this->textUserNameCS->Location = System::Drawing::Point(33, 6);
			this->textUserNameCS->Name = L"textUserNameCS";
			this->textUserNameCS->Size = System::Drawing::Size(100, 20);
			this->textUserNameCS->TabIndex = 23;
			// 
			// CarritoCustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 370);
			this->Controls->Add(this->textUserNameCS);
			this->Controls->Add(this->txtSAddres);
			this->Controls->Add(this->cmbTypePayment);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dtpSaleDate);
			this->Controls->Add(this->btnASCustom);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cmbBoxBPSelect);
			this->Controls->Add(this->btnDeleteSale);
			this->Controls->Add(this->btnRegisterSale);
			this->Controls->Add(this->txtBPFinalPrice);
			this->Controls->Add(this->txtBPAvailable);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelTotal);
			this->Controls->Add(this->txtTotalSale);
			this->Controls->Add(this->dgvCarrito);
			this->Controls->Add(this->label6);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
//			this->Name = L"CarritoCustomerForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CarritoCustomerForm";
			this->Load += gcnew System::EventHandler(this, &CarritoCustomerForm::CarritoCustomerForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCarrito))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void CarritoCustomerForm_Load(System::Object^ sender, System::EventArgs^ e) {
	LoadCmbCustomer();
	LoadCmbBoints();
	RefreshDGVCarrito();
}

void LoadCmbCustomer() {
	//cmbB->Items->Clear();
	Customer^ c = gcnew Customer();
	//for(int i=0; customerList->Count;i++)
	//cmbBoxASUbication->Items->Add(gcnew ComboBoxItem(c->Address, "Mi dirección"));
    //cmbBoxASUbication->Items->Add(gcnew ComboBoxItem(c->Address,"Personalizar"));

}
void LoadCmbBoints() {
	//cmbBoxBPSelect->Items->Clear();
	//List<BonusPoints^>^ bpList = AppManager::QueryAllBonusPointsPQ();
	//for (int i = 0; bpList->Count; i++)
		//cmbBoxBPSelect->Items->Add(gcnew ComboBoxItem(bpList[i]->PointsQuantity, ""));
}

public: void RefreshDGVCarrito() {
			   List <Product^>^ productList = AppManager::QueryAllCarrito();
			   dgvCarrito->Rows->Clear();
			   for (int i = 0; i < productList->Count; i++) {
				   dgvCarrito->Rows->Add(gcnew array<String^> {
					       productList[i]->Name,
						  "" + cantidad,
						   "" + productList[i]->Price,
						   "" + productList[i]->Price
				   });
				 double total = 0;
				   for(int i = 0; i < dgvCarrito->RowCount; i++)
					total += Double::Parse(dgvCarrito->Rows[i]->Cells[3]->Value->ToString());
				    txtTotalSale->Text = "" + total;
			   }
		   }
private: System::Void btnASCustom_Click(System::Object^ sender, System::EventArgs^ e) {
	Ubicacion^ aForm = gcnew Ubicacion();
	aForm->ShowDialog();
}
private: System::Void dgvCarrito_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvCarrito->Columns[e->ColumnIndex]->Name == "Quantity") {
		if (dgvCarrito->CurrentCell != nullptr &&
			dgvCarrito->CurrentCell->Value != nullptr &&
			dgvCarrito->CurrentCell->Value->ToString() != "") {
			dgvCarrito->Rows[e->RowIndex]->Cells[3]->Value =
				Int32::Parse(dgvCarrito->CurrentCell->Value->ToString())*Double::Parse(dgvCarrito->Rows[e->RowIndex]->Cells[2]->Value->ToString());
			cantidad = Int32::Parse(dgvCarrito->Rows[e->RowIndex]->Cells[1]->Value->ToString());
			double total = 0;
			for (int i = 0; i < dgvCarrito->RowCount; i++)
				total += Double::Parse(dgvCarrito->Rows[i]->Cells[3]->Value->ToString());
			txtTotalSale->Text = "" + total;
		}

	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}

	   int ValidateInfo();

private: System::Void btnRegisterSale_Click(System::Object^ sender, System::EventArgs^ e);


private: System::Void btnDeleteSale_Click(System::Object^ sender, System::EventArgs^ e) {
	AppManager::DeleteAllCarrito();
	RefreshDGVCarrito();
}
private: System::Void dgvCarrito_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvCarrito->Rows[e->RowIndex]->Cells["DeleteProduct"]->Selected) {

		int selectedrowindex = dgvCarrito->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvCarrito->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();
		int productId = AppManager::ReturnIDbyProductName(a);
		AppManager::DeletefromCarrito(productId);
		RefreshDGVCarrito();
	}
}
private: System::Void dgvCarrito_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
