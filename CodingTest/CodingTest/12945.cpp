// https://school.programmers.co.kr/learn/courses/30/lessons/12945
// 피보나치 수열

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    unsigned long long fib[100000];
    fib[0] = 0; fib[1] = 1;
    for (int i = 2; i <= n; ++i) {
        fib[i] = (fib[i - 1] % 1234567 + fib[i - 2] % 1234567) % 1234567;
    }

    return fib[n];
}