// https://school.programmers.co.kr/learn/courses/30/lessons/12916
// 문자열 내 p와 y의 개수

#include <string>
#include <iostream>


bool solution(std::string s)
{
	bool answer = true;

	int pcount = 0, ycount = 0;
	for (auto& ss : s)
	{
		if (ss == 'p' || ss == 'P')
		{
			++pcount;
		}
		else if (ss == 'y' || ss == 'Y')
		{
			++ycount;
		}
	}
	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	std::cout << "Hello Cpp" << std::endl;

	return (pcount == ycount) ? true : false;
}

int main() {
	std::string s = "pPoooyY";

	bool result = solution(s);

	std::cout << result << std::endl;

	return 0;
}