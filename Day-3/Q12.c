#include <stdio.h>

int main() {
    int a, b,orig_a,orig_b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    orig_a=a;
    orig_b=b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("the LCM of a and b is:%d",(orig_a*orig_b)/a);
    return 0;
}