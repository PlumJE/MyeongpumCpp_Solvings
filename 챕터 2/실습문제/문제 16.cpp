#include <iostream>

void num16() {
	char buf[10000] = "";
	int alpha_code = 0;
	int alpha_num[26] = { 0 };
	int total = 0;

	std::cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
	std::cin.getline(buf, 10000, ';');

	for (int i = 0; buf[i] != '\0'; ++i) {
		if (isalpha(buf[i])) {
			buf[i] = tolower(buf[i]);
			alpha_num[(int)buf[i] - 97]++;
		}
	}

	for (int i = 0; i < 26; ++i)
		total += alpha_num[i];
	std::cout << "총 알파벳 수 " << total << "\n\n";

	for (int i = 0; i < 26; ++i) {
		std::cout << "a (" << alpha_num[i] << ")\t: ";
		for (int j = 0; j < alpha_num[i]; ++j)
			std::cout << "*";
		std::cout << std::endl;
	}
}