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



int main()
	{
		long long int prime[1000000];
		long long int count=-1;

		for(long long int odd_number=3;odd_number<800000;odd_number+=2)
				{
					if(check_prime(odd_number)==1)
							{
								prime[++count]=odd_number;
							}
					else
						{
							//printf("%ld\n",odd_number);
							for(int i=0;i<=count;i++)
									{	
										if((odd_number-prime[i])%2==0)
											{
												double number=(odd_number-prime[i])/2;
												double square_root=sqrt(number);
												
												if(square_root-floor(square_root)==0)
													{
														//printf("%lf %ld\n",square_root,odd_number);
														break;
													}
											if(i==count)
												{
													printf("%lld",odd_number);
												}
											}
									}
						}
					
					
					
					
				}

	}