#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    // 예외 상황 처리
    
    // 빈 배열 체크
    if (arr.empty())
    {
        answer.push_back(-1);
        return answer;
    }
    
    // 배열에 원소가 하나만 있는 경우
    // 유일한 원소를 제거하면 빈 배열이 되므로 [-1] 리턴
    if (arr.size() == 1)
    {
        answer.push_back(-1);
        return answer;
    }
    
    // 최솟값 찾기
    // min_element는 반복자(iterator)를 리턴하므로 * 연산자로 값을 추출 내부적으로 한 번의 순회로 최솟값을 찾음
    // arr.begin()부터 arr.end()까지 순회하며 최솟값을 찾음
        int min_val = *min_element(arr.begin(), arr.end());
    
    // 최솟값을 제외한 원소들로 새 배열 구성
    // 범위 기반 for문으로 배열의 모든 원소 순회
    for (int num : arr)
    {
        //현재 원소가 최솟값이 아닌 경우만 결과 배열에 추가
        if (num != min_val)
        {
            answer.push_back(num);
        }
    }
    return answer;
}