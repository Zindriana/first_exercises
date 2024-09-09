//c++ program som skapar följande utskrifter
//7 / 4 using integer division equals <result>
//7 / 4 using floating-point division equals <result>
//7 modulo 4 equals <result>

#include <iostream>
using namespace std;

int main() {
	int n1, n2, n3;

	cout << "choose a number to divide" << endl;
	cin >> n1;
	cout << "what number do you want to divide it with?" << endl;
	cin >> n2;
	n3 = n1 / n2;
	cout << n3;

	return 0;
}

