// https://school.programmers.co.kr/learn/courses/30/lessons/12948
// 핸드폰 번호 가리기

#include <string>
#include <vector>
#include <iostream>

std::string solution(std::string phone_number) {
	
	size_t len = phone_number.length() - 4;
	std::string star = "";
	star.append(len, '*');
	
	phone_number.replace(0, len, star);


	return phone_number;
}

int main() {

	std::string phone_number = "01033334444";
	
	phone_number = solution(phone_number);

	std::cout << phone_number << std::endl;

	
	system("pause");

	return 0;
}