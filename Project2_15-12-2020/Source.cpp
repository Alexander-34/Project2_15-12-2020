#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;
int main()
{
	random_device rd;
	cout << "Hello!\n";
	vector <int> abc;
	for (int i = 0; i < 20; ++i)
		abc.push_back(i);
	generate(abc.begin(), abc.end(), [&rd]() {return rd() % 100; });
	for (int i = 0; i < abc.size(); ++i)
		cout << abc[i] << " ";
	cout << endl;
}