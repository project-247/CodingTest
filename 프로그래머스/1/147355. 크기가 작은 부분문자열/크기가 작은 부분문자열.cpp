#include <string>
#include <vector>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int len = p.size();
    long long pVal = stoll(p);
    
    for (int i = 0; i <= (int)t.size() - len; i++) {
        string sub = t.substr(i, len);
        long long val = stoll(sub);
        if (val <= pVal) answer++;
    }
    return answer;
}