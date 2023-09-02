#ifndef FACTOR_H
#define FACTOR_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define _GNU_SOURCE

void factorize(char *buffer);
int is_prime(long int num);
long int _atoi(const char *str);

#endif