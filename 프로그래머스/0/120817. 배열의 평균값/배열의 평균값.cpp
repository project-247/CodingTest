#include <vector>
using namespace std;

double solution(vector<int> numbers) {
    int sum = 0;

    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i]; 
    }

    double average = (double)sum / numbers.size();  
    return average;
}
