/* File Handling with C++ using ifstream & ofstream class object*/
/* To write the Content in File*/
/* Then to read the content of file*/
#include <iostream>

/* fstream header file for ifstream, ofstream,
  fstream classes */
#include <fstream>

using namespace std;

// Driver Code
int main()
{
	string line;
	ifstream fin;
	ofstream fout;
	fin.open("../test.txt");
	fout.open("../test.txt.replace");
	while (fin) {
		getline(fin, line);
		fout << line << endl;
		cout << line << endl;
	}
	// Close the file
	fin.close();
	fout.close();
	

	

	return 0;
}