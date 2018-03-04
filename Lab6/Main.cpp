#include "TestApp.h"
int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF); // check for memory leaks
	TestApp app;
	app.run();
	return 0;
}
