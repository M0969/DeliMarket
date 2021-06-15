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
	/// Resumen de ProductInventoryForm
	/// </summary>
	public ref class ProductInventoryForm : public System::Windows::Forms::Form
	{
	public:
		ProductInventoryForm(void)
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
		~ProductInventoryForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPageGroceries;

	private: System::Windows::Forms::TextBox^ txtPrice;

	private: System::Windows::Forms::TextBox^ txtDescription;

	private: System::Windows::Forms::TextBox^ txtBrand;

	private: System::Windows::Forms::TextBox^ txtNamegroceries;

	private: System::Windows::Forms::TextBox^ txtId;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pbPhoto;
	private: System::Windows::Forms::TabPage^ tabPageHealthCare;


	private: System::Windows::Forms::Button^ btnUploadPhoto;
	private: System::Windows::Forms::Button^ btnDelete;


	private: System::Windows::Forms::Button^ btnUpdate;

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::DataGridView^ dgvGroceries;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameGroceries;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Brand;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock;
	private: System::Windows::Forms::TextBox^ txtStock;
	private: System::Windows::Forms::Button^ btnUploadPhotohealthcare;
	private: System::Windows::Forms::Button^ btnDeletehealthcare;



	private: System::Windows::Forms::Button^ btnUpdatehealthcare;

	private: System::Windows::Forms::Button^ btnAddhealthcare;
	private: System::Windows::Forms::DataGridView^ dgvHealthCare;







	private: System::Windows::Forms::TextBox^ txtStockhealthcare;

	private: System::Windows::Forms::TextBox^ txtPricehealthcare;

	private: System::Windows::Forms::TextBox^ txtDescriptionhealthcare;

	private: System::Windows::Forms::TextBox^ txtBrandhealthcare;

	private: System::Windows::Forms::TextBox^ txtNamehealthcare;

	private: System::Windows::Forms::TextBox^ txtIdhealthcare;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pbPhotohealthcare;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Idhealthcare;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Namehealthcare;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Brandhealthcare;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pricehealthcare;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stockhealthcare;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPageGroceries = (gcnew System::Windows::Forms::TabPage());
			this->btnUploadPhoto = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->dgvGroceries = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameGroceries = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Brand = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtStock = (gcnew System::Windows::Forms::TextBox());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->txtBrand = (gcnew System::Windows::Forms::TextBox());
			this->txtNamegroceries = (gcnew System::Windows::Forms::TextBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->tabPageHealthCare = (gcnew System::Windows::Forms::TabPage());
			this->btnUploadPhotohealthcare = (gcnew System::Windows::Forms::Button());
			this->btnDeletehealthcare = (gcnew System::Windows::Forms::Button());
			this->btnUpdatehealthcare = (gcnew System::Windows::Forms::Button());
			this->btnAddhealthcare = (gcnew System::Windows::Forms::Button());
			this->dgvHealthCare = (gcnew System::Windows::Forms::DataGridView());
			this->Idhealthcare = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Namehealthcare = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Brandhealthcare = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pricehealthcare = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stockhealthcare = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtStockhealthcare = (gcnew System::Windows::Forms::TextBox());
			this->txtPricehealthcare = (gcnew System::Windows::Forms::TextBox());
			this->txtDescriptionhealthcare = (gcnew System::Windows::Forms::TextBox());
			this->txtBrandhealthcare = (gcnew System::Windows::Forms::TextBox());
			this->txtNamehealthcare = (gcnew System::Windows::Forms::TextBox());
			this->txtIdhealthcare = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pbPhotohealthcare = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPageGroceries->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvGroceries))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			this->tabPageHealthCare->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvHealthCare))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhotohealthcare))->BeginInit();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPageGroceries);
			this->tabControl1->Controls->Add(this->tabPageHealthCare);
			this->tabControl1->Location = System::Drawing::Point(3, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(567, 458);
			this->tabControl1->TabIndex = 2;
			this->tabControl1->Click += gcnew System::EventHandler(this, &ProductInventoryForm::tabControl1_Click);
			// 
			// tabPageGroceries
			// 
			this->tabPageGroceries->Controls->Add(this->btnUploadPhoto);
			this->tabPageGroceries->Controls->Add(this->btnDelete);
			this->tabPageGroceries->Controls->Add(this->btnUpdate);
			this->tabPageGroceries->Controls->Add(this->btnAdd);
			this->tabPageGroceries->Controls->Add(this->dgvGroceries);
			this->tabPageGroceries->Controls->Add(this->txtStock);
			this->tabPageGroceries->Controls->Add(this->txtPrice);
			this->tabPageGroceries->Controls->Add(this->txtDescription);
			this->tabPageGroceries->Controls->Add(this->txtBrand);
			this->tabPageGroceries->Controls->Add(this->txtNamegroceries);
			this->tabPageGroceries->Controls->Add(this->txtId);
			this->tabPageGroceries->Controls->Add(this->label6);
			this->tabPageGroceries->Controls->Add(this->label5);
			this->tabPageGroceries->Controls->Add(this->label4);
			this->tabPageGroceries->Controls->Add(this->label3);
			this->tabPageGroceries->Controls->Add(this->label2);
			this->tabPageGroceries->Controls->Add(this->label1);
			this->tabPageGroceries->Controls->Add(this->pbPhoto);
			this->tabPageGroceries->Location = System::Drawing::Point(4, 22);
			this->tabPageGroceries->Name = L"tabPageGroceries";
			this->tabPageGroceries->Padding = System::Windows::Forms::Padding(3);
			this->tabPageGroceries->Size = System::Drawing::Size(559, 432);
			this->tabPageGroceries->TabIndex = 0;
			this->tabPageGroceries->Text = L"Alimentos";
			this->tabPageGroceries->UseVisualStyleBackColor = true;
			// 
			// btnUploadPhoto
			// 
			this->btnUploadPhoto->Location = System::Drawing::Point(384, 155);
			this->btnUploadPhoto->Name = L"btnUploadPhoto";
			this->btnUploadPhoto->Size = System::Drawing::Size(84, 23);
			this->btnUploadPhoto->TabIndex = 17;
			this->btnUploadPhoto->Text = L"&Subir imagen";
			this->btnUploadPhoto->UseVisualStyleBackColor = true;
			this->btnUploadPhoto->Click += gcnew System::EventHandler(this, &ProductInventoryForm::btnUploadPhoto_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(275, 184);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 16;
			this->btnDelete->Text = L"&Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ProductInventoryForm::btnDelete_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(165, 184);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 15;
			this->btnUpdate->Text = L"&Actualizar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ProductInventoryForm::btnUpdate_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(54, 184);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 14;
			this->btnAdd->Text = L"&Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ProductInventoryForm::btnAdd_Click);
			// 
			// dgvGroceries
			// 
			this->dgvGroceries->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvGroceries->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Id, this->NameGroceries,
					this->Brand, this->Price, this->Stock
			});
			this->dgvGroceries->Location = System::Drawing::Point(3, 219);
			this->dgvGroceries->Name = L"dgvGroceries";
			this->dgvGroceries->Size = System::Drawing::Size(481, 144);
			this->dgvGroceries->TabIndex = 13;
			this->dgvGroceries->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductInventoryForm::dgvGroceries_CellClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Código";
			this->Id->Name = L"Id";
			this->Id->Width = 50;
			// 
			// NameGroceries
			// 
			this->NameGroceries->HeaderText = L"Nombre";
			this->NameGroceries->Name = L"NameGroceries";
			this->NameGroceries->Width = 150;
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
			// Stock
			// 
			this->Stock->HeaderText = L"Stock";
			this->Stock->Name = L"Stock";
			// 
			// txtStock
			// 
			this->txtStock->Location = System::Drawing::Point(262, 133);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(88, 20);
			this->txtStock->TabIndex = 12;
			// 
			// txtPrice
			// 
			this->txtPrice->Location = System::Drawing::Point(103, 133);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(90, 20);
			this->txtPrice->TabIndex = 11;
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(103, 84);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(247, 43);
			this->txtDescription->TabIndex = 10;
			// 
			// txtBrand
			// 
			this->txtBrand->Location = System::Drawing::Point(103, 58);
			this->txtBrand->Name = L"txtBrand";
			this->txtBrand->Size = System::Drawing::Size(247, 20);
			this->txtBrand->TabIndex = 9;
			// 
			// txtNamegroceries
			// 
			this->txtNamegroceries->Location = System::Drawing::Point(103, 32);
			this->txtNamegroceries->Name = L"txtNamegroceries";
			this->txtNamegroceries->Size = System::Drawing::Size(247, 20);
			this->txtNamegroceries->TabIndex = 8;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(103, 6);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(100, 20);
			this->txtId->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(208, 136);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Stock (*)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 136);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Precio en S/. (*)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Descripción";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Marca";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombre";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Código";
			// 
			// pbPhoto
			// 
			this->pbPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbPhoto->Location = System::Drawing::Point(368, 6);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(116, 143);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPhoto->TabIndex = 0;
			this->pbPhoto->TabStop = false;
			// 
			// tabPageHealthCare
			// 
			this->tabPageHealthCare->Controls->Add(this->btnUploadPhotohealthcare);
			this->tabPageHealthCare->Controls->Add(this->btnDeletehealthcare);
			this->tabPageHealthCare->Controls->Add(this->btnUpdatehealthcare);
			this->tabPageHealthCare->Controls->Add(this->btnAddhealthcare);
			this->tabPageHealthCare->Controls->Add(this->dgvHealthCare);
			this->tabPageHealthCare->Controls->Add(this->txtStockhealthcare);
			this->tabPageHealthCare->Controls->Add(this->txtPricehealthcare);
			this->tabPageHealthCare->Controls->Add(this->txtDescriptionhealthcare);
			this->tabPageHealthCare->Controls->Add(this->txtBrandhealthcare);
			this->tabPageHealthCare->Controls->Add(this->txtNamehealthcare);
			this->tabPageHealthCare->Controls->Add(this->txtIdhealthcare);
			this->tabPageHealthCare->Controls->Add(this->label7);
			this->tabPageHealthCare->Controls->Add(this->label8);
			this->tabPageHealthCare->Controls->Add(this->label9);
			this->tabPageHealthCare->Controls->Add(this->label10);
			this->tabPageHealthCare->Controls->Add(this->label11);
			this->tabPageHealthCare->Controls->Add(this->label12);
			this->tabPageHealthCare->Controls->Add(this->pbPhotohealthcare);
			this->tabPageHealthCare->Location = System::Drawing::Point(4, 22);
			this->tabPageHealthCare->Name = L"tabPageHealthCare";
			this->tabPageHealthCare->Padding = System::Windows::Forms::Padding(3);
			this->tabPageHealthCare->Size = System::Drawing::Size(559, 432);
			this->tabPageHealthCare->TabIndex = 1;
			this->tabPageHealthCare->Text = L"Salud";
			this->tabPageHealthCare->UseVisualStyleBackColor = true;
			// 
			// btnUploadPhotohealthcare
			// 
			this->btnUploadPhotohealthcare->Location = System::Drawing::Point(384, 155);
			this->btnUploadPhotohealthcare->Name = L"btnUploadPhotohealthcare";
			this->btnUploadPhotohealthcare->Size = System::Drawing::Size(84, 23);
			this->btnUploadPhotohealthcare->TabIndex = 35;
			this->btnUploadPhotohealthcare->Text = L"&Subir imagen";
			this->btnUploadPhotohealthcare->UseVisualStyleBackColor = true;
			this->btnUploadPhotohealthcare->Click += gcnew System::EventHandler(this, &ProductInventoryForm::btnUploadPhotohealthcare_Click);
			// 
			// btnDeletehealthcare
			// 
			this->btnDeletehealthcare->Location = System::Drawing::Point(275, 184);
			this->btnDeletehealthcare->Name = L"btnDeletehealthcare";
			this->btnDeletehealthcare->Size = System::Drawing::Size(75, 23);
			this->btnDeletehealthcare->TabIndex = 34;
			this->btnDeletehealthcare->Text = L"&Eliminar";
			this->btnDeletehealthcare->UseVisualStyleBackColor = true;
			this->btnDeletehealthcare->Click += gcnew System::EventHandler(this, &ProductInventoryForm::btnDeletehealthcare_Click);
			// 
			// btnUpdatehealthcare
			// 
			this->btnUpdatehealthcare->Location = System::Drawing::Point(165, 184);
			this->btnUpdatehealthcare->Name = L"btnUpdatehealthcare";
			this->btnUpdatehealthcare->Size = System::Drawing::Size(75, 23);
			this->btnUpdatehealthcare->TabIndex = 33;
			this->btnUpdatehealthcare->Text = L"&Actualizar";
			this->btnUpdatehealthcare->UseVisualStyleBackColor = true;
			this->btnUpdatehealthcare->Click += gcnew System::EventHandler(this, &ProductInventoryForm::btnUpdatehealthcare_Click);
			// 
			// btnAddhealthcare
			// 
			this->btnAddhealthcare->Location = System::Drawing::Point(54, 184);
			this->btnAddhealthcare->Name = L"btnAddhealthcare";
			this->btnAddhealthcare->Size = System::Drawing::Size(75, 23);
			this->btnAddhealthcare->TabIndex = 32;
			this->btnAddhealthcare->Text = L"&Agregar";
			this->btnAddhealthcare->UseVisualStyleBackColor = true;
			this->btnAddhealthcare->Click += gcnew System::EventHandler(this, &ProductInventoryForm::btnAddhealthcare_Click);
			// 
			// dgvHealthCare
			// 
			this->dgvHealthCare->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvHealthCare->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Idhealthcare,
					this->Namehealthcare, this->Brandhealthcare, this->Pricehealthcare, this->Stockhealthcare
			});
			this->dgvHealthCare->Location = System::Drawing::Point(3, 219);
			this->dgvHealthCare->Name = L"dgvHealthCare";
			this->dgvHealthCare->Size = System::Drawing::Size(481, 144);
			this->dgvHealthCare->TabIndex = 31;
			this->dgvHealthCare->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductInventoryForm::dgvHealthCare_CellClick);
			// 
			// Idhealthcare
			// 
			this->Idhealthcare->HeaderText = L"Código";
			this->Idhealthcare->Name = L"Idhealthcare";
			this->Idhealthcare->Width = 50;
			// 
			// Namehealthcare
			// 
			this->Namehealthcare->HeaderText = L"Nombre";
			this->Namehealthcare->Name = L"Namehealthcare";
			this->Namehealthcare->Width = 150;
			// 
			// Brandhealthcare
			// 
			this->Brandhealthcare->HeaderText = L"Marca";
			this->Brandhealthcare->Name = L"Brandhealthcare";
			// 
			// Pricehealthcare
			// 
			this->Pricehealthcare->HeaderText = L"Precio";
			this->Pricehealthcare->Name = L"Pricehealthcare";
			// 
			// Stockhealthcare
			// 
			this->Stockhealthcare->HeaderText = L"Stock";
			this->Stockhealthcare->Name = L"Stockhealthcare";
			// 
			// txtStockhealthcare
			// 
			this->txtStockhealthcare->Location = System::Drawing::Point(262, 133);
			this->txtStockhealthcare->Name = L"txtStockhealthcare";
			this->txtStockhealthcare->Size = System::Drawing::Size(88, 20);
			this->txtStockhealthcare->TabIndex = 30;
			// 
			// txtPricehealthcare
			// 
			this->txtPricehealthcare->Location = System::Drawing::Point(103, 133);
			this->txtPricehealthcare->Name = L"txtPricehealthcare";
			this->txtPricehealthcare->Size = System::Drawing::Size(90, 20);
			this->txtPricehealthcare->TabIndex = 29;
			// 
			// txtDescriptionhealthcare
			// 
			this->txtDescriptionhealthcare->Location = System::Drawing::Point(103, 84);
			this->txtDescriptionhealthcare->Multiline = true;
			this->txtDescriptionhealthcare->Name = L"txtDescriptionhealthcare";
			this->txtDescriptionhealthcare->Size = System::Drawing::Size(247, 43);
			this->txtDescriptionhealthcare->TabIndex = 28;
			// 
			// txtBrandhealthcare
			// 
			this->txtBrandhealthcare->Location = System::Drawing::Point(103, 58);
			this->txtBrandhealthcare->Name = L"txtBrandhealthcare";
			this->txtBrandhealthcare->Size = System::Drawing::Size(247, 20);
			this->txtBrandhealthcare->TabIndex = 27;
			// 
			// txtNamehealthcare
			// 
			this->txtNamehealthcare->Location = System::Drawing::Point(103, 32);
			this->txtNamehealthcare->Name = L"txtNamehealthcare";
			this->txtNamehealthcare->Size = System::Drawing::Size(247, 20);
			this->txtNamehealthcare->TabIndex = 26;
			// 
			// txtIdhealthcare
			// 
			this->txtIdhealthcare->Location = System::Drawing::Point(103, 6);
			this->txtIdhealthcare->Name = L"txtIdhealthcare";
			this->txtIdhealthcare->Size = System::Drawing::Size(100, 20);
			this->txtIdhealthcare->TabIndex = 25;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(208, 136);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 13);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Stock (*)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 136);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(83, 13);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Precio en S/. (*)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 87);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Descripción";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 61);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(37, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Marca";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 35);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(44, 13);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Nombre";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(40, 13);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Código";
			// 
			// pbPhotohealthcare
			// 
			this->pbPhotohealthcare->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbPhotohealthcare->Location = System::Drawing::Point(368, 6);
			this->pbPhotohealthcare->Name = L"pbPhotohealthcare";
			this->pbPhotohealthcare->Size = System::Drawing::Size(116, 143);
			this->pbPhotohealthcare->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPhotohealthcare->TabIndex = 18;
			this->pbPhotohealthcare->TabStop = false;
			// 
			// ProductInventoryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(510, 409);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ProductInventoryForm";
			this->Text = L"ProductInventoryForm";
			this->Load += gcnew System::EventHandler(this, &ProductInventoryForm::ProductInventoryForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPageGroceries->ResumeLayout(false);
			this->tabPageGroceries->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvGroceries))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			this->tabPageHealthCare->ResumeLayout(false);
			this->tabPageHealthCare->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvHealthCare))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhotohealthcare))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		private: System::Void ProductInventoryForm_Load(System::Object^ sender, System::EventArgs^ e) {
			RefreshDGVProducts();
		}
		public:
			void RefreshDGVProducts() {
				if (tabPageGroceries->Visible)
					RefreshDGVGroceries();
				if (tabPageHealthCare->Visible)
					RefreshDGVHealthCare();
			}
			Void RefreshDGVGroceries() {
				List<Groceries^>^ groceriesList = AppManager::QueryAllGroceries();
				dgvGroceries->Rows->Clear();
				for (int i = 0; i < groceriesList->Count; i++) {
					dgvGroceries->Rows->Add(gcnew array<String^> {
						"" + groceriesList[i]->Id, //es double entonces se castea / se le agrega "" para que se convierta en String
							groceriesList[i]->Name,
							groceriesList[i]->Brand,
							"" + groceriesList[i]->Price,
							"" + groceriesList[i]->StockTotal
					});
				}
			}
			Void RefreshDGVHealthCare() {
				List<HealthCare^>^ healthcareList = AppManager::QueryAllHealthCare();
				dgvHealthCare->Rows->Clear();
				for (int i = 0; i < healthcareList->Count; i++) {
					dgvHealthCare->Rows->Add(gcnew array<String^> {
						"" + healthcareList[i]->Id, //es double entonces se castea / se le agrega "" para que se convierta en String
							healthcareList[i]->Name,
							healthcareList[i]->Brand,
							"" + healthcareList[i]->Price,
							"" + healthcareList[i]->StockTotal// igual, castear
					});
				}
			}

		private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
			Groceries^ p = gcnew Groceries();
			try {
				if (txtPrice->Text->Trim() == "") {
					MessageBox::Show("El precio no debe estar vacío.");
					return;
				}
				if (txtStock->Text->Trim() == "") {
					MessageBox::Show("El stock no debe estar vacío.");
					return;
				}
				p->Id = AppManager::QueryLastProductId() + 1;
				p->Name = txtNamegroceries->Text;
				p->Description = txtDescription->Text;
				p->Price = Double::Parse(txtPrice->Text);
				p->StockTotal = Int32::Parse(txtStock->Text);
				p->Brand = txtBrand->Text;
				p->Status = 'A';

				if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
					pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					p->Photo = ms->ToArray();
				}
				AppManager::AddProduct(p);
				RefreshDGVProducts();
				btnAdd->Enabled = false;
				ClearControls();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->ToString(), "Error al guardar el producto por error en los datos.");
				return;
			}
		}

		private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
			int productId = -1;
			try {
				if (txtId->Text->Trim() == "") {
					MessageBox::Show("No se puede eliminar porque no hay ningún producto seleccionado.");
					return;
				}
				productId = Int32::Parse(txtId->Text);
			}
			catch (...) {
				MessageBox::Show("No se puede eliminar el producto porque el Id no es válido.");
				return;
			}
			if (MessageBox::Show(
				"¿Está seguro de eliminar el producto?",
				"Confirmación", MessageBoxButtons::YesNo,
				MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				AppManager::DeleteProduct(productId);
				RefreshDGVProducts();
				ClearControls();
			}
		}

		private: System::Void dgvGroceries_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			// Cellclick me indica en que reglon (fila) se llevo a cabo el click
			if (dgvGroceries->CurrentCell != nullptr &&
				dgvGroceries->CurrentCell->Value != nullptr &&
				dgvGroceries->CurrentCell->Value->ToString() != "") {
				int selectedrowindex = dgvGroceries->SelectedCells[0]->RowIndex;
				DataGridViewRow^ selectedRow = dgvGroceries->Rows[selectedrowindex];
				String^ a = selectedRow->Cells[0]->Value->ToString();

				int productId = Int32::Parse(a);
				Groceries^ p = AppManager::QueryGroceriesById(productId);
				txtId->Text = "" + p->Id;
				txtNamegroceries->Text = p->Name;
				txtDescription->Text = p->Description;
				txtPrice->Text = "" + p->Price;
				txtBrand->Text = p->Brand;
				txtStock->Text = "" + p->StockTotal;

				if (p->Photo != nullptr) {
					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(p->Photo);
					pbPhoto->Image = Image::FromStream(ms);
				}
				else {
					pbPhoto->Image = nullptr;
					pbPhoto->Invalidate();
				}
			}
		}
	
		private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
			if (txtId->Text->Trim() == "") {
				MessageBox::Show("El Id no debe estar vacío.");
				return;
			}
			if (txtNamegroceries->Text->Trim() == "") {
				MessageBox::Show("El nombre no debe estar vacío.");
				return;
			}
			if (txtPrice->Text->Trim() == "") {
				MessageBox::Show("El precio no debe estar vacío.");
				return;
			}
			if (txtStock->Text->Trim() == "") {
				MessageBox::Show("El stock no debe estar vacío.");
				return;
			}
			if (txtBrand->Text->Trim() == "") {
				MessageBox::Show("La marca no debe estar vacío.");
				return;
			}

			if (MessageBox::Show(
				"¿Está seguro de actualizar el producto?",
				"Confirmación", MessageBoxButtons::YesNo,
				MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				Groceries^ p = gcnew Groceries();
				try {
					p->Id = Int32::Parse(txtId->Text);
					p->Name = txtNamegroceries->Text;
					p->Description = txtDescription->Text;
					p->Price = Double::Parse(txtPrice->Text);
					p->Brand = txtBrand->Text;
					p->StockTotal = Int32::Parse(txtStock->Text);

					if (pbPhoto->Image != nullptr) {
						System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
						pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
						p->Photo = ms->ToArray();
					}

					p->Status = 'A';

					AppManager::UpdateProduct(p);
					//btnAdd->Enabled = false;
					btnUpdate->Enabled = false;
					btnDelete->Enabled = false;
					btnUploadPhoto->Enabled = false;

					btnUpdatehealthcare->Enabled = false;
					btnDeletehealthcare->Enabled = false;
					btnUploadPhotohealthcare->Enabled = false;
					RefreshDGVProducts();
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->ToString(), "Error al grabar.");
					return;
				}
			}
			else
			{
				// If 'No', do something here.
			}
		}

			   System::Void ClearControls()
			   {
				   txtId->Clear();
				   txtPrice->Clear();
				   txtNamegroceries->Clear();
				   txtDescription->Clear();
				   txtBrand->Clear();
				   txtStock->Clear();
				   pbPhoto->Image = nullptr;

				   txtIdhealthcare->Clear();
				   txtPricehealthcare->Clear();
				   txtNamehealthcare->Clear();
				   txtDescriptionhealthcare->Clear();
				   txtBrandhealthcare->Clear();
				   txtStockhealthcare->Clear();
				   pbPhotohealthcare->Image = nullptr;

			   }
			   Void EnableControls() {
				   //txtNamegroceries->ReadOnly = false;
				   txtPrice->ReadOnly = false;
				   txtStock->ReadOnly = false;
				   txtDescription->ReadOnly = false;
				   btnAdd->Enabled = true;
			   }
			   Void EnableHealthCareControls() {
				   //txtNamehealthcare->ReadOnly = false;
				   btnAddhealthcare->Enabled = true;
				   btnUploadPhotohealthcare->Enabled = true;
			   }
	

		private: System::Void cerrarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}


		private: System::Void editarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			EnableControls();
			btnAdd->Enabled = false;
			btnUpdate->Enabled = true;
			btnDelete->Enabled = true;
			btnUploadPhoto->Enabled = true;
			btnAddhealthcare->Enabled = false;
			btnUpdatehealthcare->Enabled = true;
			btnDeletehealthcare->Enabled = true;
			btnUploadPhotohealthcare->Enabled = true;
		}


		private: System::Void btnUploadPhoto_Click(System::Object^ sender, System::EventArgs^ e) {
			OpenFileDialog^ opnfd = gcnew OpenFileDialog();
			opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
			if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				pbPhoto->Image = gcnew Bitmap(opnfd->FileName);
			}
		}

		private: System::Void btnAddhealthcare_Click(System::Object^ sender, System::EventArgs^ e) {
			HealthCare^ p = gcnew HealthCare();
			try {
				if (txtPricehealthcare->Text->Trim() == "") {
					MessageBox::Show("El precio no debe estar vacío.");
					return;
				}
				if (txtStockhealthcare->Text->Trim() == "") {
					MessageBox::Show("El stock no debe estar vacío.");
					return;
				}
				p->Id = AppManager::QueryLastProductId() + 1;
				p->Name = txtNamehealthcare->Text;
				p->Description = txtDescriptionhealthcare->Text;
				p->Price = Double::Parse(txtPricehealthcare->Text);
				p->StockTotal = Int32::Parse(txtStockhealthcare->Text);
				p->Brand = txtBrandhealthcare->Text;
				p->Status = 'A';

				if (pbPhotohealthcare->Image != nullptr) {
					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
					pbPhotohealthcare->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					p->Photo = ms->ToArray();
				}

				AppManager::AddProduct(p);
				RefreshDGVProducts();
				btnAddhealthcare->Enabled = false;
				ClearControls();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->ToString(), "No se logró grabar.");
				return;
			}
		}

		private: System::Void tabControl1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (tabPageGroceries->Visible) {
				RefreshDGVGroceries();
			}
			if (tabPageHealthCare->Visible) {
				RefreshDGVHealthCare();
			}
		}
		
		private: System::Void dgvHealthCare_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			// Cellclick me indica en que reglon (fila) se llevo a cabo el click
			if (dgvHealthCare->CurrentCell != nullptr &&
				dgvHealthCare->CurrentCell->Value != nullptr &&
				dgvHealthCare->CurrentCell->Value->ToString() != "") {
				int selectedrowindex = dgvHealthCare->SelectedCells[0]->RowIndex;
				DataGridViewRow^ selectedRow = dgvHealthCare->Rows[selectedrowindex];
				String^ a = selectedRow->Cells[0]->Value->ToString();

				int productId = Int32::Parse(a);
				HealthCare^ p = AppManager::QueryHealthCareById(productId);
				txtIdhealthcare->Text = "" + p->Id;
				txtNamehealthcare->Text = p->Name;
				txtDescriptionhealthcare->Text = p->Description;
				txtPricehealthcare->Text = "" + p->Price;
				txtStockhealthcare->Text = "" + p->StockTotal;
				txtBrandhealthcare->Text = p->Brand;

				if (p->Photo != nullptr) {
					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(p->Photo);
					pbPhotohealthcare->Image = Image::FromStream(ms);
				}
				else {
					pbPhotohealthcare->Image = nullptr;
					pbPhotohealthcare->Invalidate();
				}
			}
		}

		private: System::Void btnUploadPhotohealthcare_Click(System::Object^ sender, System::EventArgs^ e) {
			OpenFileDialog^ opnfd = gcnew OpenFileDialog();
			opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
			if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				pbPhotohealthcare->Image = gcnew Bitmap(opnfd->FileName);
			}
		}

		private: System::Void btnUpdatehealthcare_Click(System::Object^ sender, System::EventArgs^ e) {
			if (txtIdhealthcare->Text->Trim() == "") {
				MessageBox::Show("El Id no debe estar vacío.");
				return;
			}
			if (txtNamehealthcare->Text->Trim() == "") {
				MessageBox::Show("El nombre no debe estar vacío.");
				return;
			}
			if (txtPricehealthcare->Text->Trim() == "") {
				MessageBox::Show("El precio no debe estar vacío.");
				return;
			}
			if (txtStockhealthcare->Text->Trim() == "") {
				MessageBox::Show("El stock no debe estar vacío.");
				return;
			}
			if (txtBrandhealthcare->Text->Trim() == "") {
				MessageBox::Show("La marca no debe estar vacío.");
				return;
			}

			if (MessageBox::Show(
				"¿Está seguro de actualizar el producto?",
				"Confirmación", MessageBoxButtons::YesNo,
				MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				HealthCare^ p = gcnew HealthCare();
				try {
					p->Id = Int32::Parse(txtIdhealthcare->Text);
					p->Name = txtNamehealthcare->Text;
					p->Description = txtDescriptionhealthcare->Text;
					p->Price = Double::Parse(txtPricehealthcare->Text);
					p->StockTotal = Int32::Parse(txtStockhealthcare->Text);

					if (pbPhotohealthcare->Image != nullptr) {
						System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
						pbPhotohealthcare->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
						p->Photo = ms->ToArray();
					}

					p->Brand = txtBrandhealthcare->Text;
					p->Status = 'A';
					btnUpdate->Enabled = false;
					btnDelete->Enabled = false;
					btnUploadPhoto->Enabled = false;

					//btnAddhealthcare->Enabled = true;
					btnUpdatehealthcare->Enabled = false;
					btnDeletehealthcare->Enabled = false;
					btnUploadPhotohealthcare->Enabled = false;
					AppManager::UpdateProduct(p);
					RefreshDGVProducts();
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->ToString(), "Error al grabar.");
					return;
				}
			}
			else
			{
				// If 'No', do something here.
			}
		}

		private: System::Void btnDeletehealthcare_Click(System::Object^ sender, System::EventArgs^ e) {
			if (txtIdhealthcare->Text->Trim() == "") {
				MessageBox::Show("Debe elegir un producto a eliminar.");
				return;
			}

			if (MessageBox::Show(
				"¿Está seguro de eliminar el producto?",
				"Confirmación", MessageBoxButtons::YesNo,
				MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				AppManager::DeleteProduct(Int32::Parse(txtIdhealthcare->Text));
				RefreshDGVHealthCare();
				ClearControls();
			}
		}

		private: System::Void alimentosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearControls();
			EnableControls();
			btnUploadPhoto->Enabled = true;
			btnUploadPhotohealthcare->Enabled = false;
			btnUpdate->Enabled = false;
			btnDelete->Enabled = false;
		}

		private: System::Void saludToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearControls();
			EnableHealthCareControls();
			btnUpdatehealthcare->Enabled = false;
			btnDeletehealthcare->Enabled = false;
		}

};
}
