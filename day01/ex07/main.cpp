/* File Handling with C++ using ifstream & ofstream class object*/
/* To write the Content in File*/
/* Then to read the content of file*/
#include <iostream>

/* fstream header file for ifstream, ofstream,
  fstream classes */
#include <fstream>

//using namespace std;

// Driver Code

void replaceAll(std::string& str, const std::string& from, const std::string& to) {
    if(from.empty())
        return;
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // In case 'to' contains 'from', like replacing 'x' with 'yx'
    }
}

int main()
{
	std::string line;
	std::ifstream fin;
	int index = 0;
	std::ofstream fout;
	fin.open("test");
	fout.open("test.replace");
	while (fin) {
		getline(fin, line);
       replaceAll(line, "hello", "Somename");
		fout << line << std::endl;

//		cout << line << endl;
	}
	// Close the file
	fin.close();
	fout.close();




	return 0;
}