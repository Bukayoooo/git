#include <stdio.h>

void func1() {
    printf("func1 written on windows!\n");
}

void func2() {
    print("func2 written on vi!\n");
}

void func3() {

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
