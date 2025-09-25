#include "two_counts.h"
#include "one_count.h"
#include <array>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	NCalcuate::two_counts two;
	NCalcuate::one_count one;
	Application::Run(% two);
	Application::Run(% one);
}