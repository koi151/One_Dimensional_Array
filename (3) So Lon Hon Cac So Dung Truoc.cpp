/*
Cho một dãy số nguyên dương có n phần tử. Hãy liệt kê số các phần tử trong dãy lớn hơn tất cả các số đứng trước nó (Phần tử đầu tiên được coi là một phần tử thỏa mãn).

Input Format

Dòng đầu tiên là số lượng phần tử trong mảng. Dòng thứ 2 là N phần tử trong mảng.

Constraints

2≤n≤10^6; 1≤ai≤10^9

Output Format

Liệt kê các số thỏa mãn

Sample Input 0

6
2 6 1 3 9 9
Sample Output 0

2 6 9
*/

#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//==============================
int main (){
    FAST_IO;
    int n;
    cin >> n;
    int a[n], max = -1;
    for (auto &it:a) cin >> it;
    for (int i = 0; i < n; i ++){
        if (max < a[i]){
            max = a[i];
            cout << a[i] << ' ';
        }
    }
    return 0;
}

