// https://school.programmers.co.kr/learn/courses/30/lessons/12901
// 2016³â

#include <string>
#include <vector>
#include <iostream>

std::string solution(int a, int b) {
	std::string		day[7] = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED" };
	int				month[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int				Date = b;

	for (int i = 0; i < a - 1; ++i)	{
		Date += month[i];
	}

	return day[Date % 7];
}

int main() {
	int a = 5, b = 24;

	std::string result = solution(a, b);

	std::cout << result << std::endl;

	return 0;
}