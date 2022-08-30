// https://school.programmers.co.kr/learn/courses/30/lessons/12982
// ¿¹»ê

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

int solution(std::vector<int> d, int budget) {
	int answer = 0;

	int max = std::accumulate(d.begin(), d.end(), 0);
	size_t size = d.size();

	if (max <= budget) {
		return size;
	}

	std::sort(d.begin(), d.end());

	for (size_t i = 0; i < size; ++i) {

		if (budget < d[i]) {
			break;
		}

		budget -= d[i];
		++answer;
	}

	return answer;
}

int main() {
	std::vector<int> d = { 1,3,2,5,4 };
	int budget = 9;

	int result = solution(d, budget);

	std::cout << result << std::endl;

	return 0;
}