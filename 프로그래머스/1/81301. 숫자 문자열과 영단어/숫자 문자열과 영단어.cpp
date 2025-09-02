#include <string>
#include <vector>

using namespace std;

int solution(string s) 
{
    string out;
    int i = 0;
    while (i < (int)s.size()) 
    {
        if (s[i] >= '0' && s[i] <= '9') 
        {
            out.push_back(s[i]);
            i++;
            continue;
        }
        if (s.compare(i, 4, "zero") == 0) { out += '0'; i += 4; }
        else if (s.compare(i, 3, "one") == 0) { out += '1'; i += 3; }
        else if (s.compare(i, 3, "two") == 0) { out += '2'; i += 3; }
        else if (s.compare(i, 5, "three") == 0) { out += '3'; i += 5; }
        else if (s.compare(i, 4, "four") == 0) { out += '4'; i += 4; }
        else if (s.compare(i, 4, "five") == 0) { out += '5'; i += 4; }
        else if (s.compare(i, 3, "six") == 0) { out += '6'; i += 3; }
        else if (s.compare(i, 5, "seven") == 0) { out += '7'; i += 5; }
        else if (s.compare(i, 5, "eight") == 0) { out += '8'; i += 5; }
        else if (s.compare(i, 4, "nine") == 0) { out += '9'; i += 4; }
        else 
        {
            i++;
        }
    }
    long long val = 0;
    for (int k = 0; k < (int)out.size(); k++) 
    {
        val = val * 10 + (out[k] - '0');
    }
    return (int)val;
}