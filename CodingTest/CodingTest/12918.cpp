// https://school.programmers.co.kr/learn/courses/30/lessons/12918
// 문자열 다루기 기본

#include <string>
#include <vector>
#include <iostream>

bool solution(std::string s) {
	bool answer = true;

	size_t length = s.length();
	if (length > 6 || length == 5 || length < 4)
		return false;

	for (size_t i = 0; i < length; ++i)
	{
		if (s[i] >= 65)
			return false;
	}

	return answer;
}

int main() {
	std::string s = "a234";

	bool result = solution(s);

	std::cout << result << std::endl;

	return 0;
}