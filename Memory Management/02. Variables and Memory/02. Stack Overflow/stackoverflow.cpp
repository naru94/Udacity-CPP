// stack size: ulimit -s
#include<stdio.h> 
  
void MyFunc() 
{  
    int x = 94;
    printf("94: %p \n", &x);
    MyFunc(); 
} 
  
int main() 
{ 
   MyFunc();

   return 0;
} 