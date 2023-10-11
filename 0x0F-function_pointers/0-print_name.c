/**
 *print_name - print name
 *
 * @name: pointer to name string
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		exit(EXIT_FAILURE);
	(*f)(10);
}
