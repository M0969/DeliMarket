#include "CarritoCustomerForm.h"
#include "Login.h"


int AppView::CarritoCustomerForm::ValidateInfo() {
	//-1: No se ha elegido una direccion
    //-2: La fecha es menor a la fecha actual
    //-3: No hay un total
    //-4: No se ha elegido un metodo de pago
	if (txtSAddres->Text =="")
		return -1;
	if (dtpSaleDate->Value <= DateTime::Today.AddDays(-1))
		return -2;
	if (txtTotalSale->Text == "" || Double::Parse(txtTotalSale->Text) <= 0) {
		return -3;
	}
	if (cmbTypePayment->SelectedIndex < 0)
		return -4;
	return 1;
}

System::Void AppView::CarritoCustomerForm::btnRegisterSale_Click(System::Object^ sender, System::EventArgs^ e) {
	int validatedData = ValidateInfo();
	//if (validatedData == -1) {
		//MessageBox::Show("Debe seleccionar una dirección.");
	//}
	 if (validatedData == -2) {
		MessageBox::Show("La fecha no debe ser anterior a la fecha actual.");
	}
	else if (validatedData == -3) {
		MessageBox::Show("El total debe ser mayor a cero.");
	}
	//else if (validatedData == -4) {
		//MessageBox::Show("Debe seleccionar un método de pago.");
	//}

	else {

		//Boleta^ aForm = gcnew Boleta();
		//aForm->ShowDialog();
		Order^ sale = gcnew Order();
		int customerId = UserManager::ReturnIDbyUserName(textUserNameCS->Text);
		sale->User = UserManager::QueryUserbyId(customerId);
		DateTime dt = dtpSaleDate->Value;
		sale->Date = dt.Now + "" ; // ToString();
		sale->Total = Double::Parse(txtTotalSale->Text);
		sale->Details = gcnew List<SaleDetail^>();
		SaleDetail^ saleDetail;
		for (int i = 0; i < dgvCarrito->RowCount; i++) {
			saleDetail = gcnew SaleDetail();
			int productId = AppManager::ReturnIDbyProductName(dgvCarrito->Rows[i]->Cells[0]->Value->ToString());
			saleDetail->Product = AppManager::QueryProductById(productId);
			saleDetail->Quantity = Int32::Parse(dgvCarrito->Rows[i]->Cells[1]->Value->ToString());
			saleDetail->UnitPrice = Double::Parse(dgvCarrito->Rows[i]->Cells[2]->Value->ToString());
			saleDetail->SubTotal = Double::Parse(dgvCarrito->Rows[i]->Cells[3]->Value->ToString());
			sale->Details->Add(saleDetail);
		}
		
		
		sale->Id=AppManager::QueryLastSaleId()+1;
		sale->Status = 'W';

			
		Boleta^ aForm = gcnew Boleta();       
		User^ userB = gcnew User();
		userB= UserManager::QueryUserbyId(customerId);
		aForm->textNameCB->Text = userB->FirstName + " " + userB->LastName;
		aForm->textDateTimeB->Text = sale->Date;
		aForm->txtDocumentNumberCB->Text = userB->DocumentNumber;
		aForm->textTotalSaleB->Text = txtTotalSale->Text;
		aForm->textIdSaleDetailB->Text = "DMC- " + (sale->Id).ToString();
	

		AppManager::RegisterSale(sale);
		MessageBox::Show("Se ha registrado la venta exitosamente para el cliente: " + textUserNameCS->Text);
		aForm->Show();
	//	aForm->textTotalSaleB = sale->Total;

	}

}

