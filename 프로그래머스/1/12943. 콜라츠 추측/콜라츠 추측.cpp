#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long n = num;
    while(n != 1) {
        if (n & 1)
            n = n * 3 + 1;
        else n /= 2;
        answer++;
        if (answer >= 500) {
            answer = -1;
            break;
        }
    }
    
    return answer;
}