// https://school.programmers.co.kr/learn/courses/30/lessons/87389
// 나머지가 1이 되는 수 찾기

#include <string>
#include <vector>
#include <iostream>

int solution(int n) {
	int answer = 0;
	int division = 0;

	for (int i = 2; i < n; ++i)
	{
		division = n % i;
		if (division == 1)
		{
			answer = i;
			break;
		}
	}

	return answer;
}

int main() {
	int n = 10;

	int result = solution(n);

	std::cout << result << std::endl;

	return 0;
}