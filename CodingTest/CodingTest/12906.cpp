// https://school.programmers.co.kr/learn/courses/30/lessons/12906
// ���� ���ڴ� �Ⱦ�

#include <vector>
#include <iostream>
#include <algorithm>

std::vector<int> solution(std::vector<int> arr) {
	arr.erase(std::unique(arr.begin(), arr.end()), arr.end());

	// [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
	std::cout << "Hello Cpp" << std::endl;

	return arr;
}

int main() {
	std::vector<int> arr = { 1, 1, 3, 3, 0, 1, 1 };

	std::vector<int> result = solution(arr);

	for(auto& iter : result)
		std::cout << iter  << std::endl;
	
	return 0;
}