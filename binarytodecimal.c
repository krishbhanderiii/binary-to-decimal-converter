#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{   
    int decimal = 0, i = 0, reminder;
    long long n;
    printf("enter a binary number\n");
    scanf("%lld",&n);
   
     while (n != 0) {
        reminder = n % 10;
        n /= 10;
        decimal =decimal+ reminder * pow(2, i);
        ++i;
    }
  printf("%d",decimal);
    return 0;
}
 