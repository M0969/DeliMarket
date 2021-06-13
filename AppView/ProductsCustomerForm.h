#pragma once
#define MODEID 1
#define MODEGROCERIES 2
#define MODEHEALTH 3
#define MODEALL 4

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
	/// Resumen de ProductsCustomerForm
	/// </summary>
	public ref class ProductsCustomerForm : public System::Windows::Forms::Form
	{
	public:
		ProductsCustomerForm(void)
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
		~ProductsCustomerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvProducts;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Brand;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::DataGridViewImageColumn^ addCarrito;
	private: System::Windows::Forms::Label^ Buscar;
	private: System::Windows::Forms::Button^ btn_Search;
	private: System::Windows::Forms::ComboBox^ cmbSearch;
	private: System::Windows::Forms::TextBox^ txtName;

	private: System::Windows::Forms::ComboBox^ cmbCattegory;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;



	protected:





	protected:



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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProductsCustomerForm::typeid));
			this->dgvProducts = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Brand = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->addCarrito = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->Buscar = (gcnew System::Windows::Forms::Label());
			this->btn_Search = (gcnew System::Windows::Forms::Button());
			this->cmbSearch = (gcnew System::Windows::Forms::ComboBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->cmbCattegory = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvProducts
			// 
			this->dgvProducts->AllowUserToResizeColumns = false;
			this->dgvProducts->AllowUserToResizeRows = false;
			this->dgvProducts->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvProducts->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dgvProducts->BackgroundColor = System::Drawing::Color::White;
			this->dgvProducts->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvProducts->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dgvProducts->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dgvProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProducts->ColumnHeadersVisible = false;
			this->dgvProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Id, this->Name,
					this->Brand, this->Price, this->addCarrito
			});
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Gray;
			dataGridViewCellStyle1->Padding = System::Windows::Forms::Padding(1);
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Gray;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvProducts->DefaultCellStyle = dataGridViewCellStyle1;
			this->dgvProducts->Location = System::Drawing::Point(12, 97);
			this->dgvProducts->Name = L"dgvProducts";
			this->dgvProducts->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dgvProducts->RowHeadersVisible = false;
			this->dgvProducts->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvProducts->Size = System::Drawing::Size(470, 172);
			this->dgvProducts->TabIndex = 0;
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Nombre";
			this->Name->Name = L"Name";
			this->Name->ReadOnly = true;
			// 
			// Brand
			// 
			this->Brand->HeaderText = L"Marca";
			this->Brand->Name = L"Brand";
			this->Brand->ReadOnly = true;
			// 
			// Price
			// 
			this->Price->HeaderText = L"Precio";
			this->Price->Name = L"Price";
			this->Price->ReadOnly = true;
			// 
			// addCarrito
			// 
			this->addCarrito->HeaderText = L"addCarrito";
			this->addCarrito->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addCarrito.Image")));
			this->addCarrito->Name = L"addCarrito";
			// 
			// Buscar
			// 
			this->Buscar->AutoSize = true;
			this->Buscar->Location = System::Drawing::Point(12, 47);
			this->Buscar->Name = L"Buscar";
			this->Buscar->Size = System::Drawing::Size(55, 13);
			this->Buscar->TabIndex = 2;
			this->Buscar->Text = L"Busqueda";
			this->Buscar->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// btn_Search
			// 
			this->btn_Search->Location = System::Drawing::Point(392, 47);
			this->btn_Search->Name = L"btn_Search";
			this->btn_Search->Size = System::Drawing::Size(75, 23);
			this->btn_Search->TabIndex = 3;
			this->btn_Search->Text = L"Buscar";
			this->btn_Search->UseVisualStyleBackColor = true;
			this->btn_Search->Click += gcnew System::EventHandler(this, &ProductsCustomerForm::btn_Search_Click);
			// 
			// cmbSearch
			// 
			this->cmbSearch->FormattingEnabled = true;
			this->cmbSearch->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Categoria", L"Nombre" });
			this->cmbSearch->Location = System::Drawing::Point(76, 43);
			this->cmbSearch->Name = L"cmbSearch";
			this->cmbSearch->Size = System::Drawing::Size(121, 21);
			this->cmbSearch->TabIndex = 4;
			this->cmbSearch->SelectedIndexChanged += gcnew System::EventHandler(this, &ProductsCustomerForm::cmbSearch_SelectedIndexChanged);
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(275, 61);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(100, 20);
			this->txtName->TabIndex = 5;
			// 
			// cmbCattegory
			// 
			this->cmbCattegory->FormattingEnabled = true;
			this->cmbCattegory->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Alimentos", L"Cuidado Personal" });
			this->cmbCattegory->Location = System::Drawing::Point(275, 34);
			this->cmbCattegory->Name = L"cmbCattegory";
			this->cmbCattegory->Size = System::Drawing::Size(100, 21);
			this->cmbCattegory->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(216, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Nombre";
			this->label1->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(216, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Categoria";
			this->label2->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// ProductsCustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 370);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmbCattegory);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->cmbSearch);
			this->Controls->Add(this->btn_Search);
			this->Controls->Add(this->Buscar);
			this->Controls->Add(this->dgvProducts);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;

			this->Text = L"ProductsCustomerForm";
			this->Load += gcnew System::EventHandler(this, &ProductsCustomerForm::ProductsCustomerForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ProductsCustomerForm_Load(System::Object^ sender, System::EventArgs^ e) {
		RefreshDGVProducts(MODEALL);
		cmbCattegory->Visible = false;
		txtName->Visible = false;
	}
	public:
		void RefreshDGVProducts(int mode) {
			if (mode == 2 | mode == 3| mode == 4) {
				if (mode == 2) {
					List <Groceries^>^ productList = AppManager::QueryAllGroceries();
					dgvProducts->Rows->Clear();
					for (int i = 0; i < productList->Count; i++) {
						dgvProducts->Rows->Add(gcnew array<String^> {
							"" + productList[i]->Id,
								productList[i]->Name,
								"" + productList[i]->Brand,
								"" + productList[i]->Price,});

					}
				}

				else if(mode ==3) { List <HealthCare^>^ productList = AppManager::QueryAllHealthCare();
				dgvProducts->Rows->Clear();
				for (int i = 0; i < productList->Count; i++) {
					dgvProducts->Rows->Add(gcnew array<String^> {
						"" + productList[i]->Id,
							productList[i]->Name,
							"" + productList[i]->Brand,
							"" + productList[i]->Price,

					});
				}
				}
				else { List <Product^>^ productList = AppManager::QueryAllProducts();
				dgvProducts->Rows->Clear();
				for (int i = 0; i < productList->Count; i++) {
					dgvProducts->Rows->Add(gcnew array<String^> {
						"" + productList[i]->Id,
							productList[i]->Name,
							"" + productList[i]->Brand,
							"" + productList[i]->Price,

					});
				}
				}
				
			}
			else {
				Product^ product = AppManager::QueryProductByName(txtName->Text);
				dgvProducts->Rows->Clear();
				dgvProducts->Rows->Add(gcnew array<String^> {
					"" + product->Id,
						product->Name,
						product->Brand,
					"" + product->Price,

				});
			}
			
			}
			
		

			
		

	
			 


	private: System::Void btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {
		if (cmbCattegory->Enabled == true) {
			if (cmbCattegory->SelectedIndex == 1) { RefreshDGVProducts(MODEGROCERIES); }
			else if (cmbCattegory->SelectedIndex == 2) {RefreshDGVProducts(MODEHEALTH);}
		}
		else  {
			RefreshDGVProducts(MODEID);
		}
	}

	

private: System::Void cmbSearch_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int indice = cmbSearch->SelectedIndex;


	if (cmbSearch->SelectedIndex == 0) {
		cmbCattegory->Enabled = true;
		txtName->Enabled = false;
		cmbCattegory->Visible = true;
		txtName->Visible = true;
	}

	else {
		cmbCattegory->Enabled = false;
		txtName->Enabled = true;
		cmbCattegory->Visible = true;
		txtName->Visible = true;
	}
}
};
}
