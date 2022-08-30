// https://school.programmers.co.kr/learn/courses/30/lessons/12940
// 최대공약수와 최소공배수

#include <string>
#include <vector>
#include <iostream>

std::vector<int> solution(int n, int m) {
	std::vector<int> answer;

	int a = 0, b = 0;

	if (n > m) {
		a = n;
		b = m;
	}
	else {
		a = m;
		b = n;
	}

	int GCD = 0;
	int LSM = 0;

	while (b != 0)
	{
		int temp = a;
		a = b;
		b = temp % a;
	}

	GCD = a;
	LSM = (n * m) / GCD;

	answer.push_back(GCD);
	answer.push_back(LSM);

	return answer;
}

int main() {
	int n = 3, m = 12;

	std::vector<int> result = solution(n, m);

	for (auto& iter : result)
		std::cout << iter << std::endl;

	return 0;
}