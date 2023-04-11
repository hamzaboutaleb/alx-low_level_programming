
/**
 * get_endianness - check if computer use big endian or little endian
 * Return: 0 Big end / 1 little end
*/
int get_endianness(void)
{

	int n = 1;

	if (*(char *)&n == 0)
		return (0);
	else
		return (1);
}
