#include <iostream>
using namespace std;

#undef DEBUG

#include "controller/Controller.h"
#include "controller/Interpreter.h"
#include "view/Drawing.h"
#include "model/Circle.h"

int main()
{
#ifdef DEBUG
	cout << "DEBUG defined" << endl;
#endif
	cout << "# Application launched." << endl;

	Interpreter & interpreter = Interpreter::GetInstance( );
	interpreter.Interpret( cin );

	return 0;
} //----- End of main
