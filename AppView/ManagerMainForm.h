#pragma once
#include "Login.h"
#include "BonusPointsForm.h"
#include "StatisticsForm.h"
#include "ProductInventoryForm.h"

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
	/// Resumen de ManagerMainForm
	/// </summary>
	public ref class ManagerMainForm : public System::Windows::Forms::Form
	{
	public:
		static User^ user;
		ManagerMainForm(void)
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
		~ManagerMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::PictureBox^ btnReset;
	private: System::Windows::Forms::PictureBox^ btnClose;
	private: System::Windows::Forms::PictureBox^ btnMax;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ btnMin;
	private: System::Windows::Forms::Label^ Title;
	private: Bunifu::Framework::UI::BunifuSeparator^ bunifuSeparator1;
	private: System::Windows::Forms::Button^ btnSignoff;
	private: System::Windows::Forms::Panel^ panel1;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnRating;

	private: Bunifu::Framework::UI::BunifuSeparator^ lineSidebar;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnInventory;


	private: Bunifu::Framework::UI::BunifuFlatButton^ btnStatistics;


	private: Bunifu::Framework::UI::BunifuSeparator^ bunifuSeparator2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ManagerMainForm::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnReset = (gcnew System::Windows::Forms::PictureBox());
			this->btnClose = (gcnew System::Windows::Forms::PictureBox());
			this->btnMax = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnMin = (gcnew System::Windows::Forms::PictureBox());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->bunifuSeparator1 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->btnSignoff = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnStatistics = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuSeparator2 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->btnRating = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->lineSidebar = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->btnInventory = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnReset))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnClose))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMax))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMin))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
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
			this->panel2->TabIndex = 2;
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
			this->btnReset->Click += gcnew System::EventHandler(this, &ManagerMainForm::btnReset_Click);
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
			this->btnClose->Click += gcnew System::EventHandler(this, &ManagerMainForm::btnClose_Click);
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
			this->btnMin->Click += gcnew System::EventHandler(this, &ManagerMainForm::btnMin_Click);
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
			this->btnSignoff->Click += gcnew System::EventHandler(this, &ManagerMainForm::btnSignoff_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->panel1->Controls->Add(this->btnStatistics);
			this->panel1->Controls->Add(this->bunifuSeparator2);
			this->panel1->Controls->Add(this->bunifuSeparator1);
			this->panel1->Controls->Add(this->btnRating);
			this->panel1->Controls->Add(this->lineSidebar);
			this->panel1->Controls->Add(this->btnSignoff);
			this->panel1->Controls->Add(this->btnInventory);
			this->panel1->Location = System::Drawing::Point(0, 66);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(165, 415);
			this->panel1->TabIndex = 3;
			// 
			// btnStatistics
			// 
			this->btnStatistics->Activecolor = System::Drawing::Color::Transparent;
			this->btnStatistics->BackColor = System::Drawing::Color::Transparent;
			this->btnStatistics->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnStatistics->BorderRadius = 0;
			this->btnStatistics->ButtonText = L"ESTADISTICAS";
			this->btnStatistics->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnStatistics->DisabledColor = System::Drawing::Color::Gray;
			this->btnStatistics->Iconcolor = System::Drawing::Color::Transparent;
			this->btnStatistics->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnStatistics.Iconimage")));
			this->btnStatistics->Iconimage_right = nullptr;
			this->btnStatistics->Iconimage_right_Selected = nullptr;
			this->btnStatistics->Iconimage_Selected = nullptr;
			this->btnStatistics->IconMarginLeft = 0;
			this->btnStatistics->IconMarginRight = 0;
			this->btnStatistics->IconRightVisible = true;
			this->btnStatistics->IconRightZoom = 0;
			this->btnStatistics->IconVisible = true;
			this->btnStatistics->IconZoom = 90;
			this->btnStatistics->IsTab = false;
			this->btnStatistics->Location = System::Drawing::Point(7, 153);
			this->btnStatistics->Name = L"btnStatistics";
			this->btnStatistics->Normalcolor = System::Drawing::Color::Transparent;
			this->btnStatistics->OnHovercolor = System::Drawing::Color::Transparent;
			this->btnStatistics->OnHoverTextColor = System::Drawing::Color::White;
			this->btnStatistics->selected = false;
			this->btnStatistics->Size = System::Drawing::Size(153, 47);
			this->btnStatistics->TabIndex = 13;
			this->btnStatistics->Text = L"ESTADISTICAS";
			this->btnStatistics->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnStatistics->Textcolor = System::Drawing::Color::White;
			this->btnStatistics->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnStatistics->Click += gcnew System::EventHandler(this, &ManagerMainForm::btnStatistics_Click);
			// 
			// bunifuSeparator2
			// 
			this->bunifuSeparator2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuSeparator2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->bunifuSeparator2->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->bunifuSeparator2->LineThickness = 2;
			this->bunifuSeparator2->Location = System::Drawing::Point(7, 206);
			this->bunifuSeparator2->Name = L"bunifuSeparator2";
			this->bunifuSeparator2->Size = System::Drawing::Size(149, 36);
			this->bunifuSeparator2->TabIndex = 12;
			this->bunifuSeparator2->Transparency = 150;
			this->bunifuSeparator2->Vertical = false;
			// 
			// btnRating
			// 
			this->btnRating->Activecolor = System::Drawing::Color::Transparent;
			this->btnRating->BackColor = System::Drawing::Color::Transparent;
			this->btnRating->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnRating->BorderRadius = 0;
			this->btnRating->ButtonText = L"CALIFICACION";
			this->btnRating->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRating->DisabledColor = System::Drawing::Color::Gray;
			this->btnRating->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRating->ForeColor = System::Drawing::Color::White;
			this->btnRating->Iconcolor = System::Drawing::Color::White;
			this->btnRating->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRating.Iconimage")));
			this->btnRating->Iconimage_right = nullptr;
			this->btnRating->Iconimage_right_Selected = nullptr;
			this->btnRating->Iconimage_Selected = nullptr;
			this->btnRating->IconMarginLeft = 0;
			this->btnRating->IconMarginRight = 0;
			this->btnRating->IconRightVisible = true;
			this->btnRating->IconRightZoom = 0;
			this->btnRating->IconVisible = true;
			this->btnRating->IconZoom = 90;
			this->btnRating->IsTab = false;
			this->btnRating->Location = System::Drawing::Point(7, 248);
			this->btnRating->Name = L"btnRating";
			this->btnRating->Normalcolor = System::Drawing::Color::Transparent;
			this->btnRating->OnHovercolor = System::Drawing::Color::Transparent;
			this->btnRating->OnHoverTextColor = System::Drawing::Color::White;
			this->btnRating->selected = false;
			this->btnRating->Size = System::Drawing::Size(155, 57);
			this->btnRating->TabIndex = 10;
			this->btnRating->Text = L"CALIFICACION";
			this->btnRating->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnRating->Textcolor = System::Drawing::Color::White;
			this->btnRating->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			// 
			// lineSidebar
			// 
			this->lineSidebar->BackColor = System::Drawing::Color::Transparent;
			this->lineSidebar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->lineSidebar->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->lineSidebar->LineThickness = 2;
			this->lineSidebar->Location = System::Drawing::Point(7, 111);
			this->lineSidebar->Name = L"lineSidebar";
			this->lineSidebar->Size = System::Drawing::Size(149, 36);
			this->lineSidebar->TabIndex = 9;
			this->lineSidebar->Transparency = 150;
			this->lineSidebar->Vertical = false;
			this->lineSidebar->Load += gcnew System::EventHandler(this, &ManagerMainForm::lineSidebar_Load);
			// 
			// btnInventory
			// 
			this->btnInventory->Activecolor = System::Drawing::Color::Transparent;
			this->btnInventory->BackColor = System::Drawing::Color::Transparent;
			this->btnInventory->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnInventory->BorderRadius = 0;
			this->btnInventory->ButtonText = L"INVENTARIO";
			this->btnInventory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnInventory->DisabledColor = System::Drawing::Color::Gray;
			this->btnInventory->Iconcolor = System::Drawing::Color::Transparent;
			this->btnInventory->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnInventory.Iconimage")));
			this->btnInventory->Iconimage_right = nullptr;
			this->btnInventory->Iconimage_right_Selected = nullptr;
			this->btnInventory->Iconimage_Selected = nullptr;
			this->btnInventory->IconMarginLeft = 0;
			this->btnInventory->IconMarginRight = 0;
			this->btnInventory->IconRightVisible = true;
			this->btnInventory->IconRightZoom = 0;
			this->btnInventory->IconVisible = true;
			this->btnInventory->IconZoom = 90;
			this->btnInventory->IsTab = false;
			this->btnInventory->Location = System::Drawing::Point(7, 66);
			this->btnInventory->Name = L"btnInventory";
			this->btnInventory->Normalcolor = System::Drawing::Color::Transparent;
			this->btnInventory->OnHovercolor = System::Drawing::Color::Transparent;
			this->btnInventory->OnHoverTextColor = System::Drawing::Color::White;
			this->btnInventory->selected = false;
			this->btnInventory->Size = System::Drawing::Size(139, 39);
			this->btnInventory->TabIndex = 5;
			this->btnInventory->Text = L"INVENTARIO";
			this->btnInventory->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnInventory->Textcolor = System::Drawing::Color::White;
			this->btnInventory->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnInventory->Click += gcnew System::EventHandler(this, &ManagerMainForm::btnInventory_Click);
			// 
			// ManagerMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(675, 475);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ManagerMainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ManagerMainForm";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnReset))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnClose))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMax))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnMin))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		Windows::Forms::Application::Exit();
	}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = Windows::Forms::FormWindowState::Normal;
	btnReset->Visible = false;
	btnMax->Visible = true;
}
private: System::Void btnMin_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = Windows::Forms::FormWindowState::Minimized;
}
private: System::Void btnSignoff_Click(System::Object^ sender, System::EventArgs^ e) {
	Login^ login = gcnew Login();
	login->Show();
	this->Hide();
}
private: System::Void lineSidebar_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnInventory_Click(System::Object^ sender, System::EventArgs^ e) {
	ProductInventoryForm^ productinventoryForm = gcnew ProductInventoryForm();
	productinventoryForm->Show();
}
private: System::Void btnStatistics_Click(System::Object^ sender, System::EventArgs^ e) {
	StatisticsForm^ statisticsForm = gcnew StatisticsForm();
	statisticsForm->Show();
}
};
}
