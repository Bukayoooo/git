#include <stdio.h>

void func1() {
    printf("func1 written on windows!");
}

int main() {
//<<<<<<< HEAD
    printf("hello git in master!\n");
//=======
    printf("hello git in dev!\n");
//>>>>>>> dev

    func1();

    return 0;
}
