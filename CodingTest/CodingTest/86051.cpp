// https://school.programmers.co.kr/learn/courses/30/lessons/86051
// ���� ���� ���ϱ�

#include <string>
#include <vector>
#include <numeric>
#include <iostream>

int solution(std::vector<int> numbers) {
	int answer = 0, max = 45;
	int acc = std::accumulate(numbers.begin(), numbers.end(), 0);

	answer = max - acc;

	return answer;
}

int main() {
	std::vector<int> numbers = { 1,2,3,4,6,7,8,0 };

	int result = solution(numbers);

	std::cout << result << std::endl;

	return 0;
}