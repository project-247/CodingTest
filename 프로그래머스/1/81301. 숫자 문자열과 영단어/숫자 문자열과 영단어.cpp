#include <string>
#include <vector>

using namespace std;

int solution(string s) // 문자열 배열 vector<char> s = {'o','n','e','4','s','e','v','e','n','e','i','g','h','t'}; 
{ 
    int answer = 0;
    vector<string> A = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string Save;
    string RealSave;
    for (int i = 0; i < s.size(); ++i) // string s 를 받음, string s[i] 
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            Save += s[i];
        
            for (int j = 0; j < A.size(); ++j)
            {
                if (Save == A[j])
                {
                    RealSave += to_string(j); //정수값을 string으로 변경
                    Save = "";
                    break;
                }           
            }
        }
        else 
        {
            RealSave += s[i];
            // RealSave = "1478";
        }
    }
    
    return stoi(RealSave);
}