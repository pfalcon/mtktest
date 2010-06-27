#ifndef __L_VWLIB_MEMBLOCK_H__
#define __L_VWLIB_MEMBLOCK_H__

#include "vwmemory.h"

VW_EXTERN_C	vwvoidp	__VW_Mem_LV1_Alloc( VW_Heap_Handle hhp , size_t sz );
VW_EXTERN_C	void	__VW_Mem_LV1_Free ( VW_Heap_Handle hhp , vwvoidp pv , size_t sz );

#endif