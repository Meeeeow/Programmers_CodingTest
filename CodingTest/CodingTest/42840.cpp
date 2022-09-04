// https://school.programmers.co.kr/learn/courses/30/lessons/42840
// 모의고사

#include <string>
#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int> answers) {

	std::vector<int> answer;

	std::vector<int> Tester1 = { 1,2,3,4,5 };
	std::vector<int> Tester2 = { 2,1,2,3,2,4,2,5 };
	std::vector<int> Tester3 = { 3,3,1,1,2,2,4,4,5,5 };

	std::vector<int> Result = { 0, 0 ,0 };

	for (size_t i = 0; i < answers.size(); ++i) {
		if (answers[i] == Tester1[i % 5])
			++Result[0];
		if (answers[i] == Tester2[i % 8])
			++Result[1];
		if (answers[i] == Tester3[i % 10])
			++Result[2];
	}

	int Max = *std::max_element(Result.begin(), Result.end());

	for (int i = 0; i < 3; ++i) {
		
		if (Max == Result[i])
			answer.push_back(i + 1);

	}

	return answer;	
}

int main() {
	std::vector<int> answers = { 1,3,2,4,2 };

	std::vector<int> result = solution(answers);


	return 0;
}