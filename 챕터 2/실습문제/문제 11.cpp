#include <iostream>

void num11() {
	int k, n = 0;
	int sum = 0;
	std::cout << "끝 수를 입력하세요>>";
	std::cin >> n;
	for (k = 1; k <= n; k++) {
		sum += k;
	}
	std::cout << "1에서 " << n << "까지의 합은 " << sum << "입니다." << std::endl;
}