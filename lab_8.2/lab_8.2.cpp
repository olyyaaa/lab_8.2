// lab_8.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
size_t MaxLength(const string s)
{
	int k = 0;
	size_t len = 0,
		max;
	size_t start = 0,
		finish;
	while ((start = s.find_first_of("0123456789", start)) != -1)
	{
		finish = s.find_first_not_of("0123456789", start + 1);
		if (finish == -1)
			finish = s.length();
		len = finish - start;
		if (k == 0)
			max = len;
		k++;
		if (len > max)
			max = len;
		start = finish + 1;
	}
	return max;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "Length of max groups of digits: " << MaxLength(str) << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
