// https://school.programmers.co.kr/learn/courses/30/lessons/12919
// ���￡�� �輭�� ã��

#include <string>
#include <vector>

//// using strcmp
//std::string solution(std::vector<std::string> seoul) {
//	std::string answer = "�輭���� ";
//
//	int Cnt = 0;
//
//	for (auto& iter : seoul)
//	{
//		if (!strcmp(iter.c_str(), "Kim"))
//			break;
//		Cnt++;
//	}
//
//	answer += std::to_string(Cnt) + "�� �ִ�";
//	
//	return answer;
//}

std::string solution(std::vector<std::string> seoul) {
	std::string answer = "�輭���� ";

	for (size_t i = 0; i < seoul.size(); ++i)
	{
		if (seoul[i] == "Kim")
		{
			return answer + std::to_string(i) + "�� �ִ�";
		}
	}

	return answer;
}


int main() {

	std::vector<std::string> seoul = { "Jane" , "Kim" };

	std::string result = solution(seoul);


	return 0;
}