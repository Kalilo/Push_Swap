#include "checker.h"

int	not_end(char c)
{
	if (c && c != '\0')
		return (1);
	return (0);
}

int	validate_command(char *str)
{
	if (not_end(*str) && not_end(str[1] && !(not_end[str[2]])))
	{
		if (*str == 's' && (str[1] == 'a' || str[1] == 'b' ||
				str[1] == 's'))
					return (1);
		else if (*str == 'p' && (str[1] == 'a' || str[1] == 'b'))
			return (1);
		else if (*str == 'r' && (str[1] == 'a' || str[1] == 'b' ||
					str[1] == 'r'))
			return (1);
	}
	else if (not_end(*str) && not_end(str[1] && not_end(str[2]) &&
				!(not_end(str[3]))))
	{
		if (*str == 'r' && str[1] == 'r' && (str[2] == 'a' || 
					str[2] == 'b' || str[2] == 'r'))
			return (1);
	}
	return (0);
}
