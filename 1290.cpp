/*************************************************************************
	> File Name: homework.cpp
	> Author: sudingquan
	> Mail: 1151015256@qq.com
	> Created Time: 二  4/23 10:41:05 2019
 ************************************************************************/

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, b, n;
    scanf("%d", &n);
    while (n --) {
        scanf("%d%d", &a, &b);
        while(true) {
            int x = 0;
            if(a == b) {
                printf("Stan wins\n");
                break;
            } else if (a > b) {
                if (a % b == 0) {
                    printf("Stan wins\n");
                    break;
                } else if (a / b > 1) {
                    printf("Stan wins\n");
                    break;
                } else { 
                    a -= b;
                    x ++;
                }
            } else {
                if (b % a == 0) {
                    printf("Ollie wins\n");
                    break;
                } else if (b / a > 1) {
                    printf("Ollie wins\n");
                    break;
                } else {
                    b -= a;
                    x ++;
                }
            }
        }
    }
    return 0;
}
