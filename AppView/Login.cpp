#include "Login.h"
#include "CustomerMainForm.h"
#include "DeliveryForm.h"
#include "ManagerMainForm.h"
//#include <sstream>
//#include <iostream>


using namespace AppController;

System::Void AppView::Login::btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	User^ user = AppController::UserManager::ValidateUser(txtUserName->Text, txtPassword->Text);
	if (user != nullptr) {
		if (user->Category->Equals("Cliente")) {
			MessageBox::Show("Bienvenido " + user->FirstName + " " + user->LastName + " : " + user->Category);
			this->Hide();
			CustomerMainForm::user = user;
			CustomerMainForm^ form = gcnew CustomerMainForm();
			form->Show();
			//user->Id = UserManager::ReturnIDbyUserName(txtUserName->Text);
			//stringstream ss;
			//ss << user->Id;
			//string newString = ss.str();
			form->txtNameC->Text = user->FirstName + " " + user->LastName;
			form->textUserNameC->Text = user->Username;
			
			
		}
		else if (user->Category->Equals("Repartidor")) {
			MessageBox::Show("Bienvenido " + user->FirstName + " " + user->LastName + " : " + user->Category);
			this->Hide();
			DeliveryForm::user = user;
			DeliveryForm^ form = gcnew DeliveryForm();
			form->Show();
			form->txtDeliverymanUserName->Text = user->Username;
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

