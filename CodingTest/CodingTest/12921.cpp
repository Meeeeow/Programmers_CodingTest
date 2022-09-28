// https://school.programmers.co.kr/learn/courses/30/lessons/12921
// 소수 찾기

#include <string>
#include <vector>


unsigned int solution(int n) {
	unsigned int answer = 0;

	bool PrimeNumber[1000001] = { 0, };

	PrimeNumber[0] = PrimeNumber[1] = 1;

	// 에라토스 테네스의 체 사용
	for (int i = 2; i * i < 1000001; ++i) {
		if (!PrimeNumber[i]) {
			for (int j = i * i; j < 1000001; j += i) {
				PrimeNumber[j] = 1;
			}
		}
	}

	for (int i = 1; i < n + 1; ++i) {
		if (!PrimeNumber[i]) {
			++answer;
		}

	}
	return answer;
}


int main() {

	int n = 10;


	unsigned int result = solution(n);

	system("pause");
	return 0;
}