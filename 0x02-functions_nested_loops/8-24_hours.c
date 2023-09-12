#include "main.h"

/**
* jack_bauer - prints every minute of the day of Jack Bauer,
* starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int min, hour;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{

			char min_tenth, min_ones, hour_tenth, hour_ones;

			min_tenth = min / 10;
			min_ones = min % 10;
			hour_tenth = hour / 10;
			hour_ones = hour % 10;
			_putchar('0' + hour_tenth);
			_putchar('0' + hour_ones);
			_putchar(':');
			_putchar('0' + min_tenth);
			_putchar('0' + min_ones);
			_putchar('\n');
		}
	}
}
