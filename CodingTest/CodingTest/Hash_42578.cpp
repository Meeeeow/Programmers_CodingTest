// ¿ß¿Â
// https://school.programmers.co.kr/learn/courses/30/lessons/42578

#include <string>
#include <vector>
#include <unordered_map>

int solution(std::vector<std::vector<std::string>> clothes) {
	int answer = 1;

	std::unordered_map<std::string, int> map;

	for (auto cloth : clothes) {
		map[cloth[1]] += 1;
	}

	for (auto iter = map.begin(); iter != map.end(); ++iter) {
		answer *= iter->second + 1;
	}

	return answer -1;
}

int main() {

	std::vector<std::vector<std::string>> clothes = { {"yellow_hat", "headgear"}, {"blue_sunglasses", "eyewear"}, {"green_turban", "headgear"} };

	int result = solution(clothes);

	system("pause");
	return 0;
}