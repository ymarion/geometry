#include <iostream>
using namespace std;

#include "controller/Controller.h"
#include "controller/Interpreter.h"

int main()
{
#ifdef DEBUG
	cout << "DEBUG defined" << endl;
#endif
	cout << "# Application launched." << endl;
	Interpreter & interpreter = Interpreter::GetInstance( );
	interpreter.Interpret( cin );

	return 0;
}
