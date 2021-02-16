//You will be given two numbers stored in variables 'a' and 'b'. Your task is to swap the values present and print them.
//Example
//input: 
//4 5
//output: 
//5 4

#include<stdio.h>

int main()
{
    int a, b, temp;
    scanf("%d%d", &a, &b);
  printf(" %d %d are the values of a and b before swaqpping\n",a,b);
    //Write your code here
      temp=a;
      a=b;
      b=temp;
    

  
    printf("%d %d are the value of a and b after swapping\n", a, b);
    return 0;
}
