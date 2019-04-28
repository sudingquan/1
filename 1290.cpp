/*************************************************************************
	> File Name: homework.cpp
	> Author: sudingquan
	> Mail: 1151015256@qq.com
	> Created Time: 二  4/23 10:41:05 2019
 ************************************************************************/

#include <iostream>
#include <cstdio>

using namespace std;

int f(long long a, long long b, int s) {
    if (a < b){
        swap(a, b);
    }
    if (a / b > 1 || a % b == 0) {
        return s;
    }
    return f(a - b, b ,(s + 1) % 2);
}

int main() {
    int n;
    long long a, b;
    scanf("%d", &n);
    while (n --) {
        scanf("%lld%lld", &a, &b);
        if (f(a, b, 0) == 0) {
            printf("Stan wins\n");
        } else {
            printf("Ollie wins\n");
        }
    }
    return 0;
}
