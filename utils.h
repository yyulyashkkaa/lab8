#ifndef HSE_DATABASE_UTILS_H
#define HSE_DATABASE_UTILS_H

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdarg.h>

void input(const char* msg, char* dest, int count);
uint32_t int_input(const char* msg);

void success(const char* fmt, ...);
void wrong(const char* fmt, ...);

#endif // HSE_DATABASE_UTILS_H
