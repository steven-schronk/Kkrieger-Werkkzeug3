
#ifdef __cplusplus
#include <stdio.h>
FILE iob[] = { *stdin, *stdout, *stderr };
extern "C" {
    FILE* __cdecl _iob(void) { return iob; }
}
#endif
