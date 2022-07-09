#include <iostream>
#include <fstream>

using namespace std;

int main()
{

	string txt;

	ifstream file("form.txt");

	while(getline(file,txt))
		cout<<txt<<endl;
	
	file.close();

	return 0;
}
