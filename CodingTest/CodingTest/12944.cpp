// https://school.programmers.co.kr/learn/courses/30/lessons/12944
// Æò±Õ ±¸ÇÏ±â

#include <string>
#include <vector>
#include <numeric>
#include <iostream>

double solution(std::vector<int> arr) {
	double answer = 0;
	answer = accumulate(arr.begin(), arr.end(), 0);
	answer /= arr.size();

	return answer;
}

int main() {
	std::vector<int> arr = { 1,2,3,4 };

	double result = solution(arr);

	std::cout << result << std::endl;

	return 0;
}