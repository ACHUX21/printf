#include "main.h"




int plus_flag(va_list arg, const char *format)
{
	int i = 0, j = 0, found = 0, len = 0;
	i = va_arg(arg, int);

	while (format[j])
	{
		if (format[j] == 'd' || format[j] == 'i' )
		{
			found ++;
			break;
		}
		j++;
	}
	if (found != 1)
		return (-1);
	if (i == 0)
	{
		return (_printf("+0"));
	}
	else if (i > 0)
	{
		len += _putchar('+');
		len += _printf("%d", i);
		return(len);
	}
	else
	{
		len += _printf("%d", i);
	}
	return (len);
}


int hashtag_flag(va_list arg, const char *format)
{
	int i = 0, j = 0, found = 0, len = 0;
	i = va_arg(arg, int);

	while (format[j])
	{
		if (format[j] == 'x')
		{
			found = 1;
			break;
		}
		else if (format[j] == 'o')
		{
			found = 2;
			break;
		}
		j++;
	}
	if (found != 1)
		return (-1);
	else if (found == 1)
	{
		len += _printf("0X");
	}
	else
		len += _printf("O");



	return (len);
}