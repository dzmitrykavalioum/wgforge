
#include <iostream>
#include <string>


using namespace std;

int main()
{
	long a;
	long b;
	cin >> a >> b;
	char symbol;

	if ((((a > b)&&(a!=3&&b!=2) || a == 1||( a == 2 && b==3 )) && a != b) && b != 1)
		symbol = '<';
	else
		if ((a < b || b == 1 || (a == 3 && b == 2)) && a != b)
			symbol = '>';
		else
			symbol = '=';

	if ((a == 2 && b == 4) || (a == 4 && b == 2))
		symbol = '=';

	cout << symbol;
	
	
	return 0;
}
