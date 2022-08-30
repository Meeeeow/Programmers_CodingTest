// https://school.programmers.co.kr/learn/courses/30/lessons/87390
// n^2 배열 자르기

#include <string>
#include <vector>
#include <iostream>

std::vector<int> solution(int n, long long left, long long right) {
	std::vector<int> answer;
	int iSize = right - left + 1;
	answer.reserve(iSize);

	for (int i = 0; i < iSize; ++i, ++left) {
		int row = left / n;
		int column = left % n;

		answer.push_back((row < column) ? column + 1 : row + 1);
	}

	return answer;
}

int main() {
	int n = 3;
	long long left = 2, right = 5;

	std::vector<int> result = solution(n, left, right);

	for (auto& iter : result)
		std::cout << iter << std::endl;

	return 0;
}