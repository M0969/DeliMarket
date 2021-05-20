#pragma once
using namespace AppModel;
using namespace AppController;
using namespace System::Collections::Generic;

namespace AppView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ProductForm
	/// </summary>
	public ref class ProductForm : public System::Windows::Forms::Form
	{
	public:
		ProductForm(void)
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
		~ProductForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabGroceries;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::TextBox^ txtPrice;
	private: System::Windows::Forms::TextBox^ txtBrand;
	private: System::Windows::Forms::TextBox^ txtNamegroceries;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabHealthCare;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameGroceries;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Brand;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ QuantitySold;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabGroceries = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameGroceries = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Brand = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->QuantitySold = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->txtBrand = (gcnew System::Windows::Forms::TextBox());
			this->txtNamegroceries = (gcnew System::Windows::Forms::TextBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabHealthCare = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabGroceries->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabGroceries);
			this->tabControl1->Controls->Add(this->tabHealthCare);
			this->tabControl1->Location = System::Drawing::Point(27, 23);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(564, 354);
			this->tabControl1->TabIndex = 0;
			// 
			// tabGroceries
			// 
			this->tabGroceries->Controls->Add(this->dataGridView1);
			this->tabGroceries->Controls->Add(this->btnDelete);
			this->tabGroceries->Controls->Add(this->btnUpdate);
			this->tabGroceries->Controls->Add(this->btnAdd);
			this->tabGroceries->Controls->Add(this->txtPrice);
			this->tabGroceries->Controls->Add(this->txtBrand);
			this->tabGroceries->Controls->Add(this->txtNamegroceries);
			this->tabGroceries->Controls->Add(this->txtId);
			this->tabGroceries->Controls->Add(this->label4);
			this->tabGroceries->Controls->Add(this->label3);
			this->tabGroceries->Controls->Add(this->label2);
			this->tabGroceries->Controls->Add(this->label1);
			this->tabGroceries->Location = System::Drawing::Point(4, 22);
			this->tabGroceries->Name = L"tabGroceries";
			this->tabGroceries->Padding = System::Windows::Forms::Padding(3);
			this->tabGroceries->Size = System::Drawing::Size(556, 328);
			this->tabGroceries->TabIndex = 0;
			this->tabGroceries->Text = L"Alimentos";
			this->tabGroceries->UseVisualStyleBackColor = true;
			this->tabGroceries->Click += gcnew System::EventHandler(this, &ProductForm::tabGroceries_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Id, this->NameGroceries,
					this->Brand, this->Price, this->QuantitySold
			});
			this->dataGridView1->Location = System::Drawing::Point(11, 195);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(527, 104);
			this->dataGridView1->TabIndex = 11;
			// 
			// Id
			// 
			this->Id->HeaderText = L"Código";
			this->Id->Name = L"Id";
			// 
			// NameGroceries
			// 
			this->NameGroceries->HeaderText = L"Nombre";
			this->NameGroceries->Name = L"NameGroceries";
			// 
			// Brand
			// 
			this->Brand->HeaderText = L"Marca";
			this->Brand->Name = L"Brand";
			// 
			// Price
			// 
			this->Price->HeaderText = L"Precio";
			this->Price->Name = L"Price";
			// 
			// QuantitySold
			// 
			this->QuantitySold->HeaderText = L"Cant. vendida";
			this->QuantitySold->Name = L"QuantitySold";
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(446, 140);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 10;
			this->btnDelete->Text = L"&Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(241, 140);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 9;
			this->btnUpdate->Text = L"&Editar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(29, 140);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 8;
			this->btnAdd->Text = L"&Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ProductForm::btnAdd_Click);
			// 
			// txtPrice
			// 
			this->txtPrice->Location = System::Drawing::Point(421, 17);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(100, 20);
			this->txtPrice->TabIndex = 7;
			// 
			// txtBrand
			// 
			this->txtBrand->Location = System::Drawing::Point(123, 99);
			this->txtBrand->Name = L"txtBrand";
			this->txtBrand->Size = System::Drawing::Size(100, 20);
			this->txtBrand->TabIndex = 6;
			// 
			// txtNamegroceries
			// 
			this->txtNamegroceries->Location = System::Drawing::Point(123, 55);
			this->txtNamegroceries->Name = L"txtNamegroceries";
			this->txtNamegroceries->Size = System::Drawing::Size(398, 20);
			this->txtNamegroceries->TabIndex = 5;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(123, 17);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(100, 20);
			this->txtId->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(363, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Precio";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Marca";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código";
			// 
			// tabHealthCare
			// 
			this->tabHealthCare->Location = System::Drawing::Point(4, 22);
			this->tabHealthCare->Name = L"tabHealthCare";
			this->tabHealthCare->Padding = System::Windows::Forms::Padding(3);
			this->tabHealthCare->Size = System::Drawing::Size(556, 328);
			this->tabHealthCare->TabIndex = 1;
			this->tabHealthCare->Text = L"Salud";
			this->tabHealthCare->UseVisualStyleBackColor = true;
			// 
			// ProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(631, 400);
			this->Controls->Add(this->tabControl1);
			this->Name = L"ProductForm";
			this->Text = L"ProductForm";
			this->tabControl1->ResumeLayout(false);
			this->tabGroceries->ResumeLayout(false);
			this->tabGroceries->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tabGroceries_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	/*int id = Int32::Parse(txtId->Text); //como Text es un String, se casteará
	String^ nameGroceries = txtNamegroceries->Text;
	double price = Double::Parse(txtPrice->Text);
	String^ brand = txtBrand->Text;

	//int id, String^ name, String^ description, double price, int stockTotal, char status, String^ brand
	Groceries^ groceries = gcnew Groceries(id, nameGroceries, nameGroceries, price, 10, 'A', brand, 20, 5);
	//vamos a invocar al gestor adecuado para que se encargue a agarrar un grocery
	AppManager::AddProduct(groceries);  //se está agregando el producto

	RefreshDGVGroceries();
	*/
}
};
}
