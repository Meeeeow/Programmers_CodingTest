// https://school.programmers.co.kr/learn/courses/30/lessons/42862
// Ã¼À°º¹

#include <string>
#include <vector>
#include <algorithm>



int solution(int n, std::vector<int> lost, std::vector<int> reserve) {
	int answer = 0;
	
	std::vector<int> students(n + (size_t)2, 1);
	for (auto losts : lost) {
		students[losts] -= 1;
	}
	for (auto reserves : reserve) {
		students[reserves] += 1;
	}

	for (size_t i = 1; i < students.size(); ++i) {

		if (students[i] == 2) {
			if (students[i - 1] == 0) {
				students[i - 1] += 1;
				students[i] -= 1;
				continue;
			}
			if (students[i + 1] == 0) {
				students[i + 1] += 1;
				students[i] -= 1;
				continue;
			}
		}
	}

	for (auto numbers : students) {
		if (numbers >= 1) {
			answer++;
		}
	}
	return answer - 2;
}

int main() {

	return 0;
}