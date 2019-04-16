#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n,m;
    int a[40][40];
    cin >> n >> m;
    memset(a , 0 , sizeof(a));
    a[1][0] = 1;
    for(int j = 1 ; j <= m ; j ++){
        a[1][j] = a[2][j-1] + a[n][j-1];
        for(int i =2 ; i <= n-1 ; i ++){
                a[i][j] = a[i-1][j-1] + a[i+1][j-1];
            }
        a[n][j] = a[1][j-1] + a[n-1][j-1];
        }
    cout << a[1][m] << endl;
    return 0;
}

