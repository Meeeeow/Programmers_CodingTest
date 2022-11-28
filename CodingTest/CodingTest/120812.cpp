// https://school.programmers.co.kr/learn/courses/30/lessons/120812
// 최빈값 구하기

#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
	map<int, int> classify;
	
	for (auto& vec : array) {
		map<int, int>::iterator iter = classify.find(vec);
		if (iter == classify.end()) {
			classify.emplace(vec, 1);
		}
		else {
			iter->second++;
		}
	}

	vector<pair<int, int>> counts;

	for (auto& count : classify) {
		counts.push_back({ count.first, count.second });
	}

	sort(counts.begin(), counts.end(), [](pair<int, int>& a, pair<int, int>& b) {
		return a.second > b.second;
		});

	if (counts[0].second == counts[1].second) {
		return -1;
	}

	return counts[0].first;
}


int main() {

	vector<int> ar = { 1,2,3,3,3,4,2 };

	int result = solution(ar);

	return 0;
}