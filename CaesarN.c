#include <unistd.h>

void 	ROT13(char *ROT,int n)
{
	int	i;
	
	i = 0;
	while(ROT[i])
	{
		
		if(ROT[i] <= 90 && ROT[i] >= 65)
		{
			if ((ROT[i] + n) > 90)
				ROT[i] -= n;
			else
				ROT[i] += n;
		}
		else if (ROT[i] <= 122 && ROT[i] >= 97)
		{
			if ((ROT[i] + n ) > 122)
				ROT[i] -= n;
			else
				ROT[i] += n ;
		}
		else 
			ROT[i] = ROT[i];


		write(1,&ROT[i],1);
		i++;
	}
}
void	Decryption(char *ROTN, int N)
{
	int	i;
	int	key;

	i = 0;
	while(ROTN[i])
	{
		if((ROTN[i] <=90 && ROTN[i] >= 65) || (ROTN[i] <= 122 && ROTN[i] >= 97))
		{
			if (ROTN[i] <= 90)
			{
				if ((ROTN[i] - N) < 65)
				{
					key = ROTN[i] - 64;
					ROTN[i] = 90 - (N - key);
				}
				else
					ROTN[i] = ROTN[i] - N;
			}
			else if(ROTN[i] <= 122)
			{
				if((ROTN[i] - N ) < 97)
				{
					key = ROTN[i] - 96;
					ROTN[i] = 122 - (N - key);
				}
				else
					ROTN[i] = ROTN[i] - N;
			}

			else
			{
				ROTN[i] = ROTN[i];
			}
		}
		write(1, &ROTN[i], 1);
		key = 0;
		i++;
	
	}
}
void	error_message(void)
{
	write(1, "ROTN -n '25 < N > 0' -e encryption or -d decryption and message :",65);
}
void	Encryption(char *ROTN, int n)
{
	int	i; 
	int	key;

	i = 0 ;
	key = 0;

	while(ROTN[i])

	{
		if(((ROTN[i] <= 90 && ROTN[i] >= 65)) || (ROTN[i] <= 122 && ROTN[i] >= 97 ))
		{
			if (ROTN[i] <= 90)
			{
				if ((ROTN[i] + n) > 90)
				{
					key = 91 - (ROTN[i]);
					ROTN[i] = (n - key) + 65;
				}
				else
					ROTN[i] = ROTN[i] + n;
			}
			else 
			{
				if ((ROTN[i] + n) > 122)
				{
					key = 123 - (ROTN[i]);
					ROTN[i] = (n - key) + 97;
				}
				else
					ROTN[i] = ROTN[i] + n;
			}
		}
		else
			ROTN[i] = ROTN[i];

		write(1, &ROTN[i], 1);
		key = 0;
		i++;

	}

}
int	ft_strcomp(char *str1,char *str2)
{
	int	i;
	
	i = 0;
	while (str1[i] || str1[i])
	{
		if (str1[i] < str2[i] || str1[i] > str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (str1[i] - str2[i]);


}
int	ft_len(char *str)
{
	int	i;
	
	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

int main(int argc, char **argv)
{
	(void)argc;

	int	N;
	int	i;

	i = 0;
	while(argv[2][i])
	{
		if (argv[2][i] < 48 || argv[2][i] > 58)
		{
			error_message();
			return (1);
		}
		i++;
	}
	if(ft_len(argv[2]) == 1)
	{
		argv[2][1] = argv[2][0];
		argv[2][0] = '0';
		
	}
	N = (argv[2][0] - '0') * 10 + (argv[2][1] - '0');
	
	if (N == 13)
	{
		ROT13(argv[4], N);
	}
	else if(ft_strcomp(argv[3],"-e") == 0)
	{
		Encryption(argv[4], N);
	}
	else if(ft_strcomp(argv[3],"-d") == 0)
	{
		Decryption(argv[4], N);
	}
	else
	{
		error_message();
		return (1);
	}
	return (0);
}
