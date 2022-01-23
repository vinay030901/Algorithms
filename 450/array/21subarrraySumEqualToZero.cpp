#include<bits/stdc++.h>
using namespace std;
#define xx long long
#define foi(xxxxx) for(xx yyyyy=0;yyyyy<xxxxx;yyyyy++)
typedef vector<xx>          vll;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    xx xxxxxxxxx; cin >> xxxxxxxxx;
    while (xxxxxxxxx--)
    {
        int yy;
        cin >> yy;
        int  yyy = 2;
        int   yyyy = 3;
        for (int yyyyy = 0; yyyyy < yy; yyyyy++) {
            cout << yyy << " ";
            if (yyyyy & 1) {
                yyy += 3;
            }
            else {
                yyy++;
            }
        }
        cout << endl;
    }
    return 0;
}