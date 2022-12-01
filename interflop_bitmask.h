/*****************************************************************************\
 *                                                                           *\
 *  This file is part of the Verificarlo project,                            *\
 *  under the Apache License v2.0 with LLVM Exceptions.                      *\
 *  SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception.                 *\
 *  See https://llvm.org/LICENSE.txt for license information.                *\
 *                                                                           *\
 *  Copyright (c) 2019-2022                                                  *\
 *     Verificarlo Contributors                                              *\
 *                                                                           *\
 ****************************************************************************/

#ifndef __INTERFLOP_BITMASK_H__
#define __INTERFLOP_BITMASK_H__

#include "interflop-stdlib/interflop_stdlib.h"

#define INTERFLOP_BITMASK_API(name) interflop_bitmask_##name

/* define the available BITMASK modes of operation */
typedef enum {
  bitmask_mode_ieee,
  bitmask_mode_full,
  bitmask_mode_ib,
  bitmask_mode_ob,
  _bitmask_mode_end_
} bitmask_mode;

/* define the available BITMASK */
typedef enum {
  bitmask_operator_zero,
  bitmask_operator_one,
  bitmask_operator_rand,
  _bitmask_operator_end_
} bitmask_operator;

/* Interflop context */
typedef struct {
/* helper data structure to centralize the data used for random number
 * generation */  
  rng_state_t rng_state;
  IUint64_t seed;
  int binary32_precision;
  int binary64_precision;
  bitmask_operator operator;
  bitmask_mode mode;
  IBool choose_seed;
  IBool daz;
  IBool ftz;
} bitmask_context_t;

#endif /* __INTERFLOP_BITMASK_H__ */