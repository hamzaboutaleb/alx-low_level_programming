
/**
  * prime_num - check if number is prime
  * @n: number
  * @i: iteration
  * Return: 1 is its prime 0 otherwise
  */

int prime_num(int n, int i)
{
	if (n == i)
		return (0);
	else if (n % i == 0)
		return (1);
	return (prime_num(n, i + 1));
}
/**
  * is_prime_number - check if number is prime
  * @n: number
  * Return: 1 if its prime 0 otherwise
  */
int is_prime_number(int n)
{
	return (prime_num(n, 2));
}
