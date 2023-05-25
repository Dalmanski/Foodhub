#include "Intro.h"

using namespace FoodOrder;

[STAThreadAttribute]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Intro^ form = gcnew Intro();
	form->StartPosition = FormStartPosition::CenterScreen;
	Application::Run(form);
	return 0;
}
