
/**
 * flip_bits -returns the number of bits you would need to flip to get
 * from one number to another
 * @n: first number
 * @m: second number
 * Return: number
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int toggle = n ^ m;
	unsigned int counter = 0;

	while (toggle)
	{
		counter += toggle & 1;
		toggle >>= 1;
	}

	return (counter);
}
