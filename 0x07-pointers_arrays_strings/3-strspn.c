/**
 * _strspn - gets the length of a prefix substring.
 * @s: input
 * @accept: input
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i++;
	}
	while (*accept != '\0')
	{
		for (j = 0; j < i; j++)
		{
			if (*s != *accept)
			{
				break;
			}
		}
	}
	return (i);
}
