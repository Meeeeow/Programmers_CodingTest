// https://school.programmers.co.kr/learn/courses/30/lessons/12925
// ���ڿ��� ������ �ٲٱ�

#include <string>
#include <vector>
#include <iostream>

int solution(std::string s) {
	int answer = 0;
	answer = std::stoi(s);
	
	return answer;
}

int main() {
	std::string str = "1234";

	int result = solution(str);

	std::cout << result << std::endl;

	return 0;
}