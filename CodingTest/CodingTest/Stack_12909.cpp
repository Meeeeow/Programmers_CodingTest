// https://school.programmers.co.kr/learn/courses/30/lessons/12909
// ¿Ã¹Ù¸¥ °ýÈ£

#include <string>
#include <stdio.h>
#include <stack>

using namespace std;

bool solution(string s) {
	bool answer = true;

	if (s[0] == ')') {
		return false;
	}

	stack<char> stk;

	for (size_t i = 0; i < s.length(); ++i) {

		if (s[i] == '(') {
			stk.push('(');
		}
		else {
			if ( (!stk.empty()) && (stk.top() == '(') ) {
				stk.pop();
			}
			else {
				stk.push(')');
			}
		}
	}

	if (stk.empty()) {
		answer = true;
	}
	else {
		answer = false;
	}


	printf_s("%s is %d \n", s.c_str(), answer);

	return answer;
}

int main() {

	solution("()()");
	solution("(())()");
	solution("(()(");


	system("pause");

	return 0;
}