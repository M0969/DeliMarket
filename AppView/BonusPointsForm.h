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
			this->Points = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Discount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvPointsEarned = (gcnew System::Windows::Forms::DataGridView());
			this->ForEachQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PointsEarned = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDiscount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPointsEarned))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(197, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"EQUIVALENCIAS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Puntos bonus (*)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(40, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Descuento (%)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(264, 75);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Cantidad en S/.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(264, 115);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Puntos ganados";
			// 
			// txtPoints
			// 
			this->txtPoints->Location = System::Drawing::Point(131, 72);
			this->txtPoints->Name = L"txtPoints";
			this->txtPoints->Size = System::Drawing::Size(100, 20);
			this->txtPoints->TabIndex = 5;
			// 
			// txtDiscount
			// 
			this->txtDiscount->Location = System::Drawing::Point(131, 112);
			this->txtDiscount->Name = L"txtDiscount";
			this->txtDiscount->Size = System::Drawing::Size(100, 20);
			this->txtDiscount->TabIndex = 6;
			// 
			// txtSolesQuantity
			// 
			this->txtSolesQuantity->Location = System::Drawing::Point(363, 72);
			this->txtSolesQuantity->Name = L"txtSolesQuantity";
			this->txtSolesQuantity->Size = System::Drawing::Size(100, 20);
			this->txtSolesQuantity->TabIndex = 7;
			// 
			// txtPointsEarned
			// 
			this->txtPointsEarned->Location = System::Drawing::Point(363, 112);
			this->txtPointsEarned->Name = L"txtPointsEarned";
			this->txtPointsEarned->Size = System::Drawing::Size(100, 20);
			this->txtPointsEarned->TabIndex = 8;
			// 
			// dgvDiscount
			// 
			this->dgvDiscount->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDiscount->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Points, this->Discount });
			this->dgvDiscount->Location = System::Drawing::Point(43, 206);
			this->dgvDiscount->Name = L"dgvDiscount";
			this->dgvDiscount->Size = System::Drawing::Size(188, 150);
			this->dgvDiscount->TabIndex = 9;
			this->dgvDiscount->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BonusPointsForm::dgvDiscount_CellClick);
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
			// dgvPointsEarned
			// 
			this->dgvPointsEarned->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPointsEarned->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->ForEachQuantity,
					this->PointsEarned
			});
			this->dgvPointsEarned->Location = System::Drawing::Point(275, 206);
			this->dgvPointsEarned->Name = L"dgvPointsEarned";
			this->dgvPointsEarned->Size = System::Drawing::Size(188, 150);
			this->dgvPointsEarned->TabIndex = 10;
			this->dgvPointsEarned->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BonusPointsForm::dgvPointsEarned_CellClick);
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
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(102, 162);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 11;
			this->btnAdd->Text = L"&Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &BonusPointsForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(214, 162);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 12;
			this->btnUpdate->Text = L"&Actualizar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &BonusPointsForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(329, 162);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 13;
			this->btnDelete->Text = L"&Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &BonusPointsForm::btnDelete_Click);
			// 
			// BonusPointsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(510, 409);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"BonusPointsForm";
			this->Text = L"BonusPointsForm";
			this->Load += gcnew System::EventHandler(this, &BonusPointsForm::BonusPointsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDiscount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPointsEarned))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void BonusPointsForm_Load(System::Object^ sender, System::EventArgs^ e) {
			RefreshDGVBonusPoints();
		}
		
		public:
			void RefreshDGVBonusPoints() {
				RefreshDGVDiscount();
				RefreshDGVPointsEarned();
			}
			Void RefreshDGVDiscount() {
				List<BonusPoints^>^ bonuspointsList = AppManager::QueryAllBonusPointsPQ();
				dgvDiscount->Rows->Clear();
				for (int i = 0; i < bonuspointsList->Count; i++) {
					dgvDiscount->Rows->Add(gcnew array<String^> {
						"" + bonuspointsList[i]->PointsQuantity, //casteando
							"" + bonuspointsList[i]->PercentageDiscount,
					});
				}
			}
			Void RefreshDGVPointsEarned() {
				List<BonusPoints^>^ solesquantityList = AppManager::QueryAllBonusPointsSQ();
				dgvPointsEarned->Rows->Clear();
				for (int i = 0; i < solesquantityList->Count; i++) {
					dgvPointsEarned->Rows->Add(gcnew array<String^> {
						"" + solesquantityList[i]->SolesQuantity, //es double entonces se castea / se le agrega "" para que se convierta en String
							"" + solesquantityList[i]->PointsEarned,

					});
				}
			}

		private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
			BonusPoints^ bp = gcnew BonusPoints();
			BonusPoints^ sq = gcnew BonusPoints();
			try {
				if (txtPoints->Text->Trim() == "") {
					MessageBox::Show("El cajetín de puntos no debe estar vacío.");
					return;
				}
				if (txtDiscount->Text->Trim() == "") {
					MessageBox::Show("El porcentaje de descuento no debe estar vacío.");
					return;
				}
				bp->PointsQuantity = Int32::Parse(txtPoints->Text);
				bp->PercentageDiscount = Double::Parse(txtDiscount->Text);
				sq->SolesQuantity = Int32::Parse(txtSolesQuantity->Text);
				sq->PointsEarned = Int32::Parse(txtPointsEarned->Text);

				AppManager::AddBonusPointsPQ(bp);
				AppManager::AddBonusPointsSQ(sq);
				RefreshDGVBonusPoints();
				//btnAdd->Enabled = false;
				ClearControls();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->ToString(), "Error al guardar las equilavencias por error en los datos.");
				return;
			}
		}

		private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
			int pointsQuantity = -1;
			int solesQuantity = -1;
			try {
				//|| (txtSolesQuantity->Text->Trim() == "")
				if (txtPoints->Text->Trim() == "") {
					MessageBox::Show("No se puede eliminar porque no hay ninguna equivalencia seleccionada.");
					return;
				}
				pointsQuantity = Int32::Parse(txtPoints->Text);
				solesQuantity = Int32::Parse(txtSolesQuantity->Text);
			}
			catch (...) {
				MessageBox::Show("No se puede eliminar la equivalencia de puntos porque la cantidad de puntos bonus o soles no es válida.");
				return;
			}
			if (MessageBox::Show(
				"¿Está seguro de eliminar la equivalencia?",
				"Confirmación", MessageBoxButtons::YesNo,
				MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				AppManager::DeleteBonusPointsPQ(pointsQuantity);
				AppManager::DeleteBonusPointsSQ(solesQuantity);
				RefreshDGVBonusPoints();
				ClearControls();
			}
		}

		private: System::Void dgvDiscount_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			if (dgvDiscount->CurrentCell != nullptr &&
				dgvDiscount->CurrentCell->Value != nullptr &&
				dgvDiscount->CurrentCell->Value->ToString() != "") {
				int selectedrowindex = dgvDiscount->SelectedCells[0]->RowIndex;
				DataGridViewRow^ selectedRow = dgvDiscount->Rows[selectedrowindex];
				String^ a = selectedRow->Cells[0]->Value->ToString();

				int pointsQuantity = Int32::Parse(a);
				BonusPoints^ bp = AppManager::QueryBonusPointsByPQ(pointsQuantity);
				txtPoints->Text = "" + bp->PointsQuantity;
				txtDiscount->Text = "" + bp->PercentageDiscount;
			}
		}

		private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
			if (txtPoints->Text->Trim() == "") {
				MessageBox::Show("El cajetín de puntos no debe estar vacío.");
				return;
			}
			if (txtDiscount->Text->Trim() == "") {
				MessageBox::Show("El porcentaje de descuento no debe estar vacío.");
				return;
			}

			/*if (txtSolesQuantity->Text->Trim() == "") {
				MessageBox::Show("El cajetín de cantidad en soles no debe estar vacío.");
				return;

			}
			if (txtPointsEarned->Text->Trim() == "") {
				MessageBox::Show("El cajetín de puntos ganados no debe estar vacío.");
				return;
			}*/
			//
			if (MessageBox::Show(
				"¿Está seguro de actualizar la equivalencia?",
				"Confirmación", MessageBoxButtons::YesNo,
				MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				BonusPoints^ bp = gcnew BonusPoints();
				BonusPoints^ sq = gcnew BonusPoints();

				try {
					bp->PointsQuantity = Int32::Parse(txtPoints->Text);
					bp->PercentageDiscount = Double::Parse(txtDiscount->Text);
					sq->SolesQuantity = Int32::Parse(txtSolesQuantity->Text);
					sq->PointsEarned = Int32::Parse(txtPointsEarned->Text);

					AppManager::UpdateBonusPointsPQ(bp);
					AppManager::UpdateBonusPointsSQ(sq);
					//btnAdd->Enabled = false;
					//btnUpdate->Enabled = false;
					//btnDelete->Enabled = false;
					RefreshDGVBonusPoints();
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

			   System::Void ClearControls() {
				   txtPoints->Clear();
				   txtDiscount->Clear();
				   txtSolesQuantity->Clear();
				   txtPointsEarned->Clear();
			   }
			   Void EnableControls() {
				   txtPoints->ReadOnly = false;
				   txtDiscount->ReadOnly = false;
				   txtSolesQuantity->ReadOnly = false;
				   txtPointsEarned->ReadOnly = false;
				   btnAdd->Enabled = true;
			   }

		private: System::Void dgvPointsEarned_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			if (dgvPointsEarned->CurrentCell != nullptr &&
				dgvPointsEarned->CurrentCell->Value != nullptr &&
				dgvPointsEarned->CurrentCell->Value->ToString() != "") {
				int selectedrowindex = dgvPointsEarned->SelectedCells[0]->RowIndex;
				DataGridViewRow^ selectedRow = dgvPointsEarned->Rows[selectedrowindex];
				String^ a = selectedRow->Cells[0]->Value->ToString();

				int solesQuantity = Int32::Parse(a);
				BonusPoints^ sq = AppManager::QueryBonusPointsBySQ(solesQuantity);
				txtSolesQuantity->Text = "" + sq->SolesQuantity;
				txtPointsEarned->Text = "" + sq->PointsEarned;
			}
			//Hola
		}
	};
}
