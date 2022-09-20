#if SYSTEM_1
   # include "system_1.h"
#elif SYSTEM_2
   # include "system_2.h"
#elif SYSTEM_3
#endif
#define SYSTEM_H "system_1.h"
#ifndef main.c_FILE
#define main.c_FILE
#include _putchar
#include SYSTEM_H
