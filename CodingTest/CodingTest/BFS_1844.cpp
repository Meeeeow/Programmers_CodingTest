// https://school.programmers.co.kr/learn/courses/30/lessons/1844
// 게임 맵 최단거리

#include <vector>
#include <queue>

typedef struct tagPosition {
	tagPosition(int _y, int _x)
		: y(_y), x(_x)
	{

	}

	int			y;
	int			x;

}POS;


int solution(std::vector<std::vector<int>> maps)
{
	int n = maps.size();
	int m = maps[0].size();

	std::vector<int> height = { -1, 1 , 0 , 0 };
	std::vector<int> width = { 0, 0, -1, 1 };

	std::vector<std::vector<bool>> Check(n, std::vector<bool>(m));
	std::vector<std::vector<int>> Distance(n, std::vector<int>(m));

	std::queue<POS> BFS;

	BFS.push(POS(0, 0));
	Check[0][0] = true;
	Distance[0][0] = 1;

	while (!BFS.empty()) {
		POS Position = BFS.front();
		BFS.pop();

		int CurY = Position.y;
		int CurX = Position.x;

		for (int i = 0; i < 4; ++i) {
			int NextY = CurY + height[i];
			int NextX = CurX + width[i];

			if (NextY < 0 || NextY >= n || NextX < 0 || NextX >= m) // 맵을 벗어난 경우
				continue;
			if (maps[NextY][NextX] == 0) // 벽인 경우
				continue;
			if (Check[NextY][NextX]) // 이미 들른 경우
				continue;

			BFS.push(POS(NextY, NextX));
			Check[NextY][NextX] = true;
			Distance[NextY][NextX] = Distance[CurY][CurX] + 1; // 기존 길이에 +1
		}

	}

	return (!Check[n - 1][m - 1]) ? -1 : Distance[n - 1][m - 1];
}