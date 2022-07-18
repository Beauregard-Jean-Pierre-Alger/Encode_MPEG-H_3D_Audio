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

#ifndef IMPEGH_MP4_MAKE_VIDEO_H
#define IMPEGH_MP4_MAKE_VIDEO_H

WORD32 impegh_mp4_read_media_sample(UWORD8 **buf, WORD32 to_write, trak_info *m, pVOID fp);
VOID impegh_mp4_update_stss(trak_info *m, pVOID fp);
WORD32 impegh_mp4_get_ctts(pVOID fp, trak_info *m);
WORD32 impegh_mp4_get_stts(pVOID fp, trak_info *m);
WORD32 impegh_mp4_get_stsd(pVOID fp, trak_info *m, ia_mp4_mem_node **n,
                           ia_maei_info *ptr_mae_info);
WORD32 impegh_mp4_get_stsz(pVOID fp, trak_info *m);
WORD32 impegh_mp4_get_stsc(pVOID fp, trak_info *m);
WORD32 impegh_mp4_get_stco(pVOID fp, trak_info *m);
WORD32 impegh_mp4_get_stss(pVOID fp, trak_info *m);
WORD32 impegh_mp4_get_cts(mp4_info *m_mp4, UWORD32 media);
WORD32 impegh_mp4_get_dts(mp4_info *m_mp4, UWORD32 media);
UWORD32 impegh_mp4_get_audio_cts(pVOID mp4_cntxt);

#endif /* IMPEGH_MP4_MAKE_VIDEO_H */
