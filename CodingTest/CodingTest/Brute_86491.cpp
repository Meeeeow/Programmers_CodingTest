// 최소 직사각형
// https://school.programmers.co.kr/learn/courses/30/lessons/86491

#include <vector>
#include <string>
#include <map>

using namespace std;

int solution(vector<vector<int>> sizes) {
	int Width = 0, Height = 0;

	for (auto& values : sizes) {

		if (values[0] > values[1]) { // Width > Height

			Width = max(Width, values[0]);
			Height = max(Height, values[1]);
		}
		else {

			Width = max(Width, values[1]);
			Height = max(Height, values[0]);
		}

	}


	return Width * Height;
}

int main() {

	return 0;
}