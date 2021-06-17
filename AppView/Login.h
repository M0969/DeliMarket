#pragma once

namespace AppView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace AppModel;
	using namespace AppView;
	using namespace AppController;
	using namespace System::Collections::Generic;

	namespace F = System::Windows::Forms;
	/// <summary>
	/// Resumen de Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	/////////////////////
	private: const int CP_NOCLOSE_BUTTON = 0x200;
	protected:
		virtual property F::CreateParams^ CreateParams
		{
			F::CreateParams^ get() override
			{
				F::CreateParams^ myCp = __super::CreateParams;
				myCp->ClassStyle = myCp->ClassStyle | CP_NOCLOSE_BUTTON;
				return myCp;
			}
		}
	/////////////////
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panelLogin;
	protected:

	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ txtPassword;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ txtUserName;

	private:


	private: Bunifu::Framework::UI::BunifuFlatButton^ btnLogin;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::LinkLabel^ linkCreateAccount;

	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Panel^ panelRegister;

	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ txtPhoneNumberchck;


	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ txtDnichck;

	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ txtLastNamechck;

	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ txtFirstNamechck;

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnRegister;

	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ txtUserchck;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ txtPasswordchck;


	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ txtEmailchck;

	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ txtAddresschck;
	private: System::Windows::Forms::PictureBox^ btnExitchk;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ txtGenderchk;








	private: System::Windows::Forms::CheckBox^ chckGenF;
	private: System::Windows::Forms::CheckBox^ chckGenM;
	private: System::Windows::Forms::CheckBox^ chckCatR;

	private: System::Windows::Forms::CheckBox^ chckCatC;

	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ txtCategorychck;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ txtCodeAccess;
	private: System::Windows::Forms::CheckBox^ chckCatM;












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panelLogin = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->linkCreateAccount = (gcnew System::Windows::Forms::LinkLabel());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->btnLogin = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->txtPassword = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->txtUserName = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelRegister = (gcnew System::Windows::Forms::Panel());
			this->chckCatM = (gcnew System::Windows::Forms::CheckBox());
			this->txtCodeAccess = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->txtCategorychck = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->chckCatR = (gcnew System::Windows::Forms::CheckBox());
			this->chckCatC = (gcnew System::Windows::Forms::CheckBox());
			this->chckGenF = (gcnew System::Windows::Forms::CheckBox());
			this->chckGenM = (gcnew System::Windows::Forms::CheckBox());
			this->txtGenderchk = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->btnExitchk = (gcnew System::Windows::Forms::PictureBox());
			this->txtPasswordchck = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->txtEmailchck = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->txtAddresschck = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->txtPhoneNumberchck = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->txtDnichck = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->txtLastNamechck = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->txtFirstNamechck = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->btnRegister = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->txtUserchck = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->panel1->SuspendLayout();
			this->panelLogin->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelRegister->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitchk))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(240, 461);
			this->panel1->TabIndex = 0;
			// 
			// panelLogin
			// 
			this->panelLogin->Controls->Add(this->pictureBox2);
			this->panelLogin->Controls->Add(this->linkCreateAccount);
			this->panelLogin->Controls->Add(this->checkBox2);
			this->panelLogin->Controls->Add(this->btnLogin);
			this->panelLogin->Controls->Add(this->txtPassword);
			this->panelLogin->Controls->Add(this->txtUserName);
			this->panelLogin->Location = System::Drawing::Point(258, 12);
			this->panelLogin->Name = L"panelLogin";
			this->panelLogin->Size = System::Drawing::Size(299, 461);
			this->panelLogin->TabIndex = 1;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(253, 16);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(25, 30);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Login::pictureBox2_Click);
			// 
			// linkCreateAccount
			// 
			this->linkCreateAccount->AutoSize = true;
			this->linkCreateAccount->LinkColor = System::Drawing::Color::Chocolate;
			this->linkCreateAccount->Location = System::Drawing::Point(110, 394);
			this->linkCreateAccount->Name = L"linkCreateAccount";
			this->linkCreateAccount->Size = System::Drawing::Size(69, 13);
			this->linkCreateAccount->TabIndex = 6;
			this->linkCreateAccount->TabStop = true;
			this->linkCreateAccount->Text = L"Crear Cuenta";
			this->linkCreateAccount->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::linkCreateAccount_LinkClicked);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->checkBox2->ForeColor = System::Drawing::Color::Silver;
			this->checkBox2->Location = System::Drawing::Point(52, 186);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(99, 17);
			this->checkBox2->TabIndex = 4;
			this->checkBox2->Text = L"ShowPassword";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Login::checkBox2_CheckedChanged);
			// 
			// btnLogin
			// 
			this->btnLogin->Activecolor = System::Drawing::Color::Yellow;
			this->btnLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnLogin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnLogin->BorderRadius = 3;
			this->btnLogin->ButtonText = L"                      Ingresar";
			this->btnLogin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLogin->DisabledColor = System::Drawing::Color::Gray;
			this->btnLogin->Iconcolor = System::Drawing::Color::Black;
			this->btnLogin->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLogin.Iconimage")));
			this->btnLogin->Iconimage_right = nullptr;
			this->btnLogin->Iconimage_right_Selected = nullptr;
			this->btnLogin->Iconimage_Selected = nullptr;
			this->btnLogin->IconMarginLeft = 0;
			this->btnLogin->IconMarginRight = 0;
			this->btnLogin->IconRightVisible = true;
			this->btnLogin->IconRightZoom = 0;
			this->btnLogin->IconVisible = true;
			this->btnLogin->IconZoom = 90;
			this->btnLogin->IsTab = false;
			this->btnLogin->Location = System::Drawing::Point(40, 287);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnLogin->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnLogin->OnHoverTextColor = System::Drawing::Color::White;
			this->btnLogin->selected = false;
			this->btnLogin->Size = System::Drawing::Size(198, 27);
			this->btnLogin->TabIndex = 2;
			this->btnLogin->Text = L"                      Ingresar";
			this->btnLogin->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLogin->Textcolor = System::Drawing::Color::White;
			this->btnLogin->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->Click += gcnew System::EventHandler(this, &Login::btnLogin_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtPassword->ForeColor = System::Drawing::Color::Gainsboro;
			this->txtPassword->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtPassword->HintText = L"Contraseña";
			this->txtPassword->isPassword = false;
			this->txtPassword->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->txtPassword->LineIdleColor = System::Drawing::Color::Gray;
			this->txtPassword->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->txtPassword->LineThickness = 3;
			this->txtPassword->Location = System::Drawing::Point(52, 139);
			this->txtPassword->Margin = System::Windows::Forms::Padding(4);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(186, 30);
			this->txtPassword->TabIndex = 1;
			this->txtPassword->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->txtPassword->OnValueChanged += gcnew System::EventHandler(this, &Login::txtPassword_OnValueChanged);
			this->txtPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::txtPassword_KeyDown);
			this->txtPassword->Leave += gcnew System::EventHandler(this, &Login::txtPassword_Leave);
			// 
			// txtUserName
			// 
			this->txtUserName->AccessibleName = L"";
			this->txtUserName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->txtUserName->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtUserName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtUserName->ForeColor = System::Drawing::Color::Gainsboro;
			this->txtUserName->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtUserName->HintText = L"Usuario";
			this->txtUserName->isPassword = false;
			this->txtUserName->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->txtUserName->LineIdleColor = System::Drawing::Color::Gray;
			this->txtUserName->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->txtUserName->LineThickness = 3;
			this->txtUserName->Location = System::Drawing::Point(52, 91);
			this->txtUserName->Margin = System::Windows::Forms::Padding(4);
			this->txtUserName->Name = L"txtUserName";
			this->txtUserName->Size = System::Drawing::Size(186, 30);
			this->txtUserName->TabIndex = 0;
			this->txtUserName->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->txtUserName->Enter += gcnew System::EventHandler(this, &Login::txtUserName_Enter);
			this->txtUserName->Leave += gcnew System::EventHandler(this, &Login::txtUserName_Leave);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(26, 163);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(131, 105);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panelRegister
			// 
			this->panelRegister->Controls->Add(this->chckCatM);
			this->panelRegister->Controls->Add(this->txtCodeAccess);
			this->panelRegister->Controls->Add(this->txtCategorychck);
			this->panelRegister->Controls->Add(this->chckCatR);
			this->panelRegister->Controls->Add(this->chckCatC);
			this->panelRegister->Controls->Add(this->chckGenF);
			this->panelRegister->Controls->Add(this->chckGenM);
			this->panelRegister->Controls->Add(this->txtGenderchk);
			this->panelRegister->Controls->Add(this->btnExitchk);
			this->panelRegister->Controls->Add(this->txtPasswordchck);
			this->panelRegister->Controls->Add(this->checkBox1);
			this->panelRegister->Controls->Add(this->txtEmailchck);
			this->panelRegister->Controls->Add(this->txtAddresschck);
			this->panelRegister->Controls->Add(this->txtPhoneNumberchck);
			this->panelRegister->Controls->Add(this->txtDnichck);
			this->panelRegister->Controls->Add(this->txtLastNamechck);
			this->panelRegister->Controls->Add(this->txtFirstNamechck);
			this->panelRegister->Controls->Add(this->btnRegister);
			this->panelRegister->Controls->Add(this->txtUserchck);
			this->panelRegister->Location = System::Drawing::Point(258, 12);
			this->panelRegister->Name = L"panelRegister";
			this->panelRegister->Size = System::Drawing::Size(299, 467);
			this->panelRegister->TabIndex = 2;
			this->panelRegister->Visible = false;
			// 
			// chckCatM
			// 
			this->chckCatM->AutoSize = true;
			this->chckCatM->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->chckCatM->Location = System::Drawing::Point(191, 117);
			this->chckCatM->Name = L"chckCatM";
			this->chckCatM->Size = System::Drawing::Size(68, 17);
			this->chckCatM->TabIndex = 20;
			this->chckCatM->Text = L"Manager";
			this->chckCatM->UseVisualStyleBackColor = true;
			this->chckCatM->CheckedChanged += gcnew System::EventHandler(this, &Login::chckCatM_CheckedChanged);
			// 
			// txtCodeAccess
			// 
			this->txtCodeAccess->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtCodeAccess->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtCodeAccess->ForeColor = System::Drawing::Color::Gainsboro;
			this->txtCodeAccess->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtCodeAccess->HintText = L"Cod. Acceso";
			this->txtCodeAccess->isPassword = false;
			this->txtCodeAccess->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->txtCodeAccess->LineIdleColor = System::Drawing::Color::Gray;
			this->txtCodeAccess->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->txtCodeAccess->LineThickness = 3;
			this->txtCodeAccess->Location = System::Drawing::Point(191, 173);
			this->txtCodeAccess->Margin = System::Windows::Forms::Padding(4);
			this->txtCodeAccess->Name = L"txtCodeAccess";
			this->txtCodeAccess->Size = System::Drawing::Size(97, 30);
			this->txtCodeAccess->TabIndex = 19;
			this->txtCodeAccess->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->txtCodeAccess->Visible = false;
			// 
			// txtCategorychck
			// 
			this->txtCategorychck->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtCategorychck->Enabled = false;
			this->txtCategorychck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtCategorychck->ForeColor = System::Drawing::Color::Gainsboro;
			this->txtCategorychck->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtCategorychck->HintText = L"Categoria";
			this->txtCategorychck->isPassword = false;
			this->txtCategorychck->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->txtCategorychck->LineIdleColor = System::Drawing::Color::Gray;
			this->txtCategorychck->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->txtCategorychck->LineThickness = 3;
			this->txtCategorychck->Location = System::Drawing::Point(191, 141);
			this->txtCategorychck->Margin = System::Windows::Forms::Padding(4);
			this->txtCategorychck->Name = L"txtCategorychck";
			this->txtCategorychck->Size = System::Drawing::Size(97, 30);
			this->txtCategorychck->TabIndex = 18;
			this->txtCategorychck->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// chckCatR
			// 
			this->chckCatR->AutoSize = true;
			this->chckCatR->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->chckCatR->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->chckCatR->Location = System::Drawing::Point(191, 94);
			this->chckCatR->Name = L"chckCatR";
			this->chckCatR->Size = System::Drawing::Size(75, 17);
			this->chckCatR->TabIndex = 17;
			this->chckCatR->Text = L"Repartidor";
			this->chckCatR->UseVisualStyleBackColor = false;
			this->chckCatR->CheckedChanged += gcnew System::EventHandler(this, &Login::checkBox4_CheckedChanged);
			// 
			// chckCatC
			// 
			this->chckCatC->AutoSize = true;
			this->chckCatC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->chckCatC->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->chckCatC->Location = System::Drawing::Point(191, 71);
			this->chckCatC->Name = L"chckCatC";
			this->chckCatC->Size = System::Drawing::Size(58, 17);
			this->chckCatC->TabIndex = 16;
			this->chckCatC->Text = L"Cliente";
			this->chckCatC->UseVisualStyleBackColor = false;
			this->chckCatC->CheckedChanged += gcnew System::EventHandler(this, &Login::checkBox3_CheckedChanged);
			// 
			// chckGenF
			// 
			this->chckGenF->AutoSize = true;
			this->chckGenF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->chckGenF->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->chckGenF->Location = System::Drawing::Point(110, 305);
			this->chckGenF->Name = L"chckGenF";
			this->chckGenF->Size = System::Drawing::Size(32, 17);
			this->chckGenF->TabIndex = 15;
			this->chckGenF->Text = L"F";
			this->chckGenF->UseVisualStyleBackColor = false;
			this->chckGenF->CheckedChanged += gcnew System::EventHandler(this, &Login::chckGenF_CheckedChanged);
			// 
			// chckGenM
			// 
			this->chckGenM->AutoSize = true;
			this->chckGenM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->chckGenM->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->chckGenM->Location = System::Drawing::Point(69, 305);
			this->chckGenM->Name = L"chckGenM";
			this->chckGenM->Size = System::Drawing::Size(35, 17);
			this->chckGenM->TabIndex = 14;
			this->chckGenM->Text = L"M";
			this->chckGenM->UseVisualStyleBackColor = false;
			this->chckGenM->CheckedChanged += gcnew System::EventHandler(this, &Login::chckGenM_CheckedChanged);
			// 
			// txtGenderchk
			// 
			this->txtGenderchk->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtGenderchk->Enabled = false;
			this->txtGenderchk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtGenderchk->ForeColor = System::Drawing::Color::Gainsboro;
			this->txtGenderchk->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtGenderchk->HintText = L"Género";
			this->txtGenderchk->isPassword = false;
			this->txtGenderchk->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->txtGenderchk->LineIdleColor = System::Drawing::Color::Gray;
			this->txtGenderchk->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->txtGenderchk->LineThickness = 3;
			this->txtGenderchk->Location = System::Drawing::Point(4, 291);
			this->txtGenderchk->Margin = System::Windows::Forms::Padding(4);
			this->txtGenderchk->Name = L"txtGenderchk";
			this->txtGenderchk->Size = System::Drawing::Size(55, 30);
			this->txtGenderchk->TabIndex = 13;
			this->txtGenderchk->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// btnExitchk
			// 
			this->btnExitchk->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitchk.Image")));
			this->btnExitchk->Location = System::Drawing::Point(244, 10);
			this->btnExitchk->Name = L"btnExitchk";
			this->btnExitchk->Size = System::Drawing::Size(22, 24);
			this->btnExitchk->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btnExitchk->TabIndex = 12;
			this->btnExitchk->TabStop = false;
			this->btnExitchk->Click += gcnew System::EventHandler(this, &Login::btnExitchk_Click);
			// 
			// txtPasswordchck
			// 
			this->txtPasswordchck->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtPasswordchck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtPasswordchck->ForeColor = System::Drawing::Color::Gainsboro;
			this->txtPasswordchck->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtPasswordchck->HintText = L"Contraseña";
			this->txtPasswordchck->isPassword = false;
			this->txtPasswordchck->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->txtPasswordchck->LineIdleColor = System::Drawing::Color::Gray;
			this->txtPasswordchck->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->txtPasswordchck->LineThickness = 3;
			this->txtPasswordchck->Location = System::Drawing::Point(0, 329);
			this->txtPasswordchck->Margin = System::Windows::Forms::Padding(4);
			this->txtPasswordchck->Name = L"txtPasswordchck";
			this->txtPasswordchck->Size = System::Drawing::Size(149, 30);
			this->txtPasswordchck->TabIndex = 11;
			this->txtPasswordchck->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->txtPasswordchck->OnValueChanged += gcnew System::EventHandler(this, &Login::txtPasswordchck_OnValueChanged);
			this->txtPasswordchck->Leave += gcnew System::EventHandler(this, &Login::txtPasswordchck_Leave);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->checkBox1->ForeColor = System::Drawing::Color::Gray;
			this->checkBox1->Location = System::Drawing::Point(4, 366);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(99, 17);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"ShowPassword";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Login::checkBox1_CheckedChanged);
			// 
			// txtEmailchck
			// 
			this->txtEmailchck->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtEmailchck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtEmailchck->ForeColor = System::Drawing::Color::Gainsboro;
			this->txtEmailchck->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtEmailchck->HintText = L"E-mail";
			this->txtEmailchck->isPassword = false;
			this->txtEmailchck->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->txtEmailchck->LineIdleColor = System::Drawing::Color::Gray;
			this->txtEmailchck->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->txtEmailchck->LineThickness = 3;
			this->txtEmailchck->Location = System::Drawing::Point(4, 248);
			this->txtEmailchck->Margin = System::Windows::Forms::Padding(4);
			this->txtEmailchck->Name = L"txtEmailchck";
			this->txtEmailchck->Size = System::Drawing::Size(149, 30);
			this->txtEmailchck->TabIndex = 10;
			this->txtEmailchck->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// txtAddresschck
			// 
			this->txtAddresschck->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtAddresschck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtAddresschck->ForeColor = System::Drawing::Color::Gainsboro;
			this->txtAddresschck->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtAddresschck->HintText = L"Direccion";
			this->txtAddresschck->isPassword = false;
			this->txtAddresschck->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->txtAddresschck->LineIdleColor = System::Drawing::Color::Gray;
			this->txtAddresschck->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->txtAddresschck->LineThickness = 3;
			this->txtAddresschck->Location = System::Drawing::Point(4, 210);
			this->txtAddresschck->Margin = System::Windows::Forms::Padding(4);
			this->txtAddresschck->Name = L"txtAddresschck";
			this->txtAddresschck->Size = System::Drawing::Size(149, 30);
			this->txtAddresschck->TabIndex = 9;
			this->txtAddresschck->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// txtPhoneNumberchck
			// 
			this->txtPhoneNumberchck->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtPhoneNumberchck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtPhoneNumberchck->ForeColor = System::Drawing::Color::Gainsboro;
			this->txtPhoneNumberchck->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtPhoneNumberchck->HintText = L"Telefono";
			this->txtPhoneNumberchck->isPassword = false;
			this->txtPhoneNumberchck->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->txtPhoneNumberchck->LineIdleColor = System::Drawing::Color::Gray;
			this->txtPhoneNumberchck->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->txtPhoneNumberchck->LineThickness = 3;
			this->txtPhoneNumberchck->Location = System::Drawing::Point(4, 172);
			this->txtPhoneNumberchck->Margin = System::Windows::Forms::Padding(4);
			this->txtPhoneNumberchck->Name = L"txtPhoneNumberchck";
			this->txtPhoneNumberchck->Size = System::Drawing::Size(149, 30);
			this->txtPhoneNumberchck->TabIndex = 8;
			this->txtPhoneNumberchck->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// txtDnichck
			// 
			this->txtDnichck->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtDnichck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtDnichck->ForeColor = System::Drawing::Color::Gainsboro;
			this->txtDnichck->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtDnichck->HintText = L"DNI";
			this->txtDnichck->isPassword = false;
			this->txtDnichck->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->txtDnichck->LineIdleColor = System::Drawing::Color::Gray;
			this->txtDnichck->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->txtDnichck->LineThickness = 3;
			this->txtDnichck->Location = System::Drawing::Point(4, 128);
			this->txtDnichck->Margin = System::Windows::Forms::Padding(4);
			this->txtDnichck->Name = L"txtDnichck";
			this->txtDnichck->Size = System::Drawing::Size(149, 30);
			this->txtDnichck->TabIndex = 7;
			this->txtDnichck->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// txtLastNamechck
			// 
			this->txtLastNamechck->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtLastNamechck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtLastNamechck->ForeColor = System::Drawing::Color::Gainsboro;
			this->txtLastNamechck->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtLastNamechck->HintText = L"Apellido";
			this->txtLastNamechck->isPassword = false;
			this->txtLastNamechck->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->txtLastNamechck->LineIdleColor = System::Drawing::Color::Gray;
			this->txtLastNamechck->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->txtLastNamechck->LineThickness = 3;
			this->txtLastNamechck->Location = System::Drawing::Point(4, 90);
			this->txtLastNamechck->Margin = System::Windows::Forms::Padding(4);
			this->txtLastNamechck->Name = L"txtLastNamechck";
			this->txtLastNamechck->Size = System::Drawing::Size(149, 30);
			this->txtLastNamechck->TabIndex = 6;
			this->txtLastNamechck->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// txtFirstNamechck
			// 
			this->txtFirstNamechck->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtFirstNamechck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtFirstNamechck->ForeColor = System::Drawing::Color::Gainsboro;
			this->txtFirstNamechck->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtFirstNamechck->HintText = L"Nombre";
			this->txtFirstNamechck->isPassword = false;
			this->txtFirstNamechck->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->txtFirstNamechck->LineIdleColor = System::Drawing::Color::Gray;
			this->txtFirstNamechck->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->txtFirstNamechck->LineThickness = 3;
			this->txtFirstNamechck->Location = System::Drawing::Point(4, 52);
			this->txtFirstNamechck->Margin = System::Windows::Forms::Padding(4);
			this->txtFirstNamechck->Name = L"txtFirstNamechck";
			this->txtFirstNamechck->Size = System::Drawing::Size(149, 30);
			this->txtFirstNamechck->TabIndex = 5;
			this->txtFirstNamechck->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// btnRegister
			// 
			this->btnRegister->Activecolor = System::Drawing::Color::Yellow;
			this->btnRegister->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnRegister->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnRegister->BorderRadius = 3;
			this->btnRegister->ButtonText = L"                        Registrarse";
			this->btnRegister->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRegister->DisabledColor = System::Drawing::Color::Gray;
			this->btnRegister->Iconcolor = System::Drawing::Color::Black;
			this->btnRegister->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRegister.Iconimage")));
			this->btnRegister->Iconimage_right = nullptr;
			this->btnRegister->Iconimage_right_Selected = nullptr;
			this->btnRegister->Iconimage_Selected = nullptr;
			this->btnRegister->IconMarginLeft = 0;
			this->btnRegister->IconMarginRight = 0;
			this->btnRegister->IconRightVisible = true;
			this->btnRegister->IconRightZoom = 0;
			this->btnRegister->IconVisible = true;
			this->btnRegister->IconZoom = 90;
			this->btnRegister->IsTab = false;
			this->btnRegister->Location = System::Drawing::Point(37, 407);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnRegister->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnRegister->OnHoverTextColor = System::Drawing::Color::White;
			this->btnRegister->selected = false;
			this->btnRegister->Size = System::Drawing::Size(198, 27);
			this->btnRegister->TabIndex = 2;
			this->btnRegister->Text = L"                        Registrarse";
			this->btnRegister->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnRegister->Textcolor = System::Drawing::Color::White;
			this->btnRegister->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegister->Click += gcnew System::EventHandler(this, &Login::btnRegister_Click);
			// 
			// txtUserchck
			// 
			this->txtUserchck->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtUserchck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtUserchck->ForeColor = System::Drawing::Color::Gainsboro;
			this->txtUserchck->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtUserchck->HintText = L"Usuario";
			this->txtUserchck->isPassword = false;
			this->txtUserchck->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->txtUserchck->LineIdleColor = System::Drawing::Color::Gray;
			this->txtUserchck->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->txtUserchck->LineThickness = 3;
			this->txtUserchck->Location = System::Drawing::Point(4, 14);
			this->txtUserchck->Margin = System::Windows::Forms::Padding(4);
			this->txtUserchck->Name = L"txtUserchck";
			this->txtUserchck->Size = System::Drawing::Size(149, 30);
			this->txtUserchck->TabIndex = 0;
			this->txtUserchck->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->ClientSize = System::Drawing::Size(618, 498);
			this->Controls->Add(this->panelLogin);
			this->Controls->Add(this->panelRegister);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->panel1->ResumeLayout(false);
			this->panelLogin->ResumeLayout(false);
			this->panelLogin->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelRegister->ResumeLayout(false);
			this->panelRegister->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitchk))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion



private: System::Void linkCreateAccount_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	panelRegister->Visible = true;
	panelLogin->Visible = false;

}
private: System::Void btnExitchk_Click(System::Object^ sender, System::EventArgs^ e) {
	panelRegister->Visible = false;
	panelLogin->Visible = true;
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	Windows::Forms::Application::Exit();
}
	   ///REGISTRAAAAAAAAAAAAAAARSEE
	private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {

		User^ u = gcnew User();
		Customer^ c = gcnew Customer();
		DeliveryMan^ dm = gcnew DeliveryMan();
		Manager^ m = gcnew Manager();

		String^ username = txtUserchck->Text;
		String^ firstname = txtFirstNamechck->Text;
		String^ lastname = txtLastNamechck->Text;
		String^ documentnumber = txtDnichck->Text;
		String^ phonenumber = txtPhoneNumberchck->Text;
		String^ address = txtAddresschck->Text;
		String^ email = txtEmailchck->Text;
		String^ password = txtPasswordchck->Text;
		char gender = Char::Parse(txtGenderchk->Text);
		String^ category = txtCategorychck->Text;


		try {
			if (txtUserchck->Text->Trim() == "") {
				MessageBox::Show("Debe introducir un usuario");
				return;
			}
			if (txtFirstNamechck->Text->Trim() == "") {
				MessageBox::Show("Debe introducir un nombre");
				return;
			}
			if (txtLastNamechck->Text->Trim() == "") {
				MessageBox::Show("Debe introducir un apellido");
				return;
			}
			if (txtDnichck->Text->Trim() == "") {
				MessageBox::Show("Debe introducir el número de identidad");
				return;
			}
			if (txtPhoneNumberchck->Text->Trim() == "") {
				MessageBox::Show("Debe introducir un número de celular");
				return;
			}
			if (txtEmailchck->Text->Trim() == "") {
				MessageBox::Show("Debe introducir un email");
				return;
			}
			if (txtPasswordchck->Text->Trim() == "") {
				MessageBox::Show("Debe introducir una contraseña");
				return;
			}
			if (chckGenM->Checked == false && chckGenF->Checked == false) {
				MessageBox::Show("Debe seleccionar alguna casilla de género");
				return;
			}
			if (chckCatM->Checked == false && chckCatR->Checked == false && chckCatC->Checked == false) {
				MessageBox::Show("Debe seleccionar alguna casilla de categoria");
				return;
			}

			u->Username = txtUserchck->Text;
			u->FirstName = txtFirstNamechck->Text;
			u->LastName = txtLastNamechck->Text;
			u->DocumentNumber = (txtDnichck->Text);
			u->PhoneNumber = (txtPhoneNumberchck->Text);
			u->Address = txtAddresschck->Text;
			u->Email = txtEmailchck->Text;
			u->Password = txtPasswordchck->Text;
			u->Gender = Char::Parse(txtGenderchk->Text);
			u->Category = txtCategorychck->Text;
			

			if (category->CompareTo("Cliente") == 0) {
				c->Username = txtUserchck->Text;
				c->FirstName = txtFirstNamechck->Text;
				c->LastName = txtLastNamechck->Text;
				c->DocumentNumber = (txtDnichck->Text);
				c->PhoneNumber = (txtPhoneNumberchck->Text);
				c->Address = txtAddresschck->Text;
				c->Email = txtEmailchck->Text;
				c->Password = txtPasswordchck->Text;
				c->Gender = Char::Parse(txtGenderchk->Text);
				c->Category = txtCategorychck->Text;
				c->CustomerPoints = 0;

				if (UserManager::ConfirmCustomer(c)) {
					int id= UserManager::QueryLastUserId() + 1;
					u->Id = id;
					c->Id = id;
					UserManager::AddUser(u);
					UserManager::AddCustomers(c);
					panelRegister->Visible = false;
					panelLogin->Visible = true;
					ClearControls();
				}

			}
			else if (category->CompareTo("Repartidor") == 0) {
				int codeaccess = Int32::Parse(txtCodeAccess->Text);
				dm->Username = txtUserchck->Text;
				dm->FirstName = txtFirstNamechck->Text;
				dm->LastName = txtLastNamechck->Text;
				dm->DocumentNumber = (txtDnichck->Text);
				dm->PhoneNumber = (txtPhoneNumberchck->Text);
				dm->Address = txtAddresschck->Text;
				dm->Email = txtEmailchck->Text;
				dm->Password = txtPasswordchck->Text;
				dm->Gender = Char::Parse(txtGenderchk->Text);
				dm->Category = txtCategorychck->Text;
				dm->VerificationCode = codeaccess;

				if (UserManager::ConfirmDeliveryMan(dm)) {
					int id=UserManager::QueryLastUserId() + 1;
					u->Id = id;
					dm->Id = id;
					UserManager::AddUser(u);
					UserManager::AddDeliveryMan(dm);
					panelRegister->Visible = false;
					panelLogin->Visible = true;
					ClearControls();
				}
			}
			else if (category->CompareTo("Manager") == 0) {
				int codeaccess = Int32::Parse(txtCodeAccess->Text);
				m->Username = txtUserchck->Text;
				m->FirstName = txtFirstNamechck->Text;
				m->LastName = txtLastNamechck->Text;
				m->DocumentNumber = (txtDnichck->Text);
				m->PhoneNumber = (txtPhoneNumberchck->Text);
				m->Address = txtAddresschck->Text;
				m->Email = txtEmailchck->Text;
				m->Password = txtPasswordchck->Text;
				m->Gender = Char::Parse(txtGenderchk->Text);
				m->Category = txtCategorychck->Text;
				m->VerificationCode = codeaccess;

				if (UserManager::ConfirmManager(m)) {
					int id = UserManager::QueryLastUserId() + 1;
					u->Id =id;
					m->Id = id;
					UserManager::AddUser(u);
					UserManager::AddManagers(m);
					panelRegister->Visible = false;
					panelLogin->Visible = true;
					ClearControls();
				}
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "No se guardó  por error en los datos.");
			return;
		}
	}
	void ClearControls(){
	txtCodeAccess->Text="Cod. Acceso";
	txtUserchck->Text="Usuario";
	txtFirstNamechck->Text="Nombre";
	txtLastNamechck->Text = "Apellido";
	txtDnichck->Text="DNI";
	txtPhoneNumberchck->Text="Telefono";
	txtAddresschck->Text="Direccion";
	txtEmailchck->Text="E-mail";
	txtPasswordchck->Text="Contraseña";
	chckGenM->Checked = false;
	chckGenF->Checked = false;
	chckCatM->Checked = false;
	chckCatR->Checked = false;
	chckCatC->Checked = false;
}


private: System::Void txtUserName_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (txtUserName->Text == "Usuario") {
		txtUserName->Text == "";
	}
}
private: System::Void txtUserName_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (txtUserName->Text == "") {
		txtUserName->Text == "Usuario";
	}
}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox2->Checked == true) {
			txtPassword->isPassword = false;
		}
		else if (checkBox2->Checked == false) {
			txtPassword->isPassword = true;
		}
	}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true) {
		txtPasswordchck->isPassword = false;
	}
	else if (checkBox1->Checked == false) {
		txtPasswordchck->isPassword = true;
	}
}
private: System::Void chckGenF_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (chckGenF->Checked == true) {
		(txtGenderchk->Text) = "F";
		chckGenM->Enabled = false;
	}
	else {
		(txtGenderchk->Text) = "Género";
		chckGenM->Enabled = true;
	}
}
private: System::Void chckGenM_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (chckGenM->Checked == true) {
		(txtGenderchk->Text) = "M";
		chckGenF->Enabled = false;
	}
	else {
		(txtGenderchk->Text) = "Género";
		chckGenF->Enabled = true;
	}
}
private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (chckCatC->Checked == true) {
		(txtCategorychck->Text) = "Cliente";
		txtCodeAccess->Visible = false;
		chckCatR->Enabled = false;
		chckCatM->Enabled = false;
	}
	else {
		(txtCategorychck->Text) = "Categoria";
		txtCodeAccess->Visible = false;
		chckCatR->Enabled = true;
		chckCatM->Enabled = true;

	}
}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (chckCatR->Checked == true) {
		(txtCategorychck->Text) = "Repartidor";
		txtCodeAccess->Visible = true;
		chckCatC->Enabled = false;
		chckCatM->Enabled = false;
	}
	else {
		(txtCategorychck->Text) = "Categoria";
		txtCodeAccess->Visible = false;
		chckCatC->Enabled = true;
		chckCatM->Enabled = true;
	}
}
private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
	this->Show();
}
private: System::Void chckCatM_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (chckCatM->Checked == true) {
		(txtCategorychck->Text) = "Manager";
		txtCodeAccess->Visible = true;
		chckCatC->Enabled = false;
		chckCatR->Enabled = false;
	}
	else {
		(txtCategorychck->Text) = "Categoria";
		txtCodeAccess->Visible = false;
		chckCatC->Enabled = true;
		chckCatR->Enabled = true;
	}
}
private: System::Void txtPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

private: System::Void txtPassword_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (txtPassword->Text == "") {
		txtPassword->isPassword = false;
	}
}
private: System::Void txtPassword_OnValueChanged(System::Object^ sender, System::EventArgs^ e) {
	txtPassword->isPassword = true;
}

private: System::Void txtPasswordchck_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (txtPasswordchck->Text == "") {
		txtPasswordchck->isPassword = false;
	}
}

private: System::Void txtPasswordchck_OnValueChanged(System::Object^ sender, System::EventArgs^ e) {
	txtPasswordchck->isPassword = true;
}

};
}
