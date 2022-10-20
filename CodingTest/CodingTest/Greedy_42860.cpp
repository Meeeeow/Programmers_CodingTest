// https://school.programmers.co.kr/learn/courses/30/lessons/42860
// ¡∂¿ÃΩ∫∆Ω

#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

int solution(std::string name) 
{
	int answer = 0;

	size_t shift = name.length() - 1;

	for (size_t i = 0; i < name.length(); ++i) {
		answer += std::min('Z' - name[i] + 1, name[i] - 'A');

		int j = i + 1;
		while (j < name.length() && name[j] == 'A') {
			j++;
		}

		shift = std::min(shift, std::min((2 * i) + name.length() - j, 2 * (j - name.length()) + i));
	}

	answer += shift;

	return answer;
}


int main() {

	return 0;
}