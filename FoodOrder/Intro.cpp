#include "Intro.h"

using namespace FoodOrder;
using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Intro^ form = gcnew Intro();
    form->StartPosition = FormStartPosition::CenterScreen;
    //form->Location = System::Drawing::Point(0, 0); // set the position of the form.
    Application::Run(form);
    return 0;
}