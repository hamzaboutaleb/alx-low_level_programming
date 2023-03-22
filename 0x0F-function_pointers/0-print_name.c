
/**
  * print_name - print name
  * @name: name to print
  * @f: function will print it
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
