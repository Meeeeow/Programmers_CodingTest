// https://school.programmers.co.kr/learn/courses/30/lessons/12922
// ���ڼ��ڼ��ڼ��ڼ�?

#include <string>
#include <vector>
#include <iostream>

std::string solution(int n) {
	std::string answer = "";
	std::string wm = "";
	int i = 0;

	while (n)
	{
		(i % 2 == 0) ? wm = "��" : wm = "��";

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