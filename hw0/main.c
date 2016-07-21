#include <stdio.h>
#include <sys/time.h>
#include <sys/resource.h>


//GOOGLE MAN STRUCT RLMIT THEN YOU WILL GET AN IDEA ON HOW TO DO THIS OKAY?
int main() {
    struct rlimit lim;
    // print the following values using rlimit
    printf("stack size: %d\n",  0);
    printf("process limit: %d\n", 0);
    printf("max file descriptors: %d\n", 0);
}
