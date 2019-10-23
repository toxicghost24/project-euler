// x ,2x,3x,4x,5x,6x have same digits but permuted

#include<stdio.h>
int t=0;
int merge(long long a[],int b,int m,int c)    //to merge the two arrays
{
	int e,f,g;
	int llen=m-b+1;        //length of the left array
	int rlen=c-m;          //length of the right array
	long long l[llen];
	long long r[rlen];
	for(e=0;e<llen;e++)     //inserting into the left and right array
	{
		l[e]=a[b+e];
	}
	for(f=0;f<rlen;f++)
	{
		r[f]=a[m+1+f];
	}
	e=0;
	f=0;
	g=b;
	while(e<llen && f<rlen)  //condition for inserting the elements in two arrays into the unsorted array
	{
		if(l[e]<=r[f])
		{
			a[g]=l[e];
			e++;
			g++;
		}
		else
		{
			a[g]=r[f];
			f++;
			g++;
		}
	}
	while(e<llen)    //if some elements are left in any of the two array then this is the condition to insert
	{
		a[g]=l[e];
		e++;
		g++;
	}
	while(f<rlen)
	{
		a[g]=r[f];
		g++;
		f++;
	}
	t+=1;    //count will increase for every time merge is used
	return 0;
}
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
