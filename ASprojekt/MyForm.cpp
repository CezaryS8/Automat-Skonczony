#include <msclr\marshal.h>
#include <msclr/marshal_cppstd.h>
#include <string.h>
#include <windows.h>
#include <ctime>
#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ASprojekt::MyForm form;
	Application::Run(% form);
}
