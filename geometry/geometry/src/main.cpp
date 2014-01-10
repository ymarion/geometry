#include <iostream>
using namespace std;

#include "controller/Controller.h"
#include "controller/Interpreter.h"

int main()
{
	Interpreter & interpreter = Interpreter::GetInstance( );
	interpreter.Interpret( cin );

	return 0;
}
