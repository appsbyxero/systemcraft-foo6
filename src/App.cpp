#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	string s = argv[2];
	std::ifstream infile(s);

	for (std::string line; getline(infile, line); )
	{
		cout << line << endl;
	}

	return 0;
}
