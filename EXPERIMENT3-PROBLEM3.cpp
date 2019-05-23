#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char element[26];
	int j;
	
	cout << "Please enter a Word: ";
	cin.get(element, 26);
	
	cout << "Number of Elements: " << strlen(element) << endl;
	for (j = strlen(element)-1; j >= 0; j--)
	cout << element[j];
	cout << endl;
	
return 0;
}
	
	
