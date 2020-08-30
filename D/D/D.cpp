#include <iostream>
#include <array>

int main() {
	int const MAX = 20;
	bool is_possible = false;
	int task_hour;
	int qty_intervals;
	int min_ways = 0;
	std::cin >> task_hour >> qty_intervals;

	std::array <int, MAX> left_time;
	std::array <int, MAX> right_time;
	std::array <int, MAX> alice_time;
	std::array <int, MAX> victory_time;
	for (int i = 0; i < qty_intervals; i++) {
		std::cin >> left_time[i] >> right_time[i];
		if ((left_time[i] <= task_hour) && (task_hour <= right_time[i])) {
			min_ways = 1;
			is_possible = true;
		}
	}
	int correction = 1;
	for (int i = 0; i < qty_intervals; i++) {
		while ((i + correction) < qty_intervals) {

			if ( ((left_time[i + correction] - right_time[i]) <= task_hour) && (task_hour <= (right_time[i + correction] - left_time[i])) && (min_ways == 0))
			{
				min_ways = 2;
				is_possible = true;
			}
			correction++;
		}
	}
	if (is_possible) {
		std::cout << "Yes" << std::endl;
		std::cout << min_ways;
	}
	else {
		std::cout << "No";
	}

	return 0;

}