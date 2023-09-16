#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;

int solution(vector<int>& A) {
    int result = 0;
    for (int i = 0; i < A.size(); i++) {
        result ^= A[i];
    }
    return result;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vector<int> A = { 9, 3, 9, 3, 9, 7, 9 };
    int result = solution(A);
    cout << "Неспарений елемент: " << result << endl;
    return 0;
}
