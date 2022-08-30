// https://school.programmers.co.kr/learn/courses/30/lessons/42626
// ´õ ¸Ê°Ô

#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>
#include <iostream>


int solution(std::vector<int> scoville, int K) {
	int answer = 0;

	std::priority_queue<int, std::vector<int>, std::greater<int>> PQ;

	size_t ss = scoville.size();

	for (size_t i = 0; i < ss; ++i)
	{
		PQ.push(scoville[i]);
	}

	size_t k = ss - 1;
	while (k--) {

		int v1 = PQ.top();
		PQ.pop();
		int v2 = PQ.top();
		PQ.pop();

		++answer;
		PQ.push(v1 + v2 * 2);

		if (PQ.top() >= K)
		{
			return answer;
		}
	}

	return -1;
}

int main() {
	std::vector<int> scoville = { 1,2,3,9,10,12 };
	int K = 7;

	int result = solution(scoville, K);

	std::cout << result << std::endl;

	return 0;
}