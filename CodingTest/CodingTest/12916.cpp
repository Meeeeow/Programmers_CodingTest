// https://school.programmers.co.kr/learn/courses/30/lessons/12916
// ���ڿ� �� p�� y�� ����

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
	// [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
	std::cout << "Hello Cpp" << std::endl;

	return (pcount == ycount) ? true : false;
}

int main() {
	std::string s = "pPoooyY";

	bool result = solution(s);

	std::cout << result << std::endl;

	return 0;
}