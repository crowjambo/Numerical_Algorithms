#include <iostream>

using namespace std;

int main() {

	int a, b, x, y;
	cout << "Enter A number: " << endl;
	cin >> a;
	cout << "Enter B number: " << endl;
	cin >> b;
	cout << "Enter X number: " << endl;
	cin >> x;
	cout << "Enter Y number: " << endl;
	cin >> y;

	int AEA, AEB, REA, REB, AE, DE;
	AEA = abs(a - x);
	AEB = abs(b - y);
	REA = AEA / a;
	REB = AEB / b;
	AE = abs((a + b)-(x + y));
	DE = abs((a - b)+(x - y));

	cout << "ABSOLUTE ERROR OF A IS: " << AEA << endl;
	cout << "ABSOLUTE ERROR OF B IS: " << AEB << endl;
	cout << "RELATIVE ERROR OF A IS: " << REA << endl;
	cout << "RELATIVE ERROR OF B IS: " << REB << endl;
	cout << "AMMOUNT ERROR IS: " << AE << endl;
	cout << "DIFFERENCE ERROR IS: " << DE << endl;
}