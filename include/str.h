#ifndef STR_H
#define STR_H

#include <unistd.h>

struct str {
	char *data;
	size_t len;
	size_t size;
};

typedef struct str str_t;

void get_line(str_t *s);

#endif
