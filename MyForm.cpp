#include "MyForm.h"
#include "MyForm1.h"
#include <Windows.h>
#include "User.h"
#include "resgisteruser.h"
//#include "resgisteruser.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OOPFINALPROJECTSEMESTER2::MyForm form;
	OOPFINALPROJECTSEMESTER2::resgisteruser registeruser;

	Application::Run(% form);
	
	
	
}
