#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    int GCD = gcd(n, m);
    int LCM = n*m/GCD;
    answer.push_back(GCD);
    answer.push_back(LCM);
    return answer;
}