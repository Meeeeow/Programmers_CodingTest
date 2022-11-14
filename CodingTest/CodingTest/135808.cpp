// 과일 장수
// https://school.programmers.co.kr/learn/courses/30/lessons/135808

#include <vector>
#include <algorithm>

int solution(int k, int m, std::vector<int> score) {
	if (score.size() <= m) {
		return 0;
	}
	int answer = 0;
	int box = score.size() / m;

	std::sort(score.begin(), score.end(), std::greater<int>());

	for (int i = 0; i < box; ++i) {
		answer += score[(m - 1) + (m * i)] * m;
	}

	return answer;
}

int main() {
	std::vector<int> tester1 = { 1, 2, 3, 1, 2, 3, 1 };
	std::vector<int> tester2 = { 4, 1, 2, 2, 4, 4, 4, 4, 1, 2, 4, 2 };

	int answer1 = solution(3, 4, tester1);
	int answer2 = solution(4, 3, tester2);

	return 0;
}