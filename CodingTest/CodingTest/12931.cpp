// https://school.programmers.co.kr/learn/courses/30/lessons/12931
// 자릿수 더하기

#include <iostream>

int solution(int n)
{
	int answer = 0;

	int mod = n / 10, remain = n % 10;
	answer += remain;

	while (mod) {
		remain = mod % 10;
		mod /= 10;
		answer += remain;
	}

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	std::cout << "Hello Cpp" << std::endl;

	return answer;
}

int main() {
	int n = 123;

	int result = solution(n);

	std::cout << result << std::endl;

	return 0;
}
