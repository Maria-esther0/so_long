#include "get_next_line_bonus.h"


int main()
{
	char *buf;

	buf = get_next_line_b(0);
	while (buf)
	{
		free(buf);
		buf = get_next_line_b(0);
	}

	return 0;
}
