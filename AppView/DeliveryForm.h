#pragma once
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
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de DeliveryForm
	/// </summary>
	public ref class DeliveryForm : public System::Windows::Forms::Form
	{
	public:
		static User^ user;
		static DeliveryMan^ deliveryman;
		DeliveryForm(void)
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
		~DeliveryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ Title;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ btnReset;
	private: System::Windows::Forms::PictureBox^ btnClose;
	private: System::Windows::Forms::PictureBox^ btnMin;
	private: System::Windows::Forms::PictureBox^ btnMax;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnSale;
	private: System::Windows::Forms::Button^ btnSignoff;
	private: Bunifu::Framework::UI::BunifuSeparator^ bunifuSeparator1;
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton1;
	private: Bunifu::Framework::UI::BunifuSeparator^ lineSidebar;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DeliveryForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuSeparator1 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->lineSidebar = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->btnSignoff = (gcnew System::Windows::Forms::Button());
			this->btnSale = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnReset = (gcnew System::Windows::Forms::PictureBox());
			this->btnClose = (gcnew System::Windows::Forms::PictureBox());
			this->btnMax = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnMin = (gcnew System::Windows::Forms::PictureBox());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnReset))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnClose))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMax))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMin))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->panel1->Controls->Add(this->bunifuSeparator1);
			this->panel1->Controls->Add(this->bunifuFlatButton1);
			this->panel1->Controls->Add(this->lineSidebar);
			this->panel1->Controls->Add(this->btnSignoff);
			this->panel1->Controls->Add(this->btnSale);
			this->panel1->Location = System::Drawing::Point(0, 66);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(165, 415);
			this->panel1->TabIndex = 0;
			// 
			// bunifuSeparator1
			// 
			this->bunifuSeparator1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuSeparator1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->bunifuSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->bunifuSeparator1->LineThickness = 2;
			this->bunifuSeparator1->Location = System::Drawing::Point(3, 316);
			this->bunifuSeparator1->Name = L"bunifuSeparator1";
			this->bunifuSeparator1->Size = System::Drawing::Size(149, 36);
			this->bunifuSeparator1->TabIndex = 11;
			this->bunifuSeparator1->Transparency = 150;
			this->bunifuSeparator1->Vertical = false;
			// 
			// bunifuFlatButton1
			// 
			this->bunifuFlatButton1->Activecolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton1->BorderRadius = 0;
			this->bunifuFlatButton1->ButtonText = L"MAPA";
			this->bunifuFlatButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton1->DisabledColor = System::Drawing::Color::Gray;
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
			this->bunifuFlatButton1->Location = System::Drawing::Point(25, 174);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(131, 30);
			this->bunifuFlatButton1->TabIndex = 10;
			this->bunifuFlatButton1->Text = L"MAPA";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			// 
			// lineSidebar
			// 
			this->lineSidebar->BackColor = System::Drawing::Color::Transparent;
			this->lineSidebar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->lineSidebar->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->lineSidebar->LineThickness = 2;
			this->lineSidebar->Location = System::Drawing::Point(7, 132);
			this->lineSidebar->Name = L"lineSidebar";
			this->lineSidebar->Size = System::Drawing::Size(149, 36);
			this->lineSidebar->TabIndex = 9;
			this->lineSidebar->Transparency = 150;
			this->lineSidebar->Vertical = false;
			// 
			// btnSignoff
			// 
			this->btnSignoff->FlatAppearance->BorderSize = 0;
			this->btnSignoff->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSignoff->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnSignoff->Location = System::Drawing::Point(0, 344);
			this->btnSignoff->Name = L"btnSignoff";
			this->btnSignoff->Size = System::Drawing::Size(182, 68);
			this->btnSignoff->TabIndex = 8;
			this->btnSignoff->Text = L"CERRAR SESIÓN";
			this->btnSignoff->UseVisualStyleBackColor = true;
			// 
			// btnSale
			// 
			this->btnSale->Activecolor = System::Drawing::Color::Transparent;
			this->btnSale->BackColor = System::Drawing::Color::Transparent;
			this->btnSale->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSale->BorderRadius = 0;
			this->btnSale->ButtonText = L"LISTA DE PEDIDOS";
			this->btnSale->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSale->DisabledColor = System::Drawing::Color::Gray;
			this->btnSale->Iconcolor = System::Drawing::Color::Transparent;
			this->btnSale->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSale.Iconimage")));
			this->btnSale->Iconimage_right = nullptr;
			this->btnSale->Iconimage_right_Selected = nullptr;
			this->btnSale->Iconimage_Selected = nullptr;
			this->btnSale->IconMarginLeft = 0;
			this->btnSale->IconMarginRight = 0;
			this->btnSale->IconRightVisible = true;
			this->btnSale->IconRightZoom = 0;
			this->btnSale->IconVisible = true;
			this->btnSale->IconZoom = 90;
			this->btnSale->IsTab = false;
			this->btnSale->Location = System::Drawing::Point(25, 96);
			this->btnSale->Name = L"btnSale";
			this->btnSale->Normalcolor = System::Drawing::Color::Transparent;
			this->btnSale->OnHovercolor = System::Drawing::Color::Transparent;
			this->btnSale->OnHoverTextColor = System::Drawing::Color::White;
			this->btnSale->selected = false;
			this->btnSale->Size = System::Drawing::Size(131, 30);
			this->btnSale->TabIndex = 5;
			this->btnSale->Text = L"LISTA DE PEDIDOS";
			this->btnSale->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSale->Textcolor = System::Drawing::Color::White;
			this->btnSale->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->panel2->Controls->Add(this->btnReset);
			this->panel2->Controls->Add(this->btnClose);
			this->panel2->Controls->Add(this->btnMax);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->btnMin);
			this->panel2->Controls->Add(this->Title);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(675, 66);
			this->panel2->TabIndex = 1;
			// 
			// btnReset
			// 
			this->btnReset->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnReset->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnReset.Image")));
			this->btnReset->Location = System::Drawing::Point(595, 19);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(30, 30);
			this->btnReset->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btnReset->TabIndex = 5;
			this->btnReset->TabStop = false;
			this->btnReset->Visible = false;
			// 
			// btnClose
			// 
			this->btnClose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClose.Image")));
			this->btnClose->Location = System::Drawing::Point(631, 19);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(30, 30);
			this->btnClose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btnClose->TabIndex = 6;
			this->btnClose->TabStop = false;
			// 
			// btnMax
			// 
			this->btnMax->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMax->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMax.Image")));
			this->btnMax->Location = System::Drawing::Point(595, 19);
			this->btnMax->Name = L"btnMax";
			this->btnMax->Size = System::Drawing::Size(30, 30);
			this->btnMax->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btnMax->TabIndex = 1;
			this->btnMax->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(25, 10);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// btnMin
			// 
			this->btnMin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMin.Image")));
			this->btnMin->Location = System::Drawing::Point(559, 19);
			this->btnMin->Name = L"btnMin";
			this->btnMin->Size = System::Drawing::Size(30, 30);
			this->btnMin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btnMin->TabIndex = 4;
			this->btnMin->TabStop = false;
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->ForeColor = System::Drawing::Color::Transparent;
			this->Title->Location = System::Drawing::Point(105, 19);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(126, 23);
			this->Title->TabIndex = 2;
			this->Title->Text = L"DELIMARKET";
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(171, 72);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(504, 400);
			this->panel3->TabIndex = 1;
			// 
			// DeliveryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(675, 475);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"DeliveryForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DeliveryForm";
			this->Load += gcnew System::EventHandler(this, &DeliveryForm::DeliveryForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnReset))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnClose))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMax))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMin))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void DeliveryForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Show();
	}
};
}
