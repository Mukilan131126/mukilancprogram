// #include <stdio.h>

// Create a function
// void myFunction() {
//   printf("I just got executed!");
// }

// int main() {
//   myFunction(); // call the function
//   return 0;
// }


#include <stdio.h>

// int myDigits(int a, int b) {
//     return a + b;
// }

// int main() {
//     int a = 2;
//     int b = 3;
//     int num = myDigits(a, b);
//     printf("The sum of %d and %d is: %d\n", a, b, num);
//     return 0;
// }

int mySub(int a, int b){
    return a-b;
}

int main(){
    int a =45;
    int b=34;
    int result = mySub(a,b);
    printf("the sub of %d and %d is:%d\n", a,b,result);
    return 0;
}