// https://school.programmers.co.kr/learn/courses/30/lessons/12937
// Â¦¼ö¿Í È¦¼ö

#include <string>
#include <vector>
#include <iostream>

std::string solution(int num) {
	std::string answer = "";

	if (num < 0)
		num *= -1;

	switch (num % 2)
	{
	case 0:
		answer = "Even";
		break;
	case 1:
		answer = "Odd";
		break;
	}

	return answer;
}

int main() {
	int num = 3;

	std::string result = solution(num);

	std::cout << result << std::endl;

	return 0;
}