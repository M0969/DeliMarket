#include "Login.h"
#include "CustomerMainForm.h"

System::Void AppView::Login::btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	User^ user = AppController::UserManager::ValidateUser(txtUserName->Text, txtPassword->Text);
	if (user != nullptr) {
		MessageBox::Show("Bienvenido " + user->FirstName + " " + user->LastName);
		this->Hide();
		CustomerMainForm::user = user;
	}
	else {
		MessageBox::Show("Usuario y/o contraseña incorrecto(s)");
	}
}

