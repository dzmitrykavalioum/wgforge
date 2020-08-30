#include <iostream>
#include <list>
#include <algorithm>
int main() {

	int n, m, k;
	std::list <int> l;
	int res;
	std::cin >> n >> m >> k;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			res = i*j;
			if (res <= k) {
				l.push_back(res);
			}
			else break;
		}
	}
	l.sort();
	std::list<int>::iterator it = l.begin();
	std::advance(it, k - 1);
	std::cout << *it;
	
}