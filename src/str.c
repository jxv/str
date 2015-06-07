#include "str.h"
#include <stdio.h>

void get_line(str_t *s)
{
	s->len = s->size;
	s->data[s->size - 1] = '\0';
	for (size_t i = 0; i < s->size - 1; i++) {
		const char c = getchar();
		s->data[i] = c;
		if (c == '\n') {
			s->len = i;
			s->data[i] = '\0';
			break;
		}
	}
}
