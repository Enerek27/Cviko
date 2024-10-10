#pragma once
#include <limits.h>
#define _WINDOWS
//#include <stdbool.h>

typedef int BOOL;
#define _bool_true_false_are_defined 1
#ifdef _WINDOWS
typedef unsigned int MUINT;
#else
typedef unsigned long MUINT;
#endif // _WINDOWS

typedef unsigned int MUINT;
enum { FALSE, TRUE };
