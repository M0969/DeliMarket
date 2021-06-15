#pragma once
#define MODEID 1
#define MODEDISCOUNT 2
#define MODEPOINTSEARNED 3
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
	/// Resumen de BonusPointsCustomerForm
	/// </summary>
	public ref class BonusPointsCustomerForm : public System::Windows::Forms::Form
	{
	public:
		BonusPointsCustomerForm(void)
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
		~BonusPointsCustomerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvDiscountCustomer;
	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Points;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Discount;
	private: System::Windows::Forms::DataGridView^ dgvPointsEarnedCustomer;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ForEachQuantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PointsEarned;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

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
			this->dgvDiscountCustomer = (gcnew System::Windows::Forms::DataGridView());
			this->Points = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Discount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvPointsEarnedCustomer = (gcnew System::Windows::Forms::DataGridView());
			this->ForEachQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PointsEarned = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDiscountCustomer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPointsEarnedCustomer))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvDiscountCustomer
			// 
			this->dgvDiscountCustomer->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDiscountCustomer->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Points,
					this->Discount
			});
			this->dgvDiscountCustomer->Location = System::Drawing::Point(29, 131);
			this->dgvDiscountCustomer->Name = L"dgvDiscountCustomer";
			this->dgvDiscountCustomer->Size = System::Drawing::Size(188, 150);
			this->dgvDiscountCustomer->TabIndex = 10;
			// 
			// Points
			// 
			this->Points->HeaderText = L"Puntos Bonus";
			this->Points->Name = L"Points";
			this->Points->Width = 70;
			// 
			// Discount
			// 
			this->Discount->HeaderText = L"Descuento (%)";
			this->Discount->Name = L"Discount";
			// 
			// dgvPointsEarnedCustomer
			// 
			this->dgvPointsEarnedCustomer->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPointsEarnedCustomer->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->ForEachQuantity,
					this->PointsEarned
			});
			this->dgvPointsEarnedCustomer->Location = System::Drawing::Point(260, 131);
			this->dgvPointsEarnedCustomer->Name = L"dgvPointsEarnedCustomer";
			this->dgvPointsEarnedCustomer->Size = System::Drawing::Size(188, 150);
			this->dgvPointsEarnedCustomer->TabIndex = 11;
			// 
			// ForEachQuantity
			// 
			this->ForEachQuantity->HeaderText = L"Cada S/.";
			this->ForEachQuantity->Name = L"ForEachQuantity";
			this->ForEachQuantity->Width = 70;
			// 
			// PointsEarned
			// 
			this->PointsEarned->HeaderText = L"Puntos Ganados";
			this->PointsEarned->Name = L"PointsEarned";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(191, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"EQUIVALENCIAS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(298, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Estimado cliente, le presentamos las siguientes equivalencias:";
			// 
			// BonusPointsCustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(478, 331);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvPointsEarnedCustomer);
			this->Controls->Add(this->dgvDiscountCustomer);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"BonusPointsCustomerForm";
			this->Text = L"BonusPointsCustomerForm";
			this->Load += gcnew System::EventHandler(this, &BonusPointsCustomerForm::BonusPointsCustomerForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDiscountCustomer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPointsEarnedCustomer))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void BonusPointsCustomerForm_Load(System::Object^ sender, System::EventArgs^ e) {
			RefreshDGVBonusPoints();
		}
		public:
			void RefreshDGVBonusPoints() {
				RefreshDGVDiscount();
				RefreshDGVPointsEarned();
			}
			void RefreshDGVDiscount() {
				List<BonusPoints^>^ bonuspointsList = AppManager::QueryAllBonusPointsPQ();
				dgvDiscountCustomer->Rows->Clear();
				for (int i = 0; i < bonuspointsList->Count; i++) {
					dgvDiscountCustomer->Rows->Add(gcnew array<String^> {
						"" + bonuspointsList[i]->PointsQuantity, //casteando
							"" + bonuspointsList[i]->PercentageDiscount,
					});
				}
			}
			void RefreshDGVPointsEarned() {
				List<BonusPoints^>^ solesquantityList = AppManager::QueryAllBonusPointsSQ();
				dgvPointsEarnedCustomer->Rows->Clear();
				for (int i = 0; i < solesquantityList->Count; i++) {
					dgvPointsEarnedCustomer->Rows->Add(gcnew array<String^> {
						"" + solesquantityList[i]->SolesQuantity, //es double entonces se castea / se le agrega "" para que se convierta en String
							"" + solesquantityList[i]->PointsEarned,

					});
				}
			}

	};
}
