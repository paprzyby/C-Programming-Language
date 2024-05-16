#include <stdio.h>

int	main()
{
	printf("Hello, World\c");
	return (0);
}
//1.2.c:5:22: warning: unknown escape sequence '\c' [-Wunknown-escape-sequence]
//        printf("Hello, World\c");
//                            ^~
//1 warning generated.