// 완주하지 못한 선수
// https://school.programmers.co.kr/learn/courses/30/lessons/42576

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>

// For Test
#include <time.h>
#include <stdio.h>

std::string sort_loop_solution(std::vector<std::string> participant, std::vector<std::string> completion) {

	// Sort / Loop

	std::string answer = "";

	std::sort(participant.begin(), participant.end());
	std::sort(completion.begin(), completion.end());

	int i = 0;

	for (; i < completion.size(); ++i) {
		if (participant[i] != completion[i]) {
			break;
		}
	}

	return participant[i];
}

std::string hash_map_solution(std::vector<std::string> participant, std::vector<std::string> completion) {
	std::string answer = "";

	std::unordered_map<std::string, int> map;

	// Hashing
	for (auto runner : participant) {

		if (map.find(runner) == map.end()) {
			map.insert(std::make_pair(runner,1));
		}
		else {
			++map[runner];
		}

	}

	for (auto finish : completion) {
		--map[finish];
	}

	for (auto runner : participant) {
		if (map[runner] > 0) {
			answer = runner;
			break;
		}

	}

	return answer;
}


int main() {

	std::vector<std::string> participant = { "marina", "josipa", "nikola", "vinko", "filipa" };
	std::vector<std::string> completion = { "josipa", "filipa", "marina", "nikola" };
	
	clock_t start, end;
	
	start = clock();
	std::string result = hash_map_solution(participant, completion);
	std::string answer = sort_loop_solution(participant, completion);
	end = clock();
	
	auto time = (float)(end - start);
	
	std::cout << result << std::endl;
	printf("소요시간 : %f \n", time);
	
	system("pause");
	
	return 0;
}