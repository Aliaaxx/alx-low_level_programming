#include <stdio.h>

int main() {
int i;
for (i = 1; i<101; i++)
{
if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("FizzBuzz");
else
printf("%d", i);
printf(" ");
}
return 0;
}
