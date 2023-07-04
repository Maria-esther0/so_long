#include "get_next_line_bonus.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	str1;
	size_t	str2;

	if (s1)
		str1 = strlen(s1);
	else
		str1 = 1;
	str2 = strlen(s2);
	s = malloc(sizeof(*s) * (str1 + str2 + 1));
	if (s != NULL)
	{
		memcpy(s, s1, str1);
		memcpy(s + str1, s2, str2);
		s[str1 + str2] = '\0';
	}
	return (s);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;


	if (start >= strlen(s))
	{
		return (strdup(""));
	}
	if (start + len > strlen(s))
	{
		len = strlen(s) - start;
	}
	str = malloc(sizeof(*str) * (len + 1));
	if (str != NULL)
	{
		memcpy(str, s + start, len);
		str[len] = '\0';
	}
	return (str);
}

static char	*return_next_line(char **s)
{
	char	*out;
	char	*line;
	size_t	len;

	len = 0;
	out = NULL;
	while ((*s)[len] != '\n' && (*s)[len])
		len++;
	if ((*s)[len] == '\n')
	{
		out = ft_substr(*s, 0, len + 1);
		line = strdup(*s + len + 1);
		free(*s);
		*s = line;
		if (!**s)
		{
			free(*s);
			*s = NULL;
		}
		return (out);
	}
	out = strdup(*s);
	free(*s);
	*s = NULL;
	return (out);
}

static char	*check_and_return(char **s, ssize_t n, int fd)
{
	if (n < 0)
		return (NULL);
	if (!n && (!s[fd] || !*s[fd]))
		return (NULL);
	return (return_next_line(&s[fd]));
}

char	*get_next_line_b(int fd)
{
	static char	*stash[4096];
	char		*line;
	char		*buffer;
	int		n;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = calloc((BUFFER_SIZE + 1), sizeof(char ));
	n = read(fd, buffer, BUFFER_SIZE);
	while (n > 0)
	{
		buffer[n] = '\0';
		if (!stash[fd])
			stash[fd] = strdup("");
		line = ft_strjoin(stash[fd], buffer);
		free(stash[fd]);
		stash[fd] = line;
		if (strchr(buffer, '\n'))
			break ;
		n = read(fd, buffer, BUFFER_SIZE);
	}
	free(buffer);
	buffer = NULL;
	return (check_and_return(&stash[fd], n, fd));
}
