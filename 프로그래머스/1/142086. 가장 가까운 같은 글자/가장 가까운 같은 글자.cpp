#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    for(int i = 0; i < s.length(); i++) {
        int distance = -1;
        
        // 현재 위치에서 앞쪽으로 같은 문자 찾기
        for(int j = i - 1; j >= 0; j--) {
            if(s[i] == s[j]) {
                distance = i - j;
                break;
            }
        }
        
        answer.push_back(distance);
    }
    
    return answer;
}