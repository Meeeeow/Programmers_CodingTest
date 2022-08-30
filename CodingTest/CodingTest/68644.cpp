// https://school.programmers.co.kr/learn/courses/30/lessons/68644
// 두 개 뽑아서 더하기

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> solution(std::vector<int> numbers) {
	std::vector<int> answer;

	for (size_t i = 0; i < numbers.size(); ++i) {

		for (size_t j = i + 1; j < numbers.size(); ++j) {

			answer.push_back(numbers[i] + numbers[j]);

		}
	}

	std::sort(answer.begin(), answer.end());

	answer.erase(std::unique(answer.begin(), answer.end()), answer.end());

	return answer;
}

int main() {
	std::vector<int> numbers = { 2, 1, 3, 4, 1 };

	std::vector<int> result = solution(numbers);

	for(auto& iter : result)
		std::cout << iter  << std::endl;

	return 0;
}