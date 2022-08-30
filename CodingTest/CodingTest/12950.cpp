// https://school.programmers.co.kr/learn/courses/30/lessons/12950
// Çà·ÄÀÇ µ¡¼À

#include <string>
#include <vector>
#include <iostream>

std::vector<std::vector<int>> solution(std::vector<std::vector<int>> arr1, std::vector<std::vector<int>> arr2) {
	std::vector<std::vector<int>> answer;

	size_t Height = arr1.size();
	for (size_t i = 0; i < Height; ++i)
	{
		size_t Width = arr1[i].size();

		std::vector<int> Result;
		Result.reserve(Width);

		for (size_t j = 0; j < Width; ++j)
		{
			Result.push_back(arr1[i][j] + arr2[i][j]);
		}
		answer.push_back(Result);
	}

	return answer;
}

int main() {
	std::vector<std::vector<int>> arr1 = { {1,2} , {2,3} }, arr2 = { {3,4} , {5,6} };

	std::vector<std::vector<int>> result = solution(arr1, arr2);

	for (auto& iter : result)
	{
		for (auto& answer : iter)
			std::cout << answer << " ";

		std::cout << "\n";
	}

	return 0;
}