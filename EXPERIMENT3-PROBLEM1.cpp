#include <iostream>

using namespace std;

int main()
{
	int num[10];
	int i, smallestNum, largestNum, minI, maxI;
	double sum, average;
	
	cout << "Please enter 10 random integers:" << endl;
	for (i = 0; i < 10; i++)
		num[i] = 0;
	for (i = 0; i < 10; i++)
		cin >> num[i];
	for (i = 0; i < 10; i++)
		cout << num[i] << " ";
	
	cout << endl; 
	
	sum = 0;	
	for (i = 0; i < 10; i++)
		sum = sum + num[i];
		
	average = sum / 10;
	
	cout << endl;
	
	cout << "The sum of the 10 integers is: " << sum << endl;
	cout << "The average of the 10 integers is: " << average << endl;

	minI = 0;
	for (i = 1; i < 10; i++)
		if (num[minI] > num[i])
			minI = i;
	smallestNum = num[minI];
	
	cout << "The smallest value among the 10 integers is: " << smallestNum << endl;
	
	maxI = 0;
	for (i = 1; i < 10; i++)
		if (num[maxI] < num[i])
			maxI = i;
	largestNum = num[maxI];
	
	cout << "The largest value among the 10 integers is: " << largestNum << endl;

return 0;
}
