// https://school.programmers.co.kr/learn/courses/30/lessons/12912
// 두 정수 사이의 합

#include <string>
#include <vector>
#include <iostream>

long long solution(int a, int b) {
	long long answer = 0;

	if (a == b)
		return a;

	int min = 0, max = 0;

	if (a > b)
	{
		min = b;
		max = a;
	}
	else
	{
		min = a;
		max = b;
	}

	for (int i = min; i < max + 1; ++i)
	{
		answer += i;
	}

	return answer;
}

int main() {
	int a = 3, b = 5;

	long long result = solution(a, b);

	std::cout << result << std::endl;

	return 0;
}