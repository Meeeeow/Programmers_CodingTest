// https://school.programmers.co.kr/learn/courses/30/lessons/12941
// �ּڰ� �����

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int solution(std::vector<int> A, std::vector<int> B)
{
	int answer = 0;

	std::sort(A.begin(), A.end(), std::greater<int>());
	std::sort(B.begin(), B.end());

	for (size_t i = 0; i< A.size(); ++i) {
		answer += A[i] * B[i];
	}

	// [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
	std::cout << "Hello Cpp" << std::endl;

	return answer;
}

int main() {
	std::vector<int> A = { 1,4,2 };
	std::vector<int> B = { 5,4,4 };

	int result = solution(A, B);

	std::cout << result << std::endl;

	return 0;
}