#pragma once
#include "ProductForm.h"
#include "Login.h"

namespace AppView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace AppModel;
	using namespace AppController;
	using namespace Bunifu;

	/// <summary>
	/// Resumen de CustomerMainForm
	/// </summary>
	public ref class CustomerMainForm : public System::Windows::Forms::Form
	{
	public:
		static User^ user;
		static Customer^ customer;
		CustomerMainForm(void)
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
		~CustomerMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ Top;
	protected:
	private: System::Windows::Forms::PictureBox^ btnReset;
	private: System::Windows::Forms::PictureBox^ btnClose;
	private: System::Windows::Forms::Label^ Title;
	private: System::Windows::Forms::PictureBox^ MenuSideBar;

	private: System::Windows::Forms::PictureBox^ btnMin;
	private: System::Windows::Forms::PictureBox^ btnMax;
	private: System::Windows::Forms::Panel^ SideBarWrapper;
	private: System::Windows::Forms::Panel^ Wrapper;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnMyshopping;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnListofproducts;


	private: Bunifu::Framework::UI::BunifuFlatButton^ btnBonuspoints;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnShoppingcart;


	private: Bunifu::Framework::UI::BunifuSeparator^ lineSidebar;
	private: Bunifu::Framework::UI::BunifuSeparator^ lineSideBar3;
	private: Bunifu::Framework::UI::BunifuSeparator^ lineSidebar2;
	private: Bunifu::Framework::UI::BunifuSeparator^ bunifuSeparator1;
	private: System::Windows::Forms::Button^ btnSignoff;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ inventarioToolStripMenuItem;






















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CustomerMainForm::typeid));
			this->Top = (gcnew System::Windows::Forms::Panel());
			this->btnReset = (gcnew System::Windows::Forms::PictureBox());
			this->btnClose = (gcnew System::Windows::Forms::PictureBox());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->MenuSideBar = (gcnew System::Windows::Forms::PictureBox());
			this->btnMin = (gcnew System::Windows::Forms::PictureBox());
			this->btnMax = (gcnew System::Windows::Forms::PictureBox());
			this->SideBarWrapper = (gcnew System::Windows::Forms::Panel());
			this->bunifuSeparator1 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->btnSignoff = (gcnew System::Windows::Forms::Button());
			this->btnMyshopping = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnListofproducts = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnBonuspoints = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnShoppingcart = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->lineSidebar = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->lineSideBar3 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->lineSidebar2 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->Wrapper = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->inventarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Top->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnReset))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnClose))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MenuSideBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMax))->BeginInit();
			this->SideBarWrapper->SuspendLayout();
			this->Wrapper->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Top
			// 
			this->Top->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->Top->Controls->Add(this->btnReset);
			this->Top->Controls->Add(this->btnClose);
			this->Top->Controls->Add(this->Title);
			this->Top->Controls->Add(this->MenuSideBar);
			this->Top->Controls->Add(this->btnMin);
			this->Top->Controls->Add(this->btnMax);
			this->Top->Dock = System::Windows::Forms::DockStyle::Top;
			this->Top->ForeColor = System::Drawing::Color::Transparent;
			this->Top->Location = System::Drawing::Point(0, 0);
			this->Top->Name = L"Top";
			this->Top->Size = System::Drawing::Size(675, 66);
			this->Top->TabIndex = 0;
			// 
			// btnReset
			// 
			this->btnReset->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnReset->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnReset.Image")));
			this->btnReset->Location = System::Drawing::Point(594, 23);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(30, 30);
			this->btnReset->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btnReset->TabIndex = 2;
			this->btnReset->TabStop = false;
			this->btnReset->Visible = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &CustomerMainForm::btnReset_Click);
			// 
			// btnClose
			// 
			this->btnClose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClose.Image")));
			this->btnClose->Location = System::Drawing::Point(630, 23);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(30, 30);
			this->btnClose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btnClose->TabIndex = 3;
			this->btnClose->TabStop = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &CustomerMainForm::btnClose_Click);
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->Location = System::Drawing::Point(63, 23);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(126, 23);
			this->Title->TabIndex = 1;
			this->Title->Text = L"DELIMARKET";
			// 
			// MenuSideBar
			// 
			this->MenuSideBar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MenuSideBar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MenuSideBar.Image")));
			this->MenuSideBar->Location = System::Drawing::Point(9, 12);
			this->MenuSideBar->Name = L"MenuSideBar";
			this->MenuSideBar->Size = System::Drawing::Size(50, 50);
			this->MenuSideBar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->MenuSideBar->TabIndex = 0;
			this->MenuSideBar->TabStop = false;
			this->MenuSideBar->Click += gcnew System::EventHandler(this, &CustomerMainForm::MenuSideBar_Click);
			// 
			// btnMin
			// 
			this->btnMin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMin.Image")));
			this->btnMin->Location = System::Drawing::Point(558, 23);
			this->btnMin->Name = L"btnMin";
			this->btnMin->Size = System::Drawing::Size(30, 30);
			this->btnMin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btnMin->TabIndex = 1;
			this->btnMin->TabStop = false;
			this->btnMin->Click += gcnew System::EventHandler(this, &CustomerMainForm::btnMin_Click);
			// 
			// btnMax
			// 
			this->btnMax->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMax->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMax.Image")));
			this->btnMax->Location = System::Drawing::Point(594, 23);
			this->btnMax->Name = L"btnMax";
			this->btnMax->Size = System::Drawing::Size(30, 30);
			this->btnMax->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btnMax->TabIndex = 0;
			this->btnMax->TabStop = false;
			this->btnMax->Click += gcnew System::EventHandler(this, &CustomerMainForm::btnMax_Click_1);
			// 
			// SideBarWrapper
			// 
			this->SideBarWrapper->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->SideBarWrapper->Controls->Add(this->bunifuSeparator1);
			this->SideBarWrapper->Controls->Add(this->btnSignoff);
			this->SideBarWrapper->Controls->Add(this->btnMyshopping);
			this->SideBarWrapper->Controls->Add(this->btnListofproducts);
			this->SideBarWrapper->Controls->Add(this->btnBonuspoints);
			this->SideBarWrapper->Controls->Add(this->btnShoppingcart);
			this->SideBarWrapper->Controls->Add(this->lineSidebar);
			this->SideBarWrapper->Controls->Add(this->lineSideBar3);
			this->SideBarWrapper->Controls->Add(this->lineSidebar2);
			this->SideBarWrapper->Dock = System::Windows::Forms::DockStyle::Left;
			this->SideBarWrapper->Location = System::Drawing::Point(0, 66);
			this->SideBarWrapper->Name = L"SideBarWrapper";
			this->SideBarWrapper->Size = System::Drawing::Size(165, 409);
			this->SideBarWrapper->TabIndex = 1;
			// 
			// bunifuSeparator1
			// 
			this->bunifuSeparator1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuSeparator1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->bunifuSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->bunifuSeparator1->LineThickness = 2;
			this->bunifuSeparator1->Location = System::Drawing::Point(10, 301);
			this->bunifuSeparator1->Name = L"bunifuSeparator1";
			this->bunifuSeparator1->Size = System::Drawing::Size(152, 36);
			this->bunifuSeparator1->TabIndex = 8;
			this->bunifuSeparator1->Transparency = 150;
			this->bunifuSeparator1->Vertical = false;
			// 
			// btnSignoff
			// 
			this->btnSignoff->FlatAppearance->BorderSize = 0;
			this->btnSignoff->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSignoff->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnSignoff->Location = System::Drawing::Point(0, 329);
			this->btnSignoff->Name = L"btnSignoff";
			this->btnSignoff->Size = System::Drawing::Size(182, 68);
			this->btnSignoff->TabIndex = 7;
			this->btnSignoff->Text = L"CERRAR SESIÓN";
			this->btnSignoff->UseVisualStyleBackColor = true;
			this->btnSignoff->Click += gcnew System::EventHandler(this, &CustomerMainForm::btnSignoff_Click);
			// 
			// btnMyshopping
			// 
			this->btnMyshopping->Activecolor = System::Drawing::Color::Transparent;
			this->btnMyshopping->BackColor = System::Drawing::Color::Transparent;
			this->btnMyshopping->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnMyshopping->BorderRadius = 0;
			this->btnMyshopping->ButtonText = L"  MIS COMPRAS";
			this->btnMyshopping->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMyshopping->DisabledColor = System::Drawing::Color::Gray;
			this->btnMyshopping->Iconcolor = System::Drawing::Color::Transparent;
			this->btnMyshopping->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMyshopping.Iconimage")));
			this->btnMyshopping->Iconimage_right = nullptr;
			this->btnMyshopping->Iconimage_right_Selected = nullptr;
			this->btnMyshopping->Iconimage_Selected = nullptr;
			this->btnMyshopping->IconMarginLeft = 0;
			this->btnMyshopping->IconMarginRight = 0;
			this->btnMyshopping->IconRightVisible = true;
			this->btnMyshopping->IconRightZoom = 0;
			this->btnMyshopping->IconVisible = true;
			this->btnMyshopping->IconZoom = 90;
			this->btnMyshopping->IsTab = false;
			this->btnMyshopping->Location = System::Drawing::Point(12, 255);
			this->btnMyshopping->Name = L"btnMyshopping";
			this->btnMyshopping->Normalcolor = System::Drawing::Color::Transparent;
			this->btnMyshopping->OnHovercolor = System::Drawing::Color::Transparent;
			this->btnMyshopping->OnHoverTextColor = System::Drawing::Color::White;
			this->btnMyshopping->selected = false;
			this->btnMyshopping->Size = System::Drawing::Size(157, 40);
			this->btnMyshopping->TabIndex = 6;
			this->btnMyshopping->Text = L"  MIS COMPRAS";
			this->btnMyshopping->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnMyshopping->Textcolor = System::Drawing::Color::White;
			this->btnMyshopping->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			// 
			// btnListofproducts
			// 
			this->btnListofproducts->Activecolor = System::Drawing::Color::Transparent;
			this->btnListofproducts->BackColor = System::Drawing::Color::Transparent;
			this->btnListofproducts->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnListofproducts->BorderRadius = 0;
			this->btnListofproducts->ButtonText = L"    PRODUCTOS";
			this->btnListofproducts->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnListofproducts->DisabledColor = System::Drawing::Color::Gray;
			this->btnListofproducts->Font = (gcnew System::Drawing::Font(L"Candara", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnListofproducts->Iconcolor = System::Drawing::Color::Transparent;
			this->btnListofproducts->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnListofproducts.Iconimage")));
			this->btnListofproducts->Iconimage_right = nullptr;
			this->btnListofproducts->Iconimage_right_Selected = nullptr;
			this->btnListofproducts->Iconimage_Selected = nullptr;
			this->btnListofproducts->IconMarginLeft = 0;
			this->btnListofproducts->IconMarginRight = 0;
			this->btnListofproducts->IconRightVisible = true;
			this->btnListofproducts->IconRightZoom = 0;
			this->btnListofproducts->IconVisible = true;
			this->btnListofproducts->IconZoom = 90;
			this->btnListofproducts->IsTab = false;
			this->btnListofproducts->Location = System::Drawing::Point(12, 55);
			this->btnListofproducts->Name = L"btnListofproducts";
			this->btnListofproducts->Normalcolor = System::Drawing::Color::Transparent;
			this->btnListofproducts->OnHovercolor = System::Drawing::Color::Transparent;
			this->btnListofproducts->OnHoverTextColor = System::Drawing::Color::White;
			this->btnListofproducts->selected = false;
			this->btnListofproducts->Size = System::Drawing::Size(163, 34);
			this->btnListofproducts->TabIndex = 3;
			this->btnListofproducts->Text = L"    PRODUCTOS";
			this->btnListofproducts->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnListofproducts->Textcolor = System::Drawing::Color::White;
			this->btnListofproducts->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnListofproducts->Click += gcnew System::EventHandler(this, &CustomerMainForm::btnListofproducts_Click);
			// 
			// btnBonuspoints
			// 
			this->btnBonuspoints->Activecolor = System::Drawing::Color::Transparent;
			this->btnBonuspoints->BackColor = System::Drawing::Color::Transparent;
			this->btnBonuspoints->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnBonuspoints->BorderRadius = 0;
			this->btnBonuspoints->ButtonText = L"PUNTOS BONUS";
			this->btnBonuspoints->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnBonuspoints->DisabledColor = System::Drawing::Color::Gray;
			this->btnBonuspoints->Iconcolor = System::Drawing::Color::Transparent;
			this->btnBonuspoints->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBonuspoints.Iconimage")));
			this->btnBonuspoints->Iconimage_right = nullptr;
			this->btnBonuspoints->Iconimage_right_Selected = nullptr;
			this->btnBonuspoints->Iconimage_Selected = nullptr;
			this->btnBonuspoints->IconMarginLeft = 0;
			this->btnBonuspoints->IconMarginRight = 0;
			this->btnBonuspoints->IconRightVisible = true;
			this->btnBonuspoints->IconRightZoom = 0;
			this->btnBonuspoints->IconVisible = true;
			this->btnBonuspoints->IconZoom = 90;
			this->btnBonuspoints->IsTab = false;
			this->btnBonuspoints->Location = System::Drawing::Point(10, 189);
			this->btnBonuspoints->Name = L"btnBonuspoints";
			this->btnBonuspoints->Normalcolor = System::Drawing::Color::Transparent;
			this->btnBonuspoints->OnHovercolor = System::Drawing::Color::Transparent;
			this->btnBonuspoints->OnHoverTextColor = System::Drawing::Color::White;
			this->btnBonuspoints->selected = false;
			this->btnBonuspoints->Size = System::Drawing::Size(172, 30);
			this->btnBonuspoints->TabIndex = 5;
			this->btnBonuspoints->Text = L"PUNTOS BONUS";
			this->btnBonuspoints->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnBonuspoints->Textcolor = System::Drawing::Color::White;
			this->btnBonuspoints->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnBonuspoints->Click += gcnew System::EventHandler(this, &CustomerMainForm::btnBonuspoints_Click);
			// 
			// btnShoppingcart
			// 
			this->btnShoppingcart->Activecolor = System::Drawing::Color::Transparent;
			this->btnShoppingcart->BackColor = System::Drawing::Color::Transparent;
			this->btnShoppingcart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnShoppingcart->BorderRadius = 0;
			this->btnShoppingcart->ButtonText = L"     CARRITO";
			this->btnShoppingcart->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnShoppingcart->DisabledColor = System::Drawing::Color::Gray;
			this->btnShoppingcart->Iconcolor = System::Drawing::Color::Transparent;
			this->btnShoppingcart->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnShoppingcart.Iconimage")));
			this->btnShoppingcart->Iconimage_right = nullptr;
			this->btnShoppingcart->Iconimage_right_Selected = nullptr;
			this->btnShoppingcart->Iconimage_Selected = nullptr;
			this->btnShoppingcart->IconMarginLeft = 0;
			this->btnShoppingcart->IconMarginRight = 0;
			this->btnShoppingcart->IconRightVisible = true;
			this->btnShoppingcart->IconRightZoom = 0;
			this->btnShoppingcart->IconVisible = true;
			this->btnShoppingcart->IconZoom = 90;
			this->btnShoppingcart->IsTab = false;
			this->btnShoppingcart->Location = System::Drawing::Point(12, 125);
			this->btnShoppingcart->Name = L"btnShoppingcart";
			this->btnShoppingcart->Normalcolor = System::Drawing::Color::Transparent;
			this->btnShoppingcart->OnHovercolor = System::Drawing::Color::Transparent;
			this->btnShoppingcart->OnHoverTextColor = System::Drawing::Color::White;
			this->btnShoppingcart->selected = false;
			this->btnShoppingcart->Size = System::Drawing::Size(131, 30);
			this->btnShoppingcart->TabIndex = 4;
			this->btnShoppingcart->Text = L"     CARRITO";
			this->btnShoppingcart->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnShoppingcart->Textcolor = System::Drawing::Color::White;
			this->btnShoppingcart->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnShoppingcart->Click += gcnew System::EventHandler(this, &CustomerMainForm::btnShoppingcart_Click);
			// 
			// lineSidebar
			// 
			this->lineSidebar->BackColor = System::Drawing::Color::Transparent;
			this->lineSidebar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->lineSidebar->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->lineSidebar->LineThickness = 2;
			this->lineSidebar->Location = System::Drawing::Point(12, 95);
			this->lineSidebar->Name = L"lineSidebar";
			this->lineSidebar->Size = System::Drawing::Size(149, 36);
			this->lineSidebar->TabIndex = 0;
			this->lineSidebar->Transparency = 150;
			this->lineSidebar->Vertical = false;
			// 
			// lineSideBar3
			// 
			this->lineSideBar3->BackColor = System::Drawing::Color::Transparent;
			this->lineSideBar3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->lineSideBar3->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->lineSideBar3->LineThickness = 2;
			this->lineSideBar3->Location = System::Drawing::Point(9, 225);
			this->lineSideBar3->Name = L"lineSideBar3";
			this->lineSideBar3->Size = System::Drawing::Size(152, 36);
			this->lineSideBar3->TabIndex = 2;
			this->lineSideBar3->Transparency = 150;
			this->lineSideBar3->Vertical = false;
			// 
			// lineSidebar2
			// 
			this->lineSidebar2->BackColor = System::Drawing::Color::Transparent;
			this->lineSidebar2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->lineSidebar2->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->lineSidebar2->LineThickness = 2;
			this->lineSidebar2->Location = System::Drawing::Point(12, 161);
			this->lineSidebar2->Name = L"lineSidebar2";
			this->lineSidebar2->Size = System::Drawing::Size(149, 36);
			this->lineSidebar2->TabIndex = 1;
			this->lineSidebar2->Transparency = 150;
			this->lineSidebar2->Vertical = false;
			// 
			// Wrapper
			// 
			this->Wrapper->Controls->Add(this->menuStrip1);
			this->Wrapper->Location = System::Drawing::Point(165, 66);
			this->Wrapper->Name = L"Wrapper";
			this->Wrapper->Size = System::Drawing::Size(479, 409);
			this->Wrapper->TabIndex = 1;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->inventarioToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(479, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// inventarioToolStripMenuItem
			// 
			this->inventarioToolStripMenuItem->Name = L"inventarioToolStripMenuItem";
			this->inventarioToolStripMenuItem->Size = System::Drawing::Size(72, 20);
			this->inventarioToolStripMenuItem->Text = L"&Inventario";
			this->inventarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &CustomerMainForm::inventarioToolStripMenuItem_Click);
			// 
			// CustomerMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(675, 475);
			this->Controls->Add(this->Wrapper);
			this->Controls->Add(this->SideBarWrapper);
			this->Controls->Add(this->Top);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"CustomerMainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CustomerMainForm";
			this->Load += gcnew System::EventHandler(this, &CustomerMainForm::CustomerMainForm_Load);
			this->Top->ResumeLayout(false);
			this->Top->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnReset))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnClose))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MenuSideBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMax))->EndInit();
			this->SideBarWrapper->ResumeLayout(false);
			this->Wrapper->ResumeLayout(false);
			this->Wrapper->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CustomerMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		if (user == nullptr) {
			Login^ login = gcnew Login();
			login->ControlBox = false;
			login->Text = "";
			login->ShowDialog();
		}
	}
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		Windows::Forms::Application::Exit();
	}
private: System::Void btnMin_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = Windows::Forms::FormWindowState::Minimized;

}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = Windows::Forms::FormWindowState::Normal;
	btnReset->Visible = false;
	btnMax->Visible = true;
}
private: System::Void btnMax_Click(System::Object^ sender, System::EventArgs^ e) {
	   }
private: System::Void btnMax_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = Windows::Forms::FormWindowState::Maximized;
	btnReset->Visible = true;
	btnMax->Visible = false;
}


private: System::Void MenuSideBar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (SideBarWrapper->Width == 181) {
		SideBarWrapper->Width = 65;
	}
	else {
		SideBarWrapper->Width = 181;
	}
}
private: System::Void btnShoppingcart_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnBonuspoints_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnListofproducts_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSignoff_Click(System::Object^ sender, System::EventArgs^ e) {
	//Programar Cerrar Sesion

	Login^ login = gcnew Login();
	login->Show();
	this->Visible = false;
}
private: System::Void inventarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ProductForm^ productForm = gcnew ProductForm();
	//productForm->MdiParent = this; // this = el mismo SalesMainForm
	productForm->Show();
}

};
}
