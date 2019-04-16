#include <iostream>

using namespace std;

int main(){
    int n,k;
    int a[205][10];
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i ++){
        a[i][1] = 1;
    }
    for(int i = 2 ; i <= n ; i ++)
        for(int j = 2 ; j <= k ; j++){
            if(j <= i){
                a[i][j] = a[i-1][j-1] + a[i - j][j];
            }
        }
    cout << a[n][k] << endl;
    return 0;
}
