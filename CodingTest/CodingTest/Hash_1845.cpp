// ÆùÄÏ¸ó
// https://school.programmers.co.kr/learn/courses/30/lessons/1845

#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

int solution(std::vector<int> nums) {
	int answer = static_cast<int>(nums.size()) / 2;

	std::sort(nums.begin(), nums.end());

	nums.erase(std::unique(nums.begin(), nums.end()), nums.end());

	return nums.size() > answer ? answer : static_cast<int>(nums.size());
}

int solution2(std::vector<int> nums) {
	std::set<int> types(nums.begin(), nums.end());

	return std::min(nums.size() / 2, types.size());
}


int main() {

	std::vector<int> nums = { 3,1,2,3 };

	int result = solution2(nums);


	std::cout << result << std::endl;

	system("pause");

	return 0;
}