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

#ifndef IMPEGHE_HOA_PRE_DOM_SOUND_SYN_H
#define IMPEGHE_HOA_PRE_DOM_SOUND_SYN_H

VOID impeghe_hoa_pre_dom_sound_syn_process(
    ia_spatial_enc_str *pstr_se_handle, const pUWORD32 set_amb_coeff_indices_to_be_enabled,
    const pUWORD32 set_amb_coeff_indices_to_be_disabled,
    const pUWORD32 set_non_en_dis_able_act_hoa_coeff_indices);

VOID impeghe_hoa_vector_based_predom_sound_syn_process(
    ia_spatial_enc_str *pstr_se_handle, const pUWORD32 set_of_ps_sig_indices,
    const pUWORD32 amb_coef_indices_to_enable, const pUWORD32 amb_coef_indices_to_disable);

VOID impeghe_hoa_dir_based_pre_dom_sound_syn_process(
    ia_spatial_enc_str *pstr_se_handle, const pUWORD32 amb_coeff_indices_to_be_enabled,
    const pUWORD32 amb_coeff_indices_to_be_disabled,
    const pUWORD32 non_en_dis_able_acrt_hoa_coeff_indices, const pUWORD32 set_of_ps_sig_indices);

#endif /*IMPEGHE_HOA_PRE_DOM_SOUND_SYN_H*/
