#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Media;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LAB4JorgeGarcía12200019::MyForm form;
	Application::Run(%form);
	return 0;
}

