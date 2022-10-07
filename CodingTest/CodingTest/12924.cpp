// 숫자의 표현
// https://school.programmers.co.kr/learn/courses/30/lessons/12924

#include <string>
#include <vector>
#include <iostream>

int solution(int n) {
	int answer = 1;
	// 홀수 일 경우를 대비해서
	int TestCase = ((n + 1) / 2);
	
	int Sum = 0, Minus = 1;

	for (int i = 1; i <= TestCase; ++i) {

		Sum += i;

		if (Sum >= TestCase) {

			while (Sum > n) {
				Sum -= Minus++;
			}

			if (Sum == n) {
				answer++;
			}

		}

	}


	return n != 1 ? answer : 1;
}


int main() { 

	int result = 0;

	result = solution(15);

	std::cout << result << std::endl;

	result = solution(42);

	std::cout << result << std::endl;

	result = solution(8468);

	std::cout << result << std::endl;

	result = solution(1);

	std::cout << result << std::endl;

	system("pause");

	return 0;
}