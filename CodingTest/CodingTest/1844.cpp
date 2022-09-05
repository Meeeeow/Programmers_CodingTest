// https://school.programmers.co.kr/learn/courses/30/lessons/1844
// 게임 맵 최단거리

#include <vector>
#include <queue>

using namespace std;

typedef struct tagPosition {
	tagPosition(int _y, int _x)
		: y(_y), x(_x)
	{
	}
	int		x;
	int		y;

}POS;

int solution(std::vector<std::vector<int>> maps) {
	int answer = 0;

	int N = maps.size();
	int M = maps[0].size();

	// 상하좌우
	std::vector<int> MoveY = { -1, 1, 0, 0 };
	std::vector<int> MoveX = { 0, 0, -1, 1 };

	std::vector<std::vector<bool>> Checked(N, std::vector<bool>(M));
	std::vector<std::vector<int>> Distance(N, std::vector<int>(M));

	std::queue<POS> BFS;

	// 출발지 0, 0 고정.
	BFS.push(POS(0, 0));
	Checked[0][0] = true;
	Distance[0][0] = 1;

	while (!BFS.empty()) {

		POS Position = BFS.front();
		BFS.pop();

		int	CurY = Position.y;
		int CurX = Position.x;

		for (int i = 0; i < 4; ++i) {
			int NextY = CurY + MoveY[i];
			int NextX = CurX + MoveX[i];

			if (NextY < 0 || NextY >= N || NextX < 0 || NextX >= M) // 맵을 벗어난 경우. 맵의 크기 [N][M];
				continue;
			if (maps[NextY][NextX] == 0) // 상하좌우 움직였을 때 0. 즉 벽인지 체크함.
				continue;
			if (Checked[NextY][NextX]) // 이미 길이 등록된 곳은 무시함. 
				continue;

			BFS.push(POS(NextY, NextX));
			Checked[NextY][NextX] = true;
			Distance[NextY][NextX] = Distance[CurY][CurX] + 1; // 거리 값에 +1;
		}

	}


	return (!Checked[N - 1][M - 1]) ? -1 : Distance[N - 1][M - 1];
}


int main() {
	std::vector<std::vector<int>> map{
		{1, 0, 1, 1, 1},
		{1, 0, 1, 0, 1},
		{1, 0, 1, 1, 1},
		{1, 1, 1, 0, 1},
		{0, 0, 0, 0, 1}
	};

	int Result = solution(map);


	return 0;
}