// https://school.programmers.co.kr/learn/courses/30/lessons/12935
// 제일 작은 수 제거하기

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> solution(std::vector<int> arr) {
	std::vector<int> answer;

	if (arr.size() == 1)
	{
		answer.push_back(-1);
		return answer;
	}

	arr.erase(min_element(arr.begin(), arr.end()));
	answer = arr;

	return answer;
}

int main() {
	std::vector<int> arr = { 4,3,2,1 };

	std::vector<int> result = solution(arr);

	for (auto& iter : result)
		std::cout << iter << std::endl;

	return 0;
}