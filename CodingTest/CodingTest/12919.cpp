// https://school.programmers.co.kr/learn/courses/30/lessons/12919
// 서울에서 김서방 찾기

#include <string>
#include <vector>

//// using strcmp
//std::string solution(std::vector<std::string> seoul) {
//	std::string answer = "김서방은 ";
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
//	answer += std::to_string(Cnt) + "에 있다";
//	
//	return answer;
//}

std::string solution(std::vector<std::string> seoul) {
	std::string answer = "김서방은 ";

	for (size_t i = 0; i < seoul.size(); ++i)
	{
		if (seoul[i] == "Kim")
		{
			return answer + std::to_string(i) + "에 있다";
		}
	}

	return answer;
}


int main() {

	std::vector<std::string> seoul = { "Jane" , "Kim" };

	std::string result = solution(seoul);


	return 0;
}