// https://school.programmers.co.kr/learn/courses/30/lessons/12947
// ÇÏ»þµå ¼ö

#include <string>
#include <vector>
#include <iostream>

bool solution(int x) {

	int sum = 0;
	int num = x;

	while (num > 0) {
		sum += num % 10;
		num /= 10;
	}


	return x % sum == 0 ? true : false;
}

int main() {
	int x = 10;

	bool result = solution(x);

	std::cout << result << std::endl;

	return 0;
}