#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3) {
	return (i1 + i2 + i3) / 3.0; // 'f' is unneeded
}

int main()
{
	int n1 = 0; int n2 = 0; int n3 = 0; //declared these as integers
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	cout << "Third number: "; cin >> n3; // changed n2 to n3

	float avg = average(n1, n2, n3);

	cout << setprecision(3) << fixed << "The average is " << avg << endl; // added better precision

	return 0;
}