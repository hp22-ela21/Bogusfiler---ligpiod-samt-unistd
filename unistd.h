#ifndef UNISTD_H_
#define UNISTD_H_

#ifdef __cplusplus
extern "C"
{
#endif

/*************************************************************************************
* Denna headerfil utg�r enbart dummyfiler f�r kompilering i Windowsmilj�.
* Ta inte med dessa filer vid kompilering i Linuxmilj�.
**************************************************************************************/

/* Inkluderingsdirektiv: */
#include <stdlib.h>

static void sleep(const size_t delay_time) { }
static void usleep(const size_t delay_time) { }

#ifdef __cplusplus
}
#endif

#endif /* UNISTD_H_ */