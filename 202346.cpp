#include <iostream>

int main()
{
	using std::cin;
	using std::cout;
	int height = 0;
	cout << "please input your height _____in\b\b\b\b\b\b\b";
	cin >> height;
	cout << "your height is " << height / 12 << " foot " << height % 12 << " in";
	return 0;
}