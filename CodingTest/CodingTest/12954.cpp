// https://school.programmers.co.kr/learn/courses/30/lessons/12954
// x만큼 간격이 있는 n개의 숫자

#include <string>
#include <vector>
#include <iostream>

std::vector<long long> solution(int x, int n) {
	std::vector<long long> answer;

	for (int i = 0; i<n; ++i)
	{
		answer.push_back(x * (i + 1));
	}

	return answer;
}

int main() {
	int x = 2, n = 5;

	std::vector<long long> result = solution(x, n);

	for (auto& iter : result) {
		std::cout << iter << std::endl;
	}

	return 0;
}