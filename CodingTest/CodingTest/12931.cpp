// https://school.programmers.co.kr/learn/courses/30/lessons/12931
// �ڸ��� ���ϱ�

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

	// [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
	std::cout << "Hello Cpp" << std::endl;

	return answer;
}

int main() {
	int n = 123;

	int result = solution(n);

	std::cout << result << std::endl;

	return 0;
}
