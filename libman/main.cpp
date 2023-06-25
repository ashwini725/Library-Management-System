#include "main.h"
#include<Windows.h>
using namespace libman;
/*int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew main());
	return 0;
}
*/
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	libman::main form;
	Application::Run(% form);
}
