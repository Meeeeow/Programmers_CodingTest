// https://school.programmers.co.kr/learn/courses/30/lessons/43165
// Å¸°Ù ³Ñ¹ö

#include <string>
#include <vector>


void make_target_number(std::vector<int> numbers, int target, int index, int signnum, int* answer) {

	if (numbers.size() == index) {
		if (target == signnum) {
			(*answer) += 1;
		}

		return;
	}

	make_target_number(numbers, target, index + 1, signnum + numbers[index], answer);
	make_target_number(numbers, target, index + 1, signnum - numbers[index], answer);
}

int solution(std::vector<int> numbers, int target) {
	int answer = 0;

	make_target_number(numbers, target, 0, 0, &answer);

	return answer;
}

int main() {

	std::vector<int> numbers(5, 1);

	int result = solution(numbers, 3);

	return 0;
}