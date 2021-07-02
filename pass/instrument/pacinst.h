#include "config.h"

#ifndef INSTRUMENT_PACINST_H
#define INSTRUMENT_PACINST_H

int   __pacga (long val, long sizeid);
void* __pacia (void* ptr, unsigned long id);
void* __xpac  (void* ptr);
void* __autia (void* ptr, unsigned long id, char type);
void* __xpac  (void* ptr);

#endif //INSTRUMENT_PACINST_H
