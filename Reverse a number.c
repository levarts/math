long int rever(int a)
{
	long int result = 0;
	int digit = 0;
	while (a > 0)
	{
		digit = a % 10;
		a = a / 10;
		result = result * 10;
		result = result + digit;
	}
	return result;
}