#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "struct.h"
#include "ft_recur.h"

#define BUFFER_SIZE 128

char    *ft_get_str(char *file_name)
{
    int	FILE;
	int	readbyte;
    int	size;
	char	buffer[BUFFER_SIZE];
    char    *str;

    FILE = open(file_name, O_RDONLY);
    readbyte = read(FILE, buffer, BUFFER_SIZE);
    size = readbyte;
	while (readbyte > 0)
	{
		readbyte = read(FILE, buffer, BUFFER_SIZE);
		size += readbyte;
	}
    close(FILE);
    str = (char *)malloc((size + 1) * sizeof(char));
    FILE = open(file_name, O_RDONLY);
    readbyte = read(FILE, str, size);
    str[size] = '\0';
    return (str);
}

int main()
{
    char    filename[] = "numbers.dict";
    char    *str;
    // int	i;
    int	j;
	struct s_dict *s;

    j = 0;
    str = ft_get_str(filename);
    s = make_dict(str);
	// free(str);
	// printf("%s",str);
	// for(i = 0;i<32;i++)
	// {
	// 	printf("%lld %s\n",s[i].value,s[i].str);
	// }
	if (checkdict(s))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	ft_recur(0,10000000000,s);
}