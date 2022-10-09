/*
Bộ phim "Die Hard" mới vừa được phát hành! Có n người tại phòng vé rạp chiếu phim đứng thành một hàng lớn. Mỗi người trong số họ có một tờ tiền mệnh giá 100, 50 hoặc 25 rúp. Một vé "Die Hard" có giá 25 rúp. Nhân viên đặt phòng có thể bán vé cho mỗi người và trả tiền thừa nếu ban đầu anh ta không có tiền và bán vé theo đúng thứ tự mọi người trong hàng không?

Input Format

Dòng đầu tiên chứa số nguyên n - số người trong hàng. Dòng tiếp theo chứa n số nguyên, mỗi số bằng 25, 50 hoặc 100 - giá trị của các tờ tiền mà mọi người có

Constraints

1≤n≤10^6

Output Format

In YES nếu người bán hàng có thể bán và trả tiền thừa cho mọi người trong hàng, ngược lại in NO

Sample Input 0

5
25 25 25 50 50 
Sample Output 0

YES
Sample Input 1

2
50 25
Sample Output 1

NO
*/

#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

bool check(int a[], int n)
{
    int r100 = 0, r50 = 0, r25 = 1;
    if (a[0] != 25) return false;
    for ( int i = 1; i < n; i++)
    {
        if (a[i] == 25) r25++;
        else if (a[i] == 50)
        {
            if (r25 == 0) return false;
            ++ r50;
            -- r25;
        }
        else if (a[i] == 100) 
        {
            if (r25 == 0 || r50 == 0) return false;
            ++ r100;
            -- r50;
            -- r25;
        }
    }
    return true;
}

//==============================================
int main ()
{
    FAST_IO;
    int n;
    cin >> n;
    int a[n];
    for (auto &it:a) cin >> it;
    cout << (check(a,n)?"YES":"NO");
    return 0;
}