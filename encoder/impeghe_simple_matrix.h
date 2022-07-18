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

#ifndef IMPEGHE_HOA_SIMPLE_MTRX_H
#define IMPEGHE_HOA_SIMPLE_MTRX_H

typedef struct
{
  WORD32 rows;
  WORD32 cols;
  pFlOAT64 mtrx;
} ia_render_hoa_simple_mtrx_str;

typedef struct
{
  ia_render_hoa_simple_mtrx_str u;
  ia_render_hoa_simple_mtrx_str s;
  ia_render_hoa_simple_mtrx_str v;
  FLOAT64 w_s[MAX_NUM_HOA_COEFFS];
  WORD32 w_s_sz;
} ia_render_hoa_simple_mtrx_svd_str;

VOID impeghe_hoa_ren_simple_mtrx_init_with_data_ptr(
    ia_render_hoa_simple_mtrx_str *pstr_hoa_matrix, WORD32 rows, WORD32 cols, pFlOAT64 ptr_data);

IA_ERRORCODE impeghe_hoa_ren_simple_mtrx_svd_init(ia_render_hoa_simple_mtrx_svd_str *pstr_hoa_svd,
                                                  ia_render_hoa_simple_mtrx_str *pstr_hoa_src,
                                                  pVOID ptr_scratch);

#endif /*IMPEGHE_HOA_SIMPLE_MTRX_H*/
