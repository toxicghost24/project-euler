// find the proper divisor then find abundant number
// put it in a sorted array the
//find each number using binary search

#include<stdio.h>
long long int arr[100000];
long int point=0;
long int total=0;

int check_abundant(int number,int sum);

 int  all_divisors(int number)
  {
    int sum=0;
    for(int divisor=1;divisor<=(number/2);divisor++) //
      {
        if(number%divisor==0)
          {
            //printf(" %d ",divisor);
            sum+=divisor;
          }
      }
      check_abundant(number,sum);

  }

 int check_abundant(int number,int sum)
  {
    if(sum>number)
    {
     //printf("\n %d",number);
      arr[point]=number;
      point++;
    }
  }

  int check_ifsum(int numb)
    {
      long int left_index=0;
      long int right_index=point-1;



      while(left_index<=right_index)
        {
          if(arr[left_index]+arr[right_index]>numb)
            {
              right_index--;
            }

          else if(arr[left_index]+arr[right_index]<numb)
            {
              left_index++;
            }
          else
            {
              numb=0;

              break;
            }


        }
        total+=numb;
        printf("%d\n",numb );



    }

int main()
{
  for(int counter=2;counter<28400 ;counter++)
    {
      all_divisors(counter);
    }

    for(int i=28400 ;i>0;i--)
      {
        check_ifsum(i);
      }
printf("\n%ld",total);


}
