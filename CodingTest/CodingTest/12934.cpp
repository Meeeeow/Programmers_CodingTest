// https://school.programmers.co.kr/learn/courses/30/lessons/12934
// 정수 제곱근 판별

#include <vector>
#include <string>
#include <cmath>

long long solution(long long n) {
	long long x = std::sqrt(n);

	if ((x * x) == n) {
		return pow(x + 1, 2);
	}

	return -1;
}


int main() {

	long long result = solution(11);


	return 0;
}