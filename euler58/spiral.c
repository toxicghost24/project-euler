#include<stdio.h>
#include<math.h>



int check_prime(long long int number)
	{
		for(int i=3;i<sqrt(number)+1;i+=2)
			{
				if(number%i==0)
					{	
						return 0;

					}
			}
		//printf("%lld\n",number);
		return 1;
	}

float check_ratio(long int primes,long long int i)
	{	long long int total=0;
		
		
					
					
							
								 double ratio=0;
								float num1=primes;
								float num2=(i-1)*2+1;


								ratio=(num1/num2);
								printf("%lf\n",ratio);

								return ratio;

							
				
		
		
	}

int main()
{
long int number_primes=0;
	for(long long int i=3;i<100000;i+=2)
		{	long long int square=i*i;
			//number_primes+=check_prime(square);
			number_primes+=check_prime(square-(i-1));
			number_primes+=check_prime(square-2*(i-1));
			number_primes+=check_prime(square-3*(i-1));

			if(check_ratio(number_primes,i)<0.1)
			{
				printf("%lld",i);
				break;
			}


		}
}


	

	
