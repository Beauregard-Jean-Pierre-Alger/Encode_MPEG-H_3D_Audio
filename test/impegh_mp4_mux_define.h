/* 	Copyright (c) [2022] Ittiam Systems Pvt. Ltd.
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted (subject to the limitations in the
   disclaimer below) provided that the following conditions are met:
   •	Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
   •	Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
   •	Neither the names of Dolby Laboratories, Inc. (or its affiliates),
   Ittiam Systems Pvt. Ltd. nor the names of its contributors may be used
   to endorse or promote products derived from this software without
   specific prior written permission.

   NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED
   BY THIS LICENSE. YOUR USE OF THE SOFTWARE MAY REQUIRE ADDITIONAL PATENT
   LICENSE(S) BY THIRD PARTIES, INCLUDING, WITHOUT LIMITATION, DOLBY
   LABORATORIES, INC. OR ANY OF ITS AFFILIATES. THIS SOFTWARE IS PROVIDED
   BY ITTIAM SYSTEMS LTD. AND ITS CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
   IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
   OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
   IN NO EVENT SHALL ITTIAM SYSTEMS LTD OR ITS CONTRIBUTORS BE LIABLE FOR
   ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
   DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
   OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
   HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
   STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
   IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE.
---------------------------------------------------------------
*/

#ifndef IMPEGH_MP4_MUX_DEFINE_H
#define IMPEGH_MP4_MUX_DEFINE_H

extern ia_error_info_struct ia_testbench_error_info;
extern ia_error_info_struct ia_mpeghe_error_info;

/*****************************************************************************/
/* Constant hash defines                                                     */
/*****************************************************************************/
#define MAX_STACK_PROC 10
#define MAX_MEM_ALLOCS 100
#define IA_MAX_CMD_LINE_LENGTH 300
#define IA_MAX_ARGS 20
#define IA_SCREEN_WIDTH 80
#define IN_ARR_SIZE (142500)
#define PARAMFILE "paramfilesimple_mux.txt"
#define MHM1_TYPE 0x6D686D31
#define MHA1_TYPE 0x6D686131

/*****************************************************************************/
/* Output formats                                                            */
/*****************************************************************************/
typedef enum impeghe_op_fmts
{
  RAW_MHAS = 1,
  MP4_MHA1,
  MP4_MHM1,
} impeghe_op_fmts;

/*****************************************************************************/
/* Global variables                                                          */
/*****************************************************************************/
FILE *g_pf_inp;
FILE *g_pf_out;
WORD32 *frame_lengths;
WORD32 *frame_header_lengths;
WORD32 frame_count = 0;
impeghe_op_fmts op_fmt = MP4_MHM1;

VOID impeghe_error_handler_init();
VOID impeghe_testbench_error_handler_init();

#endif
