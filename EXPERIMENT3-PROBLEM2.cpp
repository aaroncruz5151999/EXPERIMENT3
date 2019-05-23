#include <iostream>

using namespace std;

int main()
{
	int i;
	double provinceA[7], provinceB[7], provinceC[7];
	
	cout << "Please enter the recorded temperatures (in degrees Celsius) of Provinces A, B, and C for the entire week:" << endl;
	for (i = 0; i < 7; i++)
	{
		cout << "Province A, Day " << i+1 << ": ";
		cin >> provinceA[i];
	}
	
	cout << endl;
	
	for (i = 0; i < 7; i++)
	{
		cout << "Province B, Day " << i+1 << ": ";
		cin >> provinceB[i];
	}
	
	cout << endl;
	
	for (i = 0; i < 7; i++)
	{
		cout << "Province C, Day " << i+1 << ": ";
		cin >> provinceC[i];
	}
	
	cout << endl << endl;
	
	cout << "Displaying Values:" << endl;
	for (i = 0; i < 7; i++)
	{
		cout << "Province A, Day " << i+1 << " = " << provinceA[i] << endl;
	}
	
	cout << endl;
	
	for (i = 0; i < 7; i++)
	{
		cout << "Province B, Day " << i+1 << " = " << provinceB[i] << endl;
	}
	
	cout << endl;
	
	for (i = 0; i < 7; i++)
	{
		cout << "Province C, Day " << i+1 << " = " << provinceC[i] << endl;
	}

return 0;
}
