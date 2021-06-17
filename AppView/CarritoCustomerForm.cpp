#include "CarritoCustomerForm.h"
#include "Login.h"






System::Void AppView::CarritoCustomerForm::btnASCustom_Click(System::Object^ sender, System::EventArgs^ e)
{
	int customerId = UserManager::ReturnIDbyUserName(textUserNameCS->Text);
	User^ u = UserManager::QueryUserbyId(customerId);
	Ubicacion^ aForm = gcnew Ubicacion();
	aForm->txtAddressC->Text = u->Address;
		aForm->ShowDialog();
}

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
		
		SaleDetail^ saledetail;
		for (int i = 0; i < dgvCarrito->RowCount; i++) {
			saledetail = gcnew SaleDetail();

			int productId = AppManager::ReturnIDbyProductName(dgvCarrito->Rows[i]->Cells[0]->Value->ToString());
			saledetail->Product = AppManager::QueryProductById(productId);
			
			saledetail->Quantity = Double::Parse(dgvCarrito->Rows[i]->Cells[1]->Value->ToString());
			saledetail->UnitPrice = Double::Parse(dgvCarrito->Rows[i]->Cells[2]->Value->ToString());
			saledetail->SubTotal = Double::Parse(dgvCarrito->Rows[i]->Cells[3]->Value->ToString());
			sale->Details->Add(saledetail);

			
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
		aForm->txtIdB->Text = (sale->Id).ToString();

	

		AppManager::RegisterSale(sale);
		MessageBox::Show("Se ha registrado la venta exitosamente para el cliente: " + textUserNameCS->Text);
		aForm->Show();
	//	aForm->textTotalSaleB = sale->Total;

	}

}

