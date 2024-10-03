#pragma once
#define _WINDOWS

typedef int BOOL;
#ifdef _WINDOWS
typedef unsigned int MUINT;
#else
typedef unsigned long MUINT;
#endif // _WINDOWS

typedef unsigned int MUINT;
enum { FALSE, TRUE };
