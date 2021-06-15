#include "Login.h"
#include "CustomerMainForm.h"
#include "DeliveryForm.h"
#include "ManagerMainForm.h"

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
			ManagerMainForm::user = user;
			ManagerMainForm^ form = gcnew ManagerMainForm();
			form->Show();
		}
		else {
			MessageBox::Show("Usuario y/o contraseña incorrecto(s)");
		}
	}
}

System::Void AppView::Login::txtPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyData == Keys::Enter)
	{
		//CustomerMainForm^ customerMainForm = gcnew CustomerMainForm();
		//customerMainForm->Show();
	}
}

