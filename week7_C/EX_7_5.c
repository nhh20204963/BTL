#include <stdio.h>
#include <math.h>
int main()
{
	int i, n;
    for ( n = 1; n < 100; n++){
		if (n % 2 != 0 || n == 2)
    {
        int count = 0; 
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 0 && n > 1)
            printf("%d\t", n);
    }
}
    return 0;
}