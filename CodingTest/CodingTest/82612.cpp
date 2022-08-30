// https://school.programmers.co.kr/learn/courses/30/lessons/82612
// 부족한 금액 계산하기

#include <iostream>

long long solution(int price, int money, int count)
{
	int answer = -1;
	long long value = 0;

	for (int i = 0; i < count; ++i)
	{
		value += (price * (i + 1));
	}

	value -= money;
	if (value < 0)
		value = 0;

	return value;
}

int main() {
	int price = 3, money = 20, count = 4;

	long long result = solution(price, money, count);

	std::cout << result << std::endl;

	return 0;
}