// https://school.programmers.co.kr/learn/courses/30/lessons/12917
// 문자열 내림차순으로 배치하기

#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

std::string solution(std::string s) {

	std::sort(s.begin(), s.end(), std::greater<char>());

	return s;
}

int main() {
	std::string s = "Zbcdefg";

	std::string result = solution(s);

	std::cout << result << std::endl;

	return 0;
}