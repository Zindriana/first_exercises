
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void save(string x, string fileName) {
	ofstream newfile;
	newfile.open(fileName);
	newfile << x;
	newfile.close();
}

void read(string fileName) {
	ifstream myfile(fileName);
	string line;
	string line2;
	if (myfile.is_open())
	{
		while (getline(myfile, line2))
		{
			cout << line2 << '\n';
		}
		myfile.close();
	}
	else cout << "Unable to open file";

}

string find(string word, string fileName) {
	string line;
	string* ptr = &line;
	ifstream myfile(fileName);
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			int foundedWord = line.find(word);
			cout << "Word place " << foundedWord << endl;
			line.replace(foundedWord, word.length(), "A");
			
		}
		myfile.close();
	}
	else cout << "Unable to open file";

	return line;

}

/*string edit(string* ptr, string word) {

}*/

int main() {
	string fileName = "testfil.txt";
	save("1 2 4 2 5", fileName);
	
	string ptr = find("2", fileName);
	save(ptr, fileName);
	//edit(ptr, "T");
	read("testfil.txt");
	return 0;
}




/*int main() {
	string s;

	cout << "Write something" << endl;
	getline(cin, s);
	ofstream newfile;
	newfile.open("testfil.txt");
	newfile << s;
	newfile.close();

	string line;
	string line2;
	cout << "Choose search word" << endl;
	cin >> line;
	ifstream myfile("testfil.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line2))
		{	
			cout << "Place " << line2.find(line) << '\n';
		}
		myfile.close();
	}
	else cout << "Unable to open file";

	string newString;
	cout << "What do you want to replace it with ? " << endl;
	cin >> newString;
	
	//string* ptr = &line;
	string* ptr2 = &line2;
	*ptr2 = newString;
	cout << "new string " << newString << endl;
	cout <<  << endl;
	//cout << "Memory line2 " << ptr2 << endl;

	/*string line3;
	myfile.open("testfil.txt");
	if (myfile.is_open())
	{
		
		while (getline(myfile, line3))
		{
			cout << "test" << '\n';
		}
		myfile.close();
	}
	return 0; */
