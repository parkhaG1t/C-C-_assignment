#include <stdio.h>

void gcd(int a, int b) {
    int r = 1;
    int q = 0;
    int d = 0;
    while(r != 0){

        q = a/b;
        r = a%b;

        printf("%d = %d x %d + %d\n", a, b, q, r);
        if(r == 0){
            d = b;
        }
        a = b, b = r;
    }
    printf("�ִ����� : %d", d);
}

int main(void){
    int num1;
    int num2;
    
    

    printf("ū �� �Է�: ");
    scanf("%d", &num1);
    printf("���� �� �Է�: ");
    scanf("%d", &num2);

    gcd(num1, num2);

    return 0;
}