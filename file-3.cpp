#include <iostream>
#include <fstream>

using namespace std;

int main()
{

	ofstream file("rec.txt");

	string txt;
	
	cin>>txt;

	file<<txt<<endl;

	file.close();

	return 0;
}
