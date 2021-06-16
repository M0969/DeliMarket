#pragma once

namespace AppView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de DeliverymanRatingForm
	/// </summary>
	public ref class DeliverymanRatingForm : public System::Windows::Forms::Form
	{
	public:
		DeliverymanRatingForm(void)
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
		~DeliverymanRatingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pbFiveStars;
	protected:

	private: System::Windows::Forms::PictureBox^ pbFourStars;

	private: System::Windows::Forms::PictureBox^ pbThreeStars;
	private: System::Windows::Forms::PictureBox^ pbTwoStars;



	private: System::Windows::Forms::PictureBox^ pbOneStar;

	private: System::Windows::Forms::PictureBox^ pbZeroStars;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtDeliverymanName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtDeliverymanRating;

	private: System::Windows::Forms::Button^ btnFinalize;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DeliverymanRatingForm::typeid));
			this->pbFiveStars = (gcnew System::Windows::Forms::PictureBox());
			this->pbFourStars = (gcnew System::Windows::Forms::PictureBox());
			this->pbThreeStars = (gcnew System::Windows::Forms::PictureBox());
			this->pbTwoStars = (gcnew System::Windows::Forms::PictureBox());
			this->pbOneStar = (gcnew System::Windows::Forms::PictureBox());
			this->pbZeroStars = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtDeliverymanName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtDeliverymanRating = (gcnew System::Windows::Forms::TextBox());
			this->btnFinalize = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFiveStars))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFourStars))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbThreeStars))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTwoStars))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbOneStar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZeroStars))->BeginInit();
			this->SuspendLayout();
			// 
			// pbFiveStars
			// 
			this->pbFiveStars->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbFiveStars.Image")));
			this->pbFiveStars->Location = System::Drawing::Point(85, 116);
			this->pbFiveStars->Name = L"pbFiveStars";
			this->pbFiveStars->Size = System::Drawing::Size(297, 70);
			this->pbFiveStars->TabIndex = 0;
			this->pbFiveStars->TabStop = false;
			// 
			// pbFourStars
			// 
			this->pbFourStars->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbFourStars.Image")));
			this->pbFourStars->Location = System::Drawing::Point(85, 116);
			this->pbFourStars->Name = L"pbFourStars";
			this->pbFourStars->Size = System::Drawing::Size(297, 70);
			this->pbFourStars->TabIndex = 1;
			this->pbFourStars->TabStop = false;
			// 
			// pbThreeStars
			// 
			this->pbThreeStars->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbThreeStars.Image")));
			this->pbThreeStars->Location = System::Drawing::Point(85, 116);
			this->pbThreeStars->Name = L"pbThreeStars";
			this->pbThreeStars->Size = System::Drawing::Size(297, 70);
			this->pbThreeStars->TabIndex = 2;
			this->pbThreeStars->TabStop = false;
			// 
			// pbTwoStars
			// 
			this->pbTwoStars->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbTwoStars.Image")));
			this->pbTwoStars->Location = System::Drawing::Point(85, 116);
			this->pbTwoStars->Name = L"pbTwoStars";
			this->pbTwoStars->Size = System::Drawing::Size(297, 70);
			this->pbTwoStars->TabIndex = 3;
			this->pbTwoStars->TabStop = false;
			// 
			// pbOneStar
			// 
			this->pbOneStar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbOneStar.Image")));
			this->pbOneStar->Location = System::Drawing::Point(85, 116);
			this->pbOneStar->Name = L"pbOneStar";
			this->pbOneStar->Size = System::Drawing::Size(297, 70);
			this->pbOneStar->TabIndex = 4;
			this->pbOneStar->TabStop = false;
			// 
			// pbZeroStars
			// 
			this->pbZeroStars->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbZeroStars.Image")));
			this->pbZeroStars->Location = System::Drawing::Point(85, 116);
			this->pbZeroStars->Name = L"pbZeroStars";
			this->pbZeroStars->Size = System::Drawing::Size(297, 70);
			this->pbZeroStars->TabIndex = 5;
			this->pbZeroStars->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poor Richard", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(81, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(275, 22);
			this->label1->TabIndex = 6;
			this->label1->Text = L"CALIFICACIÓN AL REPARTIDOR";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Nombre del repartidor";
			// 
			// txtDeliverymanName
			// 
			this->txtDeliverymanName->Location = System::Drawing::Point(140, 60);
			this->txtDeliverymanName->Name = L"txtDeliverymanName";
			this->txtDeliverymanName->Size = System::Drawing::Size(242, 20);
			this->txtDeliverymanName->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Puntuación:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 201);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(200, 91);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Estimado cliente, califíquenos del 1 al 5: \r\nDonde \r\n(1) Totalmente insatisfecho\r"
				L"\n(2) Insatisfecho\r\n(3) Neutral\r\n(4) Satisfecho\r\n(5) Totalmente satisfecho";
			// 
			// txtDeliverymanRating
			// 
			this->txtDeliverymanRating->Location = System::Drawing::Point(282, 198);
			this->txtDeliverymanRating->Name = L"txtDeliverymanRating";
			this->txtDeliverymanRating->Size = System::Drawing::Size(100, 20);
			this->txtDeliverymanRating->TabIndex = 10;
			// 
			// btnFinalize
			// 
			this->btnFinalize->Location = System::Drawing::Point(307, 256);
			this->btnFinalize->Name = L"btnFinalize";
			this->btnFinalize->Size = System::Drawing::Size(75, 23);
			this->btnFinalize->TabIndex = 11;
			this->btnFinalize->Text = L"Finalizar";
			this->btnFinalize->UseVisualStyleBackColor = true;
			// 
			// DeliverymanRatingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(441, 308);
			this->Controls->Add(this->btnFinalize);
			this->Controls->Add(this->txtDeliverymanRating);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtDeliverymanName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pbZeroStars);
			this->Controls->Add(this->pbOneStar);
			this->Controls->Add(this->pbTwoStars);
			this->Controls->Add(this->pbThreeStars);
			this->Controls->Add(this->pbFourStars);
			this->Controls->Add(this->pbFiveStars);
			this->Name = L"DeliverymanRatingForm";
			this->Text = L"DeliverymanRatingForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFiveStars))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFourStars))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbThreeStars))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTwoStars))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbOneStar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZeroStars))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	};
}
