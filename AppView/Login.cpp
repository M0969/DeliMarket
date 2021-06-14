#include "Login.h"
#include "CustomerMainForm.h"
#include "DeliveryForm.h"

System::Void AppView::Login::btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	User^ user = AppController::UserManager::ValidateUser(txtUserName->Text, txtPassword->Text);
	if (user != nullptr) {
		if (user->Category->Equals("Cliente")) {
			MessageBox::Show("Bienvenido " + user->FirstName + " " + user->LastName + " : " + user->Category);
			this->Hide();
			CustomerMainForm::user = user;
			CustomerMainForm^ form = gcnew CustomerMainForm();
			form->Show();
		}
		else if (user->Category->Equals("Repartidor")) {
			MessageBox::Show("Bienvenido " + user->FirstName + " " + user->LastName + " : " + user->Category);
			this->Hide();
			DeliveryForm::user = user;
			DeliveryForm^ form = gcnew DeliveryForm();
			form->Show();
		}
		else if (user->Category->Equals("Manager")) {
			MessageBox::Show("Bienvenido " + user->FirstName + " " + user->LastName + " : " + user->Category);
			this->Hide();
			DeliveryForm::user = user;
			DeliveryForm^ form = gcnew DeliveryForm();
			form->Show();
		}
		else {
			MessageBox::Show("Usuario y/o contraseña incorrecto(s)");
		}
	}
}
