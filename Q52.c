// x ,2x,3x,4x,5x,6x have same digits but permuted

#include<stdio.h>

int form_frequncy_x(int frequency_digit[],long long int number) // for x it forms frequency of digits
  {
    int temp=number;
    while(number!=0)
      {
        int digit=number%10;
        number=number/10;
        frequency_digit[digit]+=1;
      }
  }

int check_same(int frequency_digit[], long long int number) // checks if 2x,3x ... has same digit as x
  {
    int arr[10]={0,0,0,0,0,0,0,0,0,0};
    form_frequncy_x(arr,number);
    for(int i=0;i<10;i++)
      {
        if(frequency_digit[i]!=arr[i])
        {
          return 1;
        }
      }
    return 0;
  }

  int main()
  {
    for(long long int number=100;number<1000000;number++)
      {
        int frequency_digit[10]={0,0,0,0,0,0,0,0,0,0};
        form_frequncy_x(frequency_digit,number);
        for(int j=2;j<7 && check_same(frequency_digit,j*number)==0;j++ )
        {
          if(j==6)
          {
            printf("%lld",number);
          }
        }

      }
   return 0;
  }
