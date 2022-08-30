// https://school.programmers.co.kr/learn/courses/30/lessons/70128
// ³»Àû

#include <string>
#include <vector>
#include <iostream>

int solution(std::vector<int> a, std::vector<int> b) {
	int answer = 0;

	size_t size = a.size();

	for (size_t i = 0; i < size; ++i)
	{
		answer += a[i] * b[i];
	}

	return answer;
}

int main() {
	std::vector<int> a = { 1, 2, 3, 4 };
	std::vector<int> b = { -3, -1, 0, 2 };

	int result = solution(a, b);

	std::cout << result << std::endl;

	return 0;
}