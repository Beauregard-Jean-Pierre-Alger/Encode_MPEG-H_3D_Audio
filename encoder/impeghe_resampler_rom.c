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

#include "impeghe_type_def.h"
#include "impeghe_resampler_rom.h"

/**
 * @defgroup ResampROM Resampler ROM Tables
 * @ingroup  ResampROM
 * @brief Resampler ROM Tables
 *
 * @{
 */

const FLOAT32 impeghe_resampler_filter[RESAMPLE_FILTER_LEN] = {
    6.6318e-004f,  5.9298e-004f,  -7.9957e-004f, -8.0299e-004f, 1.1491e-003f,  1.2169e-003f,
    -1.7485e-003f, -1.8758e-003f, 2.6390e-003f,  2.8283e-003f,  -3.8702e-003f, -4.1348e-003f,
    5.5069e-003f,  5.8773e-003f,  -7.6415e-003f, -8.1757e-003f, 1.0418e-002f,  1.1222e-002f,
    -1.4082e-002f, -1.5352e-002f, 1.9088e-002f,  2.1222e-002f,  -2.6395e-002f, -3.0304e-002f,
    3.8374e-002f,  4.6713e-002f,  -6.2869e-002f, -8.7788e-002f, 1.4968e-001f,  4.4865e-001f,
    4.4865e-001f,  1.4968e-001f,  -8.7788e-002f, -6.2869e-002f, 4.6713e-002f,  3.8374e-002f,
    -3.0304e-002f, -2.6395e-002f, 2.1222e-002f,  1.9088e-002f,  -1.5352e-002f, -1.4082e-002f,
    1.1222e-002f,  1.0418e-002f,  -8.1757e-003f, -7.6415e-003f, 5.8773e-003f,  5.5069e-003f,
    -4.1348e-003f, -3.8702e-003f, 2.8283e-003f,  2.6390e-003f,  -1.8758e-003f, -1.7485e-003f,
    1.2169e-003f,  1.1491e-003f,  -8.0299e-004f, -7.9957e-004f, 5.9298e-004f,  6.6318e-004f,
};

const FLOAT32 impeghe_resampler_filter_3[RESAMPLE_FILTER_LEN] = {
    -4.97022232279335e-004f, -9.18613596216878e-004f, -4.44825902452182e-004f,
    7.05250981587193e-004f,  1.50700315445066e-003f,  8.09458182295440e-004f,
    -1.29785543741278e-003f, -2.85178460464026e-003f, -0.00155156280148759f,
    0.00236946564044503f,    0.00517024229794912f,    0.00279871704229966f,
    -0.00404538116179953f,   -0.00876978312446251f,   -0.00474131143327614f,
    0.00652928741952997f,    0.01417585956591372f,    0.00771987717882837f,
    -0.01022842931324190f,   -0.02248652147726131f,   -0.0124830287732841f,
    0.0161443044586115f,     0.0365819827465015f,     0.0211642050455355f,
    -0.0275376273262614f,    -0.0671682652580574f,    -0.0432832792329244f,
    0.0635616057013451f,     0.211300236308269f,      0.317767795951496f,
    0.317767795951496f,      0.211300236308269f,      0.0635616057013451f,
    -0.0432832792329244f,    -0.0671682652580574f,    -0.0275376273262614f,
    0.0211642050455356f,     0.0365819827465015f,     0.0161443044586115f,
    -0.0124830287732841f,    -0.02248652147726131f,   -0.01022842931324190f,
    0.00771987717882838f,    0.01417585956591372f,    0.00652928741952998f,
    -0.00474131143327614f,   -0.00876978312446251f,   -0.00404538116179953f,
    0.00279871704229966f,    0.00517024229794912f,    0.00236946564044503f,
    -0.00155156280148759f,   -2.85178460464026e-003f, -1.29785543741279e-003f,
    8.09458182295442e-004f,  1.50700315445066e-003f,  7.05250981587192e-004f,
    -4.44825902452182e-004f, -9.18613596216878e-004f, -4.97022232279335e-004f};
/** @} */ /* End of ResampROM */
