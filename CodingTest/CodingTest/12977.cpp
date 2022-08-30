// https://school.programmers.co.kr/learn/courses/30/lessons/12977
// 소수 만들기

#include <vector>
#include <iostream>

void EratosPrime(bool array[], int count) {
	array[0] = array[1] = 1;
	for (int i = 2; i * i < count; ++i) {

		if (!array[i]) {

			for (int j = i*i; j < count; j += i) {
				array[j] = 1;
			}
		}
	}
}

int solution(std::vector<int> nums) {
	int answer = 0;
	bool PrimeNumbers[3001] = { 0, };
	EratosPrime(PrimeNumbers, 3001);

	std::cout << "Hello Cpp" << std::endl;

	std::vector<int> PrimeCheck;

	size_t numsize = nums.size();
	for (size_t i = 0; i < numsize; ++i) {

		for (size_t j = i + 1; j < numsize; ++j) {

			for (size_t k = j + 1; k < numsize; ++k) {
				PrimeCheck.push_back(nums[i] + nums[j] + nums[k]);
			}
		}
	}

	size_t CheckSize = PrimeCheck.size();

	for (size_t i = 0; i < CheckSize; ++i) {
		if (PrimeNumbers[PrimeCheck[i]] == false) {
			++answer;
		}
	}
	return answer;
}

int main() {
	std::vector<int> nums = { 1,2,3,4 };

	int result = solution(nums);

	std::cout << result << std::endl;

	return 0;
}