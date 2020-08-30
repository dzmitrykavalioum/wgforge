#include <iostream>
#include <string>
#include <array>


int main() {
	std::string err;
	std::string noerr;
	std::string positions;
	int errors = 0;
	int tempSameLitters = 0;
	int finalSameLitters = 0;
	int sameLitters = 1;
	int position = 0;
	int correction = 0;
	char symbol = ' ';
	std::cin >> err >> noerr;
	
	bool same = false;
	for (int i = 0; i < err.length()&&errors<2 ; i++) {
		if (err[i] == symbol && errors ==0  ) {
			sameLitters++;
			same = true;
		}
		else {
			symbol = err[i];
			same = false;
		}
		
		if (err[i] != noerr[i-errors]) {
			errors++;
			position = i+1;
			
		}
		
		if (errors == 0 && !same) {
			symbol = err[i];
			sameLitters = 1;
		}
	}

	for (int i = (position - sameLitters + 1); i < position + 1; i++)
	{
		positions = positions + std::to_string(i);
		positions += " ";

	}
	if (errors > 1) {
		std::cout << "0";
	}
	else {


		std::cout << sameLitters << std::endl;
		std::cout << positions;
	}

	/*std::string test;
	std::cin >> test;
	getchar();*/
	return 0;
}