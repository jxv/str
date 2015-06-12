#ifndef STR_H
#define STR_H

#include <unistd.h>
#include <stdbool.h>

struct str {
	char *data;
	size_t len;
	size_t cap;
};

typedef struct str str_t;

struct optstr {
	bool exist;
	str_t str;
};

typedef struct optstr optstr_t;

void get_line(str_t *s);

int str_cmp(const str_t *s1, const str_t *s2);
int str_ncmp(const str_t *s1, const str_t *s2, size_t n);

#endif
