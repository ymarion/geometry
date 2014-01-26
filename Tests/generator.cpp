#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
using namespace std;

string fig[] = {"C", "R", "PL", "L", "OA"};
vector <string> figNames;
int const NB_FIGURES_TYPE = 5;
int const MAX_OA_AGGREGATES = 50;
int const MAX_PL_POINTS = 50;

int min ( int a, int b ) { return a < b ? a : b; }

void generate (string const & figName)
{
	int indiceFig = rand() % NB_FIGURES_TYPE;
	if (fig[indiceFig] == "OA")
	{
		if (figNames.size() < 2)
		{
			return;
		}
		cout << "OA " << figName;

		int nb = 1 + (rand() % ( figNames.size() - 1) );
		nb = min(nb, 1 + (rand() % ( MAX_OA_AGGREGATES - 1 )));
		// Between 1 and MAX aggregates (or size if it is lower)

		for (int i = 0; i < nb; ++i)
		{
			cout << " " << figNames[i];
		}
		figNames.push_back(figName);
	}
	else
	{
		figNames.push_back(figName);
		cout << fig[indiceFig];
		cout << " " << figName;

		if (fig[indiceFig] == "C")
		{
			for (int i = 0; i < 3; ++i)
			{
				cout << " 0";
			}
		}
		if (fig[indiceFig] == "R" || fig[indiceFig] == "L")
		{
			for (int i = 0; i < 4; ++i)
			{
				cout << " 0";
			}
		}
		if (fig[indiceFig] == "PL")
		{
			int nb = 1 + (rand() % ( MAX_PL_POINTS - 1 ));
			// Between 1 and MAX points

			nb *= 2;
			for (int i = 0; i < nb; ++i)
			{
				cout << " 0";
			}
		}
	}
	cout << endl;
}

int main(int argc, char **argv)
{
	srand(time(0));
	for (int i = 1; i < atoi(argv[1]) + 1; ++i)
	{
		stringstream ss;
		ss << setfill('0') << setw(10) << i;// 10=>enough for all ints
		generate(ss.str());
	}
	return 0;
}
