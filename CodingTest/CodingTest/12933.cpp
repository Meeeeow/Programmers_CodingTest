// https://school.programmers.co.kr/learn/courses/30/lessons/12933
// 정수 내림차순으로 배치하기

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

long long solution(long long n) {
	long long answer = 0;

	std::vector<int>    container;
	int					digit = 1;

	while (n != 0)
	{
		container.push_back(n % 10);
		n /= 10;
	}

	std::sort(container.begin(), container.end());

	for (size_t i = 0; i < container.size(); ++i)
	{
		answer += container[i] * digit;
		digit *= 10;
	}

	return answer;
}

int main() {
	long long n = 118372;

	long long result = solution(n);

	std::cout << result << std::endl;

	return 0;
}