// https://school.programmers.co.kr/learn/courses/30/lessons/12903
// 가운데 글자 가져오기

#include <string>
#include <vector>
#include <iostream>

std::string solution(std::string s) {

	std::string answer = "";
	size_t length = s.length();
	size_t quo = length / 2;
	size_t remain = length % 2;


	if (remain == 0)
	{
		answer += s.at(quo - 1);
	}

	answer += s.at(quo);

	return answer;
}

int main() {
	std::string s = "abcde";

	std::string result = solution(s);

	std::cout << result << std::endl;

	return 0;
}