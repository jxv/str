#include "str.h"
#include <stdio.h>

void get_line(str_t *s)
{
	s->len = s->cap;
	s->data[s->cap - 1] = '\0';
	for (size_t i = 0; i < s->cap - 1; i++) {
		const char c = getchar();
		s->data[i] = c;
		if (c == '\n') {
			s->len = i;
			s->data[i] = '\0';
			break;
		}
	}
}

int str_cmp(const str_t *s1, const str_t *s2)
{
	for (size_t i = 0; i < s1->len && i < s2->len; i++) {
		if (s1->data[i] < s2->data[i])
			return -1;
		if (s1->data[i] > s2->data[i])
			return 1;
	}
	return s1->len == s2->len ? 0 : (s1->len < s2->len ? -1 : 1);
}

int str_ncmp(const str_t *s1, const str_t *s2, size_t n)
{
	for (size_t i = 0; i < n; i++) {
		if (s1->data[i] < s2->data[i])
			return -1;
		if (s1->data[i] > s2->data[i])
			return 1;
	}
	return 0;
}
