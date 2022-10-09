/*
Cho một dãy số nguyên dương có n phần tử. Hãy đếm các cặp số nguyên tố cùng nhau trong mảng.

Input Format

Dòng đầu tiên là số lượng phần tử trong mảng n. Dòng thứ 2 là các phần tử ai trong mảng

Constraints

1≤n≤1000; 1≤ai≤10^9

Output Format

In ra số lượng cặp số nguyên tố cùng nhau trong mảng.

Sample Input 0

5
2 4 8 3 6 
Sample Output 0

3
Explanation 0

Các cặp số nguyên tố cùng nhau là : (2, 3), (3, 4), (3, 8)
*/

#include <iostream>
#include <algorithm>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//===========================================
int main ()
{
    FAST_IO;
    int n;
    cin >> n;
    int a[n], cnt = 0;
    for ( auto &it:a) cin >> it;
    for (int i = 0; i < n-1; i ++){
        for ( int j = i+1; j < n; j++){
            if ( __gcd(a[i], a[j]) == 1)
                ++ cnt;
        }
    }
    cout << cnt;
    return 0;
}