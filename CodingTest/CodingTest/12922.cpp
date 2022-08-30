// https://school.programmers.co.kr/learn/courses/30/lessons/12922
// 수박수박수박수박수?

#include <string>
#include <vector>
#include <iostream>

std::string solution(int n) {
	std::string answer = "";
	std::string wm = "";
	int i = 0;

	while (n)
	{
		(i % 2 == 0) ? wm = "수" : wm = "박";

		answer += wm;
		n--;
		i++;
	}

	return answer;
}

int main() {
	int n = 3;

	std::string result = solution(n);

	std::cout << result << std::endl;

	return 0;
}