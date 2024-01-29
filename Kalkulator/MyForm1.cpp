#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)

{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Kalkulator::MyForm1 form;
	Application::Run(% form);
}
