// #include "stdio.h"

// int main(void) {
//     int apple_count;
//     printf("amout of apple?");
//     scanf("%d", &apple_count);
//     if (apple_count > 30) {
//         printf("Can not put in one box. \n");
//     }
//     else {
//         printf("Can put in one box \n");
//     }
// }


#include "stdio.h"


int main(void) {
    int age;
    int sex;

    printf("What is your age?");
    scanf("%d", &age);
    printf("What is your sex (M is 1, F is 2");
    scanf("%d", &sex)
    if (sex == 1) {
        printf("You are %d male. \n", age);
    }
    else if (sex==2) {
        printf("You are %d female. \n", age);
    }
    else {
        printf("Mistype your sex. \n");
    }
}