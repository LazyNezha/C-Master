#include <stdio.h>
#define MAX 10000
enum Sex
{
    MALE,
    FEMALE,
    SECRET
};

int main() {
//    const int num = 10;//num就是常变量 - 具有常属性（不能被改变的属性）
//    num = 20;
//    printf("num = %d\n", num);
//
//    int arr[10] = {0};//10个元素
//    int n = 10;
//    int arr[n] = {0};//n是变量，这里是不行
//
//    MAX = 20000;//err
//    int n = MAX;
//    printf("n = %d\n", n);
    printf("%d\n", MALE);
    printf("%d\n", FEMALE);
    printf("%d\n", SECRET);

    return 0;
}
