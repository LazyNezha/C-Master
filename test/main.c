#include <stdio.h>

struct Stu {
    char name[20];
    int age;
    double score;
};

int main () {
    struct Stu s = {"张三", 20, 85.5};
    printf("1: %s %d %lf\n", s.name, s.age, s.score);

    struct Stu * ps = &s;
    printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
    printf("3: %s %d %lf\n", ps -> name, ps -> age, ps -> score);

    return 0;
}