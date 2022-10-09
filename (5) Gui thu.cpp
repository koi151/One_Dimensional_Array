/*
Tất cả các thành phố của Lineland đều nằm trên trục tọa độ Ox. 
Do đó, mỗi thành phố được liên kết với vị trí xi - tọa độ trên trục Ox. 
Không có hai thành phố được đặt tại một điểm. 
Cư dân Lineland thích gửi thư cho nhau. 
Một người chỉ có thể gửi thư nếu người nhận sống ở một thành phố khác. 
Chi phí gửi thư chính xác bằng khoảng cách giữa thành phố của người gửi và thành phố của người nhận. 
Đối với mỗi thành phố, hãy tính hai giá trị mini và maxi, trong đó mini là chi phí tối thiểu để gửi thư từ 
thành phố thứ i đến một thành phố khác và maxi là chi phí tối đa để gửi thư từ thành phố thứ i đến một số 
thành phố khác

Input Format

Dòng đầu tiên là số nguyên dương n Dòng thứ hai chứa chuỗi n số nguyên khác nhau x1, x2, ..., xn (-10^9<= xi <=10^9), trong đó xi là tọa độ x của thành phố thứ i. Tất cả các xi là khác biệt và theo thứ tự tăng dần.

Constraints

2 ≤ n ≤ 10^6; -10^9 ≤ xi ≤ 10^9

Output Format

Đối với mỗi thành phố in ra 2 giá trị mini và maxi trên 1 dòng.

Sample Input 0

4
-5 -2 2 7
Sample Output 0

3 12
3 9
4 7
5 12
*/

#include <iostream>
#include <cmath>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//=========================================
int main()
{
    FAST_IO;
    int n; 
    cin >> n;
    int a[n];
    for (auto &it:a) cin >> it;
    cout << abs(a[1]-a[0]) << ' ' << abs(a[n-1]-a[0]) << '\n'; 
    for ( int i = 1; i < n-1; i++)
    {
        cout << min(abs(a[i+1] - a[i]), abs(a[i] - a[i-1])) << ' ' << max(abs(a[n-1]-a[i]),abs(a[0]-a[i])) << '\n';
    }
    cout << abs(a[n-1] - a[n-2]) << ' ' << abs(a[n-1] - a[0]);
    return 0;
}
