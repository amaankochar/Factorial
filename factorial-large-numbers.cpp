#include <bits/stdc++.h>

using namespace std;

void extraLongFactorials(int n) {

        int i=2;
    int arr[100000] = {0};
    arr[0] = 1;
    int len = 1;
    int x = 0;
    int y = 0;
    while(i<=n)
    {
        x=0;
        y =0;
        while(x<len)
        {
            arr[x] = arr[x] *i;
            arr[x] = arr[x]+y;
            y = arr[x]/10;
            arr[x] = arr[x]%10;
            x++;
        }
        while(y!=0)
        {
            arr[len] = y%10;
            y = y/10;
            len++;
        }
        i++;
    }
    len--;
    while(len>=0)
    {
        cout<<arr[len];
        len = len-1;
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}
