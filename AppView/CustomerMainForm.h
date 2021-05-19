#pragma once

namespace AppView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Bunifu;

	/// <summary>
	/// Resumen de CustomerMainForm
	/// </summary>
	public ref class CustomerMainForm : public System::Windows::Forms::Form
	{
	public:
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
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton4;
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton1;
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton3;
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton2;
	private: Bunifu::Framework::UI::BunifuSeparator^ lineSidebar;
	private: Bunifu::Framework::UI::BunifuSeparator^ lineSideBar3;
	private: Bunifu::Framework::UI::BunifuSeparator^ lineSidebar2;

















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
			this->bunifuFlatButton4 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton3 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton2 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->lineSidebar = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->lineSideBar3 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->lineSidebar2 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->Wrapper = (gcnew System::Windows::Forms::Panel());
			this->Top->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnReset))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnClose))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MenuSideBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMax))->BeginInit();
			this->SideBarWrapper->SuspendLayout();
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
			this->SideBarWrapper->Controls->Add(this->bunifuFlatButton4);
			this->SideBarWrapper->Controls->Add(this->bunifuFlatButton1);
			this->SideBarWrapper->Controls->Add(this->bunifuFlatButton3);
			this->SideBarWrapper->Controls->Add(this->bunifuFlatButton2);
			this->SideBarWrapper->Controls->Add(this->lineSidebar);
			this->SideBarWrapper->Controls->Add(this->lineSideBar3);
			this->SideBarWrapper->Controls->Add(this->lineSidebar2);
			this->SideBarWrapper->Dock = System::Windows::Forms::DockStyle::Left;
			this->SideBarWrapper->Location = System::Drawing::Point(0, 66);
			this->SideBarWrapper->Name = L"SideBarWrapper";
			this->SideBarWrapper->Size = System::Drawing::Size(181, 409);
			this->SideBarWrapper->TabIndex = 1;
			// 
			// bunifuFlatButton4
			// 
			this->bunifuFlatButton4->Activecolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton4->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton4->BorderRadius = 0;
			this->bunifuFlatButton4->ButtonText = L"     MIS COMPRAS";
			this->bunifuFlatButton4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton4->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton4->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton4->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton4.Iconimage")));
			this->bunifuFlatButton4->Iconimage_right = nullptr;
			this->bunifuFlatButton4->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton4->Iconimage_Selected = nullptr;
			this->bunifuFlatButton4->IconMarginLeft = 0;
			this->bunifuFlatButton4->IconMarginRight = 0;
			this->bunifuFlatButton4->IconRightVisible = true;
			this->bunifuFlatButton4->IconRightZoom = 0;
			this->bunifuFlatButton4->IconVisible = true;
			this->bunifuFlatButton4->IconZoom = 90;
			this->bunifuFlatButton4->IsTab = false;
			this->bunifuFlatButton4->Location = System::Drawing::Point(12, 255);
			this->bunifuFlatButton4->Name = L"bunifuFlatButton4";
			this->bunifuFlatButton4->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton4->OnHovercolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton4->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton4->selected = false;
			this->bunifuFlatButton4->Size = System::Drawing::Size(157, 40);
			this->bunifuFlatButton4->TabIndex = 6;
			this->bunifuFlatButton4->Text = L"     MIS COMPRAS";
			this->bunifuFlatButton4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton4->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton4->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			// 
			// bunifuFlatButton1
			// 
			this->bunifuFlatButton1->Activecolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton1->BorderRadius = 0;
			this->bunifuFlatButton1->ButtonText = L"    PRODUCTOS";
			this->bunifuFlatButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton1->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton1->Font = (gcnew System::Drawing::Font(L"Candara", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton1->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton1.Iconimage")));
			this->bunifuFlatButton1->Iconimage_right = nullptr;
			this->bunifuFlatButton1->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton1->Iconimage_Selected = nullptr;
			this->bunifuFlatButton1->IconMarginLeft = 0;
			this->bunifuFlatButton1->IconMarginRight = 0;
			this->bunifuFlatButton1->IconRightVisible = true;
			this->bunifuFlatButton1->IconRightZoom = 0;
			this->bunifuFlatButton1->IconVisible = true;
			this->bunifuFlatButton1->IconZoom = 90;
			this->bunifuFlatButton1->IsTab = false;
			this->bunifuFlatButton1->Location = System::Drawing::Point(12, 55);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(177, 34);
			this->bunifuFlatButton1->TabIndex = 3;
			this->bunifuFlatButton1->Text = L"    PRODUCTOS";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton1->Click += gcnew System::EventHandler(this, &CustomerMainForm::bunifuFlatButton1_Click);
			// 
			// bunifuFlatButton3
			// 
			this->bunifuFlatButton3->Activecolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton3->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton3->BorderRadius = 0;
			this->bunifuFlatButton3->ButtonText = L"     PUNTOS BONUS";
			this->bunifuFlatButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton3->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton3->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton3->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton3.Iconimage")));
			this->bunifuFlatButton3->Iconimage_right = nullptr;
			this->bunifuFlatButton3->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton3->Iconimage_Selected = nullptr;
			this->bunifuFlatButton3->IconMarginLeft = 0;
			this->bunifuFlatButton3->IconMarginRight = 0;
			this->bunifuFlatButton3->IconRightVisible = true;
			this->bunifuFlatButton3->IconRightZoom = 0;
			this->bunifuFlatButton3->IconVisible = true;
			this->bunifuFlatButton3->IconZoom = 90;
			this->bunifuFlatButton3->IsTab = false;
			this->bunifuFlatButton3->Location = System::Drawing::Point(10, 189);
			this->bunifuFlatButton3->Name = L"bunifuFlatButton3";
			this->bunifuFlatButton3->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton3->OnHovercolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton3->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton3->selected = false;
			this->bunifuFlatButton3->Size = System::Drawing::Size(172, 30);
			this->bunifuFlatButton3->TabIndex = 5;
			this->bunifuFlatButton3->Text = L"     PUNTOS BONUS";
			this->bunifuFlatButton3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton3->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton3->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton3->Click += gcnew System::EventHandler(this, &CustomerMainForm::bunifuFlatButton3_Click);
			// 
			// bunifuFlatButton2
			// 
			this->bunifuFlatButton2->Activecolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton2->BorderRadius = 0;
			this->bunifuFlatButton2->ButtonText = L"     CARRITO";
			this->bunifuFlatButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton2->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton2->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton2.Iconimage")));
			this->bunifuFlatButton2->Iconimage_right = nullptr;
			this->bunifuFlatButton2->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton2->Iconimage_Selected = nullptr;
			this->bunifuFlatButton2->IconMarginLeft = 0;
			this->bunifuFlatButton2->IconMarginRight = 0;
			this->bunifuFlatButton2->IconRightVisible = true;
			this->bunifuFlatButton2->IconRightZoom = 0;
			this->bunifuFlatButton2->IconVisible = true;
			this->bunifuFlatButton2->IconZoom = 90;
			this->bunifuFlatButton2->IsTab = false;
			this->bunifuFlatButton2->Location = System::Drawing::Point(12, 125);
			this->bunifuFlatButton2->Name = L"bunifuFlatButton2";
			this->bunifuFlatButton2->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->OnHovercolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton2->selected = false;
			this->bunifuFlatButton2->Size = System::Drawing::Size(131, 30);
			this->bunifuFlatButton2->TabIndex = 4;
			this->bunifuFlatButton2->Text = L"     CARRITO";
			this->bunifuFlatButton2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton2->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton2->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton2->Click += gcnew System::EventHandler(this, &CustomerMainForm::bunifuFlatButton2_Click);
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
			this->Wrapper->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Wrapper->Location = System::Drawing::Point(181, 66);
			this->Wrapper->Name = L"Wrapper";
			this->Wrapper->Size = System::Drawing::Size(494, 409);
			this->Wrapper->TabIndex = 1;
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
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CustomerMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void bunifuFlatButton2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bunifuFlatButton3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bunifuFlatButton1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
