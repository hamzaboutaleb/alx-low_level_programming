
/**
 * _pow - return power of number
 * @b: base
 * @exp: exponent
 * Return: power of number
*/
int _pow(int b, int exp) {
  int result = 1;
  while (exp > 0) {
	result *= b;
	exp--;
  }
  return result;
}
