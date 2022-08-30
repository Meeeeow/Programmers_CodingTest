// https://school.programmers.co.kr/learn/courses/30/lessons/12939
// ÃÖ´ñ°ª°ú ÃÖ¼Ú°ª

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

std::string solution(std::string s) {
	std::string answer = "";
	std::string Value = "";
	std::vector<int> Result;

	for (size_t i = 0; i < s.size(); ++i) {

		if (s[i] == ' ') {
			Result.push_back(atoi(Value.c_str()));
			Value.clear();
		}
		else {
			Value += s[i];
		}
	}
	Result.push_back(atoi(Value.c_str()));
	std::sort(Result.begin(), Result.end());

	answer += std::to_string(Result.front()) + " " + std::to_string(Result.back());

	return answer;
}

int main() {
	std::string s = "1 2 3 4";

	std::string result = solution(s);

	std::cout << result << std::endl;

	return 0;
}