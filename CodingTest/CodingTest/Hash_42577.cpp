// 전화번호 목록
// https://school.programmers.co.kr/learn/courses/30/lessons/42577

#include <string>
#include <vector>

// For sort_loop_solution
#include <algorithm>

// For hash_solution
#include <unordered_map>

// For Time
#include <time.h>
#include <stdio.h>

static const int Have = 1;

bool sort_loop_solution(std::vector<std::string> phone_book) {
	std::sort(phone_book.begin(), phone_book.end());

	for (size_t i = 0; i < phone_book.size() - 1; ++i) {

		if (phone_book[i] == phone_book[i + 1].substr(0, phone_book[i].size())) {
			return false;
		}

	}
	return true;
}

bool hash_solution(std::vector<std::string> phone_book) {
	std::unordered_map<std::string, int> map;

	for (auto number : phone_book) {
		map[number] = Have;
	}

	for (auto number : phone_book) {
		
		for (size_t i = 1; i < number.length(); ++i) {

			if (map[number.substr(0, i)] == Have)
				return false;
		}

	}

	return true;
}

int main() {

	std::vector<std::string> phone_book = { "119", "97674223", "1195524421" };

	clock_t start, end;

	start = clock();
	bool bSortLoopResult = sort_loop_solution(phone_book);
	end = clock();

	float time = (float)(end - start);

	printf("%f \n", time);

	start = clock();
	bool bHashResult = hash_solution(phone_book);
	end = clock();

	time = (float)(end - start);

	printf("%f \n", time);

	system("pause");

	return 0;
}