#include <stdio.h>

void func1() {
    printf("func1 written on clion!");
}

void func2() {
    printf("func2 written on vi!\n");
}

void func3() {
    printf("func1 written on clion!");
}

int main() {
//<<<<<<< HEAD
    printf("hello git in master!\n");
//=======
    printf("hello git in dev!\n");
//>>>>>>> dev

    func1(); //

    return 0;
}
