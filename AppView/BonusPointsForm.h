#pragma once

namespace AppView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de BonusPointsForm
	/// </summary>
	public ref class BonusPointsForm : public System::Windows::Forms::Form
	{
	public:
		BonusPointsForm(void)
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
		~BonusPointsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtPoints;
	private: System::Windows::Forms::TextBox^ txtDiscount;
	private: System::Windows::Forms::TextBox^ txtSolesQuantity;
	private: System::Windows::Forms::TextBox^ txtPointsEarned;
	private: System::Windows::Forms::DataGridView^ dgvDiscount;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Points;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Discount;
	private: System::Windows::Forms::DataGridView^ dgvPointsEarned;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ForEachQuantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PointsEarned;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtPoints = (gcnew System::Windows::Forms::TextBox());
			this->txtDiscount = (gcnew System::Windows::Forms::TextBox());
			this->txtSolesQuantity = (gcnew System::Windows::Forms::TextBox());
			this->txtPointsEarned = (gcnew System::Windows::Forms::TextBox());
			this->dgvDiscount = (gcnew System::Windows::Forms::DataGridView());
			this->dgvPointsEarned = (gcnew System::Windows::Forms::DataGridView());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->Points = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Discount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ForEachQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PointsEarned = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDiscount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPointsEarned))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(189, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"EQUIVALENCIAS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Puntos bonus (*)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Descuento (%)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(256, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Cantidad en S/.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(256, 101);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Puntos ganados";
			// 
			// txtPoints
			// 
			this->txtPoints->Location = System::Drawing::Point(123, 58);
			this->txtPoints->Name = L"txtPoints";
			this->txtPoints->Size = System::Drawing::Size(100, 20);
			this->txtPoints->TabIndex = 5;
			// 
			// txtDiscount
			// 
			this->txtDiscount->Location = System::Drawing::Point(123, 98);
			this->txtDiscount->Name = L"txtDiscount";
			this->txtDiscount->Size = System::Drawing::Size(100, 20);
			this->txtDiscount->TabIndex = 6;
			// 
			// txtSolesQuantity
			// 
			this->txtSolesQuantity->Location = System::Drawing::Point(355, 58);
			this->txtSolesQuantity->Name = L"txtSolesQuantity";
			this->txtSolesQuantity->Size = System::Drawing::Size(100, 20);
			this->txtSolesQuantity->TabIndex = 7;
			// 
			// txtPointsEarned
			// 
			this->txtPointsEarned->Location = System::Drawing::Point(355, 98);
			this->txtPointsEarned->Name = L"txtPointsEarned";
			this->txtPointsEarned->Size = System::Drawing::Size(100, 20);
			this->txtPointsEarned->TabIndex = 8;
			// 
			// dgvDiscount
			// 
			this->dgvDiscount->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDiscount->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Points, this->Discount });
			this->dgvDiscount->Location = System::Drawing::Point(35, 192);
			this->dgvDiscount->Name = L"dgvDiscount";
			this->dgvDiscount->Size = System::Drawing::Size(188, 150);
			this->dgvDiscount->TabIndex = 9;
			// 
			// dgvPointsEarned
			// 
			this->dgvPointsEarned->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPointsEarned->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->ForEachQuantity,
					this->PointsEarned
			});
			this->dgvPointsEarned->Location = System::Drawing::Point(267, 192);
			this->dgvPointsEarned->Name = L"dgvPointsEarned";
			this->dgvPointsEarned->Size = System::Drawing::Size(188, 150);
			this->dgvPointsEarned->TabIndex = 10;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(94, 148);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 11;
			this->btnAdd->Text = L"&Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(206, 148);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 12;
			this->btnUpdate->Text = L"&Actualizar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(321, 148);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 13;
			this->btnDelete->Text = L"&Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
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
			// BonusPointsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 370);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dgvPointsEarned);
			this->Controls->Add(this->dgvDiscount);
			this->Controls->Add(this->txtPointsEarned);
			this->Controls->Add(this->txtSolesQuantity);
			this->Controls->Add(this->txtDiscount);
			this->Controls->Add(this->txtPoints);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"BonusPointsForm";
			this->Text = L"BonusPointsForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDiscount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPointsEarned))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
