/*
 * Copyright (c) 2017, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __CORTEX_A72_H__
#define __CORTEX_A72_H__
#include <utils_def.h>

/* Cortex-A72 midr for revision 0 */
#define CORTEX_A72_MIDR 0x410FD080

/*******************************************************************************
 * CPU Extended Control register specific definitions.
 ******************************************************************************/
#define CORTEX_A72_ECTLR				p15, 1, c15

#define CORTEX_A72_ECTLR_SMP_BIT			(ULL(1) << 6)
#define CORTEX_A72_ECTLR_DIS_TWD_ACC_PFTCH_BIT		(ULL(1) << 38)
#define CORTEX_A72_ECTLR_L2_IPFTCH_DIST_MASK		(ULL(0x3) << 35)
#define CORTEX_A72_ECTLR_L2_DPFTCH_DIST_MASK		(ULL(0x3) << 32)

/*******************************************************************************
 * CPU Memory Error Syndrome register specific definitions.
 ******************************************************************************/
#define CORTEX_A72_MERRSR				p15, 2, c15

/*******************************************************************************
 * CPU Auxiliary Control register specific definitions.
 ******************************************************************************/
#define CORTEX_A72_CPUACTLR				p15, 0, c15

#define CORTEX_A72_CPUACTLR_DISABLE_L1_DCACHE_HW_PFTCH	(ULL(1) << 56)
#define CORTEX_A72_CPUACTLR_NO_ALLOC_WBWA		(ULL(1) << 49)
#define CORTEX_A72_CPUACTLR_DCC_AS_DCCI			(ULL(1) << 44)
#define CORTEX_A72_CPUACTLR_DIS_INSTR_PREFETCH		(ULL(1) << 32)

/*******************************************************************************
 * L2 Control register specific definitions.
 ******************************************************************************/
#define CORTEX_A72_L2CTLR				p15, 1, c9, c0, 2

#define CORTEX_A72_L2CTLR_DATA_RAM_LATENCY_SHIFT	0
#define CORTEX_A72_L2CTLR_TAG_RAM_LATENCY_SHIFT		6

#define CORTEX_A72_L2_DATA_RAM_LATENCY_3_CYCLES		0x2
#define CORTEX_A72_L2_TAG_RAM_LATENCY_2_CYCLES		0x1
#define CORTEX_A72_L2_TAG_RAM_LATENCY_3_CYCLES		0x2

/*******************************************************************************
 * L2 Memory Error Syndrome register specific definitions.
 ******************************************************************************/
#define CORTEX_A72_L2MERRSR				p15, 3, c15

#if !ERROR_DEPRECATED
/*
 * These registers were previously wrongly named. Provide previous definitions so
 * as not to break platforms that continue using them.
 */
#define CORTEX_A72_ACTLR				CORTEX_A72_CPUACTLR

#define CORTEX_A72_ACTLR_DISABLE_L1_DCACHE_HW_PFTCH	CORTEX_A72_CPUACTLR_DISABLE_L1_DCACHE_HW_PFTCH
#define CORTEX_A72_ACTLR_NO_ALLOC_WBWA			CORTEX_A72_CPUACTLR_NO_ALLOC_WBWA
#define CORTEX_A72_ACTLR_DCC_AS_DCCI			CORTEX_A72_CPUACTLR_DCC_AS_DCCI
#endif /* !ERROR_DEPRECATED */

#endif /* __CORTEX_A72_H__ */
