#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> sums;
    
    for(int i = 0; i < numbers.size() - 1; i++) {
        for(int j = i + 1; j < numbers.size(); j++) {
            sums.push_back(numbers[i] + numbers[j]);
        }
    }
    
    sort(sums.begin(), sums.end());
    
    vector<int> answer;
    for(int i = 0; i < sums.size(); i++) {
        if(i == 0 || sums[i] != sums[i-1]) {
            answer.push_back(sums[i]);
        }
    }
    
    return answer;
}