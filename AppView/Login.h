#pragma once

namespace AppView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panelLogin;
	protected:

	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ txtPassword;

	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ txtUserName;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelLogin = (gcnew System::Windows::Forms::Panel());
			this->panelRegister = (gcnew System::Windows::Forms::Panel());
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
			this->linkCreateAccount = (gcnew System::Windows::Forms::LinkLabel());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->btnLogin = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->txtPassword = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->txtUserName = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelLogin->SuspendLayout();
			this->panelRegister->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitchk))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 16);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(251, 461);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 100);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(213, 198);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panelLogin
			// 
			this->panelLogin->Controls->Add(this->linkCreateAccount);
			this->panelLogin->Controls->Add(this->checkBox2);
			this->panelLogin->Controls->Add(this->btnLogin);
			this->panelLogin->Controls->Add(this->txtPassword);
			this->panelLogin->Controls->Add(this->txtUserName);
			this->panelLogin->Location = System::Drawing::Point(269, 16);
			this->panelLogin->Name = L"panelLogin";
			this->panelLogin->Size = System::Drawing::Size(291, 467);
			this->panelLogin->TabIndex = 1;
			// 
			// panelRegister
			// 
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
			this->panelRegister->Location = System::Drawing::Point(580, 16);
			this->panelRegister->Name = L"panelRegister";
			this->panelRegister->Size = System::Drawing::Size(288, 467);
			this->panelRegister->TabIndex = 2;
			this->panelRegister->Visible = false;
			// 
			// btnExitchk
			// 
			this->btnExitchk->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitchk.Image")));
			this->btnExitchk->Location = System::Drawing::Point(263, 0);
			this->btnExitchk->Name = L"btnExitchk";
			this->btnExitchk->Size = System::Drawing::Size(22, 24);
			this->btnExitchk->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btnExitchk->TabIndex = 12;
			this->btnExitchk->TabStop = false;
			// 
			// txtPasswordchck
			// 
			this->txtPasswordchck->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtPasswordchck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtPasswordchck->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtPasswordchck->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtPasswordchck->HintText = L"";
			this->txtPasswordchck->isPassword = false;
			this->txtPasswordchck->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->txtPasswordchck->LineIdleColor = System::Drawing::Color::Gray;
			this->txtPasswordchck->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->txtPasswordchck->LineThickness = 3;
			this->txtPasswordchck->Location = System::Drawing::Point(4, 312);
			this->txtPasswordchck->Margin = System::Windows::Forms::Padding(4);
			this->txtPasswordchck->Name = L"txtPasswordchck";
			this->txtPasswordchck->Size = System::Drawing::Size(149, 30);
			this->txtPasswordchck->TabIndex = 11;
			this->txtPasswordchck->Text = L"Contraseña";
			this->txtPasswordchck->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->ForeColor = System::Drawing::Color::Gray;
			this->checkBox1->Location = System::Drawing::Point(4, 349);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(99, 17);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"ShowPassword";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// txtEmailchck
			// 
			this->txtEmailchck->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtEmailchck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtEmailchck->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtEmailchck->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtEmailchck->HintText = L"";
			this->txtEmailchck->isPassword = false;
			this->txtEmailchck->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->txtEmailchck->LineIdleColor = System::Drawing::Color::Gray;
			this->txtEmailchck->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->txtEmailchck->LineThickness = 3;
			this->txtEmailchck->Location = System::Drawing::Point(4, 265);
			this->txtEmailchck->Margin = System::Windows::Forms::Padding(4);
			this->txtEmailchck->Name = L"txtEmailchck";
			this->txtEmailchck->Size = System::Drawing::Size(149, 30);
			this->txtEmailchck->TabIndex = 10;
			this->txtEmailchck->Text = L"E-mail";
			this->txtEmailchck->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// txtAddresschck
			// 
			this->txtAddresschck->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtAddresschck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtAddresschck->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtAddresschck->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtAddresschck->HintText = L"";
			this->txtAddresschck->isPassword = false;
			this->txtAddresschck->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->txtAddresschck->LineIdleColor = System::Drawing::Color::Gray;
			this->txtAddresschck->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->txtAddresschck->LineThickness = 3;
			this->txtAddresschck->Location = System::Drawing::Point(4, 227);
			this->txtAddresschck->Margin = System::Windows::Forms::Padding(4);
			this->txtAddresschck->Name = L"txtAddresschck";
			this->txtAddresschck->Size = System::Drawing::Size(149, 30);
			this->txtAddresschck->TabIndex = 9;
			this->txtAddresschck->Text = L"Direccion";
			this->txtAddresschck->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// txtPhoneNumberchck
			// 
			this->txtPhoneNumberchck->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtPhoneNumberchck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtPhoneNumberchck->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtPhoneNumberchck->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtPhoneNumberchck->HintText = L"";
			this->txtPhoneNumberchck->isPassword = false;
			this->txtPhoneNumberchck->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->txtPhoneNumberchck->LineIdleColor = System::Drawing::Color::Gray;
			this->txtPhoneNumberchck->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->txtPhoneNumberchck->LineThickness = 3;
			this->txtPhoneNumberchck->Location = System::Drawing::Point(4, 189);
			this->txtPhoneNumberchck->Margin = System::Windows::Forms::Padding(4);
			this->txtPhoneNumberchck->Name = L"txtPhoneNumberchck";
			this->txtPhoneNumberchck->Size = System::Drawing::Size(149, 30);
			this->txtPhoneNumberchck->TabIndex = 8;
			this->txtPhoneNumberchck->Text = L"Telefono";
			this->txtPhoneNumberchck->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// txtDnichck
			// 
			this->txtDnichck->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtDnichck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtDnichck->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtDnichck->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtDnichck->HintText = L"";
			this->txtDnichck->isPassword = false;
			this->txtDnichck->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->txtDnichck->LineIdleColor = System::Drawing::Color::Gray;
			this->txtDnichck->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->txtDnichck->LineThickness = 3;
			this->txtDnichck->Location = System::Drawing::Point(4, 145);
			this->txtDnichck->Margin = System::Windows::Forms::Padding(4);
			this->txtDnichck->Name = L"txtDnichck";
			this->txtDnichck->Size = System::Drawing::Size(149, 30);
			this->txtDnichck->TabIndex = 7;
			this->txtDnichck->Text = L"DNI";
			this->txtDnichck->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// txtLastNamechck
			// 
			this->txtLastNamechck->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtLastNamechck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtLastNamechck->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtLastNamechck->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtLastNamechck->HintText = L"";
			this->txtLastNamechck->isPassword = false;
			this->txtLastNamechck->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->txtLastNamechck->LineIdleColor = System::Drawing::Color::Gray;
			this->txtLastNamechck->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->txtLastNamechck->LineThickness = 3;
			this->txtLastNamechck->Location = System::Drawing::Point(4, 107);
			this->txtLastNamechck->Margin = System::Windows::Forms::Padding(4);
			this->txtLastNamechck->Name = L"txtLastNamechck";
			this->txtLastNamechck->Size = System::Drawing::Size(149, 30);
			this->txtLastNamechck->TabIndex = 6;
			this->txtLastNamechck->Text = L"Apellido";
			this->txtLastNamechck->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// txtFirstNamechck
			// 
			this->txtFirstNamechck->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtFirstNamechck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtFirstNamechck->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtFirstNamechck->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtFirstNamechck->HintText = L"";
			this->txtFirstNamechck->isPassword = false;
			this->txtFirstNamechck->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->txtFirstNamechck->LineIdleColor = System::Drawing::Color::Gray;
			this->txtFirstNamechck->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->txtFirstNamechck->LineThickness = 3;
			this->txtFirstNamechck->Location = System::Drawing::Point(4, 69);
			this->txtFirstNamechck->Margin = System::Windows::Forms::Padding(4);
			this->txtFirstNamechck->Name = L"txtFirstNamechck";
			this->txtFirstNamechck->Size = System::Drawing::Size(149, 30);
			this->txtFirstNamechck->TabIndex = 5;
			this->txtFirstNamechck->Text = L"Nombre";
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
			// 
			// txtUserchck
			// 
			this->txtUserchck->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtUserchck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtUserchck->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtUserchck->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtUserchck->HintText = L"";
			this->txtUserchck->isPassword = false;
			this->txtUserchck->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->txtUserchck->LineIdleColor = System::Drawing::Color::Gray;
			this->txtUserchck->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->txtUserchck->LineThickness = 3;
			this->txtUserchck->Location = System::Drawing::Point(4, 27);
			this->txtUserchck->Margin = System::Windows::Forms::Padding(4);
			this->txtUserchck->Name = L"txtUserchck";
			this->txtUserchck->Size = System::Drawing::Size(149, 30);
			this->txtUserchck->TabIndex = 0;
			this->txtUserchck->Text = L"Usuario";
			this->txtUserchck->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
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
			this->checkBox2->ForeColor = System::Drawing::Color::Gray;
			this->checkBox2->Location = System::Drawing::Point(52, 186);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(99, 17);
			this->checkBox2->TabIndex = 4;
			this->checkBox2->Text = L"ShowPassword";
			this->checkBox2->UseVisualStyleBackColor = true;
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
			// 
			// txtPassword
			// 
			this->txtPassword->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtPassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtPassword->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtPassword->HintText = L"";
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
			this->txtPassword->Text = L"Contraseña";
			this->txtPassword->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// txtUserName
			// 
			this->txtUserName->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtUserName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtUserName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtUserName->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtUserName->HintText = L"";
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
			this->txtUserName->Text = L"Usuario";
			this->txtUserName->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->ClientSize = System::Drawing::Size(881, 498);
			this->Controls->Add(this->panelRegister);
			this->Controls->Add(this->panelLogin);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelLogin->ResumeLayout(false);
			this->panelLogin->PerformLayout();
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
};
}
