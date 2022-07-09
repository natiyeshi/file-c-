#include <iostream>
#include <fstream>

using namespace std;

int main()
{

	ofstream form("form.txt");
	
	form<<"your name is natnael\n";

	form.close();

	return 0;
	
}
