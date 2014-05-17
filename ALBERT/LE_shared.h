// LEdoian's shared functions
// LEdoian..CZ
// v. 0.0.1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef LE_SHARED_H
#define LE_SHARED_H

int LE_Problem(const char* error, int errcode){ /*I would like this to have more parameters, but I need a documentation*/
	fprintf(stderr, "%s", error);
	exit(errcode);
}

#endif //! LE_SHARED_H
