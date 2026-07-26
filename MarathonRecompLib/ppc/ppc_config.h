#pragma once
#ifndef PPC_CONFIG_H_INCLUDED
#define PPC_CONFIG_H_INCLUDED


#define PPC_IMAGE_BASE 0x82000000ull
#define PPC_IMAGE_SIZE 0xD98000ull
#define PPC_CODE_BASE 0x82160000ull
#define PPC_CODE_SIZE 0x9AABB8ull

#ifdef PPC_INCLUDE_DETAIL
#include "ppc_detail.h"
#endif

#endif
