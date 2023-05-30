#include "MyForm.h"

using namespace Mnogo;
[STAThreadAttribute]
void main(cli::array<System::String^>^ args)
{
	Application::Run(gcnew MyForm());
}