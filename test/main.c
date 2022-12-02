#include <stdio.h>
#include <math.h>

int main () {
    int i = 0;
    for (i = 100; i <= 200; i++) {
        //判断i是否为素数
        //2 -> i-1之间的数字去试除i，看能不能整除
        int j = 0;
        //m = a * b
        //a和b中一定至少有一个数字是<=开平方m的
        //16 = 2 * 8 = 4 * 4
        int flag = 1;//假设i就是素数
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                flag = 0;//不是素数
                break;
            }
        }
        if (flag == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}