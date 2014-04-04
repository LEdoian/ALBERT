// LEdoian's shared functions
// LEdoian..CZ
// v. 0.0.1

#ifndef LE_SHARED_H
#define LE_SHARED_H

int LE_Problem(const char error, int errcode){
	fprintf(stderr, "%s", error);
	exit(errcode);
}

#endif //! LE_SHARED_H
