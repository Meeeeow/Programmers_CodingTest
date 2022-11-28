// https://school.programmers.co.kr/learn/courses/30/lessons/12951
// JadenCase 문자열 만들기


#include <string>
#include <vector>

using namespace std;

string solution(string s) {

    s[0] = toupper(s[0]);
    for (int i = 1; i < s.length(); ++i) {
        s[i - 1] == ' ' ? s[i] = toupper(s[i]) : s[i] = tolower(s[i]);
    }


    return s;
}