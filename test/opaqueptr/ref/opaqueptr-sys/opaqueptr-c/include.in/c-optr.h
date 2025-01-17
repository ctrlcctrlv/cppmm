#pragma once
#include "opaqueptr-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct optr__PubCtor_t_s {
    char _unused;
} OPAQUEPTR_CPPMM_ALIGN(1) optr__PubCtor_t;
typedef optr__PubCtor_t optr_PubCtor_t;

typedef struct optr__PrvCtor_t_s {
    char _unused;
} OPAQUEPTR_CPPMM_ALIGN(1) optr__PrvCtor_t;
typedef optr__PrvCtor_t optr_PrvCtor_t;

typedef struct optr__AllPrv_t_s {
    char _unused;
} OPAQUEPTR_CPPMM_ALIGN(1) optr__AllPrv_t;
typedef optr__AllPrv_t optr_AllPrv_t;

typedef struct optr__Opaque_t_s optr__Opaque_t;
typedef optr__Opaque_t optr_Opaque_t;


OPAQUEPTR_CPPMM_API unsigned int optr__PubCtor_ctor(
    optr_PubCtor_t * * this_);
#define optr_PubCtor_ctor optr__PubCtor_ctor


OPAQUEPTR_CPPMM_API unsigned int optr__PubCtor_dtor(
    optr_PubCtor_t * this_);
#define optr_PubCtor_dtor optr__PubCtor_dtor


OPAQUEPTR_CPPMM_API unsigned int optr__PubCtor_doit(
    optr_PubCtor_t * this_);
#define optr_PubCtor_doit optr__PubCtor_doit


OPAQUEPTR_CPPMM_API unsigned int optr__PrvCtor_doit(
    optr_PrvCtor_t * this_);
#define optr_PrvCtor_doit optr__PrvCtor_doit


#ifdef __cplusplus
}
#endif
