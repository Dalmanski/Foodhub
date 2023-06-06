#include "Intro.h"
#include <Windows.h>
#include <string>

using namespace FoodOrder;
using namespace System;
using namespace System::Diagnostics;

[STAThreadAttribute]
int main(array<System::String^>^ args) {
    // Start your Windows Form application
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Intro^ form = gcnew Intro();
    form->StartPosition = FormStartPosition::CenterScreen;
    form->WindowState = System::Windows::Forms::FormWindowState::Maximized;
    Application::Run(form);
    return 0;
}




