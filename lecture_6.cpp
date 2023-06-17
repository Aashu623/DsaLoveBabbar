#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, i{0}, bit, ans{0};
    cout << "Enter Decimal number to convert in binary : " << endl;
    cin >> num;
    while (num != 0)
    {
        bit = num & 1;
        cout << bit << endl;
        ans = pow(10, i) * bit + ans;
        cout << ans << endl;
        cout<<endl;
        num = num >> 1;
        i++;
    }
    cout << "Binary number is : " << ans << endl;
    // cout << "Enter Binary number to convert in decimal : " << endl;
    // cin >> num;
    // i = 0, ans = 0;
    // int digit;
    // while (num != 0)
    // {
    //     digit = num % 10;
    //     if (digit == 1)
    //     {
    //         ans = ans + pow(2, i);
    //     }
    //     num /= 10;
    //     i++;
    // }
    // cout << "Binary number is : " << ans << endl;

    return 0;
}