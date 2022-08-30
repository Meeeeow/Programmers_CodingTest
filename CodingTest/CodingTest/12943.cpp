// https://school.programmers.co.kr/learn/courses/30/lessons/12943
// 콜라츠 추측

#include <string>
#include <vector>
#include <iostream>

int solution(int num) {
	long long n = num;
	int Cnt = 0;

	while (true) {

		if (n == 1)
			break;

		n % 2 == 0 ? n /= 2 : n = n * 3 + 1;
		++Cnt;

		if (Cnt == 500) {
			return -1;
		}
	}

	return Cnt;
}

int main() {
	int n = 6;

	int result = solution(n);

	std::cout << result << std::endl;

	return 0;
}