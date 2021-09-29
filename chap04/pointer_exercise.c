#include <stdio.h>

int main(void)
{
    int i;
    int *pi;

    printf("i의 크기: %d\n", sizeof(i));
    printf("pi의 크기: %d\n", sizeof(pi));

    //i와 pi의 값을 확인
    printf("i의 값: %d\n", i);
    printf("pi의 값: %d\n", pi);

    // i와 pi의 주소 확인
    printf("i의 주소: %d\n", &i);
    printf("pi의 주소: %d\n", &pi);

    // pi가 가리키는 곳에 정수 5를 저장
    *pi = 5;

    return 0;
}
