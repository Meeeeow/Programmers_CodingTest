// https://school.programmers.co.kr/learn/courses/30/lessons/12930
// 이상한 문자 만들기

#include <string>
#include <vector>
#include <iostream>

std::string solution(std::string s) {

	int Word = 0;
	for (size_t i = 0; i < s.length(); ++i) {

		if (s[i] == ' ') {
			Word = 0;
			continue;
		}
		
		if ((Word % 2) == 0) {
			s[i] = toupper(s[i]);
		}
		else {
			s[i] = tolower(s[i]);
		}

		++Word;
	}
	
	return s;
}


int main() {

	std::string s = "try hello world";

	s = solution(s);

	std::cout << s << std::endl;

	system("pause");

	return 0;
}