// 가장 큰 수
// https://school.programmers.co.kr/learn/courses/30/lessons/42746?language=cpp

#include <string>
#include <vector>
#include <algorithm>

bool comp(std::string a, std::string b) {
	return a + b > b + a;
}

std::string solution(std::vector<int> numbers) {
	std::string answer = "";

	std::vector<std::string> temp;

	for (auto num : numbers) {
		temp.emplace_back(std::to_string(num));
	}

	std::sort(temp.begin(), temp.end(), comp);


	if (temp.at(0) == "0")
		return "0";

	for (auto num : temp) {
		answer += num;
	}

	return answer;
}

int main() {

	std::vector<int> numbers = { 6,10,2 };

	std::string result = solution(numbers);

	return 0;
}