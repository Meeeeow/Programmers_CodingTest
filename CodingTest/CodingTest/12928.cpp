// https://school.programmers.co.kr/learn/courses/30/lessons/12928
// 약수의 합

#include <string>
#include <vector>
#include <iostream>

int solution(int n) {
	int answer = 0;

	for (int i = 1; i <= n; ++i)
	{
		if (n % i == 0)
			answer += i;
	}

	return answer;
}

int main() {
	int n = 12;

	int result = solution(n);

	std::cout << result << std::endl;



	return 0;
}