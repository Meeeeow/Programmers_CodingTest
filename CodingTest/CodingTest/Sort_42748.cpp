// K¹øÂ° ¼ö
// https://school.programmers.co.kr/learn/courses/30/lessons/42748

#include <string>
#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int> array, std::vector<std::vector<int>> commands) {
	std::vector<int> answer;

	for (auto ijk : commands) {
		std::vector<int> temp;

		int i = ijk[0] - 1, j = ijk[1], k = ijk[2] -1;

		for (int n = i; n < j; ++n) {
			temp.emplace_back(array[n]);
		}

		std::sort(temp.begin(), temp.end());

		answer.emplace_back(temp[k]);
	}

	return answer;
}

int main() {

	std::vector<int> array = { 1,5,2,6,3,7,4 };
	std::vector<std::vector<int>> commands = { {2,5,3} , {4,4,1} , {1,7,3} };

	std::vector<int> result = solution(array, commands);

	return 0;
}