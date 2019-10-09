// Truth Table Generator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	double size;

	cout << "Input size: ";
	cin >> size;

	char capLetters[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
						   'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	char lowLetters[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
						    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

	vector<vector <int>> array(pow(2.0, size), vector<int>(size));

	
	for (int i = 0; i < size; i++) {
		for (int j = 1; j < pow(2, size) / pow(2.0, size - 1 - i); j+=2) {
			for (int k = pow(2.0, size - 1 - i) * j ; k <= (pow(2.0, size - 1 - i) * ((double)j + 1) - 1); k++) {
				array[k][i] = 1;
			}
		}
	}

	for (unsigned int l = 0; l < pow(2, size); l++) {
		for (unsigned int m = 0; m < array[0].size(); m++) {
			cout << lowLetters[m] << " = " << array[l][m] << "; ";
		}

		cout << "#10" << endl;
	}

}