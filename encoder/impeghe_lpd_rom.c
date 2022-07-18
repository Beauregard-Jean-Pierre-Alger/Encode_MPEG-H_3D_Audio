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
#include "impeghe_cnst.h"

/**
 * @defgroup CoreEncROM Core Encoder ROM Tables
 * @ingroup  CoreEncROM
 * @brief Core Encoder ROM Tables
 *
 * @{
 */

const WORD32 impeghe_acelp_core_numbits_1024[NUM_ACELP_CORE_MODES] = {
    (WORD32)(9.6 * 80),  (WORD32)(11.2 * 80), (WORD32)(12.8 * 80), (WORD32)(14.4 * 80),
    (WORD32)(16.0 * 80), (WORD32)(18.4 * 80), (WORD32)(8.00 * 80), (WORD32)(8.80 * 80)};

const FLOAT32 impeghe_sin_window_128[128] = {
    0.006136F, 0.018407F, 0.030675F, 0.042938F, 0.055195F, 0.067444F, 0.079682F, 0.091909F,
    0.104122F, 0.116319F, 0.128498F, 0.140658F, 0.152797F, 0.164913F, 0.177004F, 0.189069F,
    0.201105F, 0.213110F, 0.225084F, 0.237024F, 0.248928F, 0.260794F, 0.272621F, 0.284408F,
    0.296151F, 0.307850F, 0.319502F, 0.331106F, 0.342661F, 0.354164F, 0.365613F, 0.377007F,
    0.388345F, 0.399624F, 0.410843F, 0.422000F, 0.433094F, 0.444122F, 0.455084F, 0.465977F,
    0.476799F, 0.487550F, 0.498228F, 0.508830F, 0.519356F, 0.529804F, 0.540172F, 0.550458F,
    0.560662F, 0.570781F, 0.580814F, 0.590760F, 0.600617F, 0.610383F, 0.620057F, 0.629638F,
    0.639124F, 0.648514F, 0.657807F, 0.667000F, 0.676093F, 0.685084F, 0.693971F, 0.702755F,
    0.711432F, 0.720003F, 0.728464F, 0.736817F, 0.745058F, 0.753187F, 0.761202F, 0.769103F,
    0.776888F, 0.784557F, 0.792107F, 0.799537F, 0.806848F, 0.814036F, 0.821103F, 0.828045F,
    0.834863F, 0.841555F, 0.848120F, 0.854558F, 0.860867F, 0.867046F, 0.873095F, 0.879012F,
    0.884797F, 0.890449F, 0.895966F, 0.901349F, 0.906596F, 0.911706F, 0.916679F, 0.921514F,
    0.926210F, 0.930767F, 0.935184F, 0.939459F, 0.943593F, 0.947586F, 0.951435F, 0.955141F,
    0.958703F, 0.962121F, 0.965394F, 0.968522F, 0.971504F, 0.974339F, 0.977028F, 0.979570F,
    0.981964F, 0.984210F, 0.986308F, 0.988258F, 0.990058F, 0.991710F, 0.993212F, 0.994565F,
    0.995767F, 0.996820F, 0.997723F, 0.998476F, 0.999078F, 0.999529F, 0.999831F, 0.999981F};

const FLOAT32 impeghe_sin_window_256[256] = {
    0.00306796F, 0.00920375F, 0.01533921F, 0.02147408F, 0.02760815F, 0.03374117F, 0.03987293F,
    0.04600318F, 0.05213170F, 0.05825826F, 0.06438263F, 0.07050457F, 0.07662386F, 0.08274026F,
    0.08885355F, 0.09496350F, 0.10106986F, 0.10717242F, 0.11327095F, 0.11936521F, 0.12545498F,
    0.13154003F, 0.13762012F, 0.14369503F, 0.14976453F, 0.15582840F, 0.16188639F, 0.16793829F,
    0.17398387F, 0.18002290F, 0.18605515F, 0.19208040F, 0.19809841F, 0.20410897F, 0.21011184F,
    0.21610680F, 0.22209362F, 0.22807208F, 0.23404196F, 0.24000302F, 0.24595505F, 0.25189782F,
    0.25783110F, 0.26375468F, 0.26966833F, 0.27557182F, 0.28146494F, 0.28734746F, 0.29321916F,
    0.29907983F, 0.30492923F, 0.31076715F, 0.31659338F, 0.32240768F, 0.32820984F, 0.33399965F,
    0.33977688F, 0.34554132F, 0.35129276F, 0.35703096F, 0.36275572F, 0.36846683F, 0.37416406F,
    0.37984721F, 0.38551605F, 0.39117038F, 0.39680999F, 0.40243465F, 0.40804416F, 0.41363831F,
    0.41921689F, 0.42477968F, 0.43032648F, 0.43585708F, 0.44137127F, 0.44686884F, 0.45234959F,
    0.45781330F, 0.46325978F, 0.46868882F, 0.47410021F, 0.47949376F, 0.48486925F, 0.49022648F,
    0.49556526F, 0.50088538F, 0.50618665F, 0.51146885F, 0.51673180F, 0.52197529F, 0.52719913F,
    0.53240313F, 0.53758708F, 0.54275078F, 0.54789406F, 0.55301671F, 0.55811853F, 0.56319934F,
    0.56825895F, 0.57329717F, 0.57831380F, 0.58330865F, 0.58828155F, 0.59323230F, 0.59816071F,
    0.60306660F, 0.60794978F, 0.61281008F, 0.61764731F, 0.62246128F, 0.62725182F, 0.63201874F,
    0.63676186F, 0.64148101F, 0.64617601F, 0.65084668F, 0.65549285F, 0.66011434F, 0.66471098F,
    0.66928259F, 0.67382900F, 0.67835004F, 0.68284555F, 0.68731534F, 0.69175926F, 0.69617713F,
    0.70056879F, 0.70493408F, 0.70927283F, 0.71358487F, 0.71787005F, 0.72212819F, 0.72635916F,
    0.73056277F, 0.73473888F, 0.73888732F, 0.74300795F, 0.74710061F, 0.75116513F, 0.75520138F,
    0.75920919F, 0.76318842F, 0.76713891F, 0.77106052F, 0.77495311F, 0.77881651F, 0.78265060F,
    0.78645521F, 0.79023022F, 0.79397548F, 0.79769084F, 0.80137617F, 0.80503133F, 0.80865618F,
    0.81225059F, 0.81581441F, 0.81934752F, 0.82284978F, 0.82632106F, 0.82976123F, 0.83317016F,
    0.83654773F, 0.83989379F, 0.84320824F, 0.84649094F, 0.84974177F, 0.85296060F, 0.85614733F,
    0.85930182F, 0.86242396F, 0.86551362F, 0.86857071F, 0.87159509F, 0.87458665F, 0.87754529F,
    0.88047089F, 0.88336334F, 0.88622253F, 0.88904836F, 0.89184071F, 0.89459949F, 0.89732458F,
    0.90001589F, 0.90267332F, 0.90529676F, 0.90788612F, 0.91044129F, 0.91296219F, 0.91544872F,
    0.91790078F, 0.92031828F, 0.92270113F, 0.92504924F, 0.92736253F, 0.92964090F, 0.93188427F,
    0.93409255F, 0.93626567F, 0.93840353F, 0.94050607F, 0.94257320F, 0.94460484F, 0.94660091F,
    0.94856135F, 0.95048607F, 0.95237501F, 0.95422810F, 0.95604525F, 0.95782641F, 0.95957151F,
    0.96128049F, 0.96295327F, 0.96458979F, 0.96619000F, 0.96775384F, 0.96928124F, 0.97077214F,
    0.97222650F, 0.97364425F, 0.97502535F, 0.97636973F, 0.97767736F, 0.97894818F, 0.98018214F,
    0.98137919F, 0.98253930F, 0.98366242F, 0.98474850F, 0.98579751F, 0.98680940F, 0.98778414F,
    0.98872169F, 0.98962202F, 0.99048508F, 0.99131086F, 0.99209931F, 0.99285041F, 0.99356414F,
    0.99424045F, 0.99487933F, 0.99548076F, 0.99604470F, 0.99657115F, 0.99706007F, 0.99751146F,
    0.99792529F, 0.99830154F, 0.99864022F, 0.99894129F, 0.99920476F, 0.99943060F, 0.99961882F,
    0.99976941F, 0.99988235F, 0.99995764F, 0.99999529F};

const FLOAT32 impeghe_lsf_init[ORDER] = {375.0,  750.0,  1125.0, 1500.0, 1875.0, 2250.0,
                                         2625.0, 3000.0, 3375.0, 3750.0, 4125.0, 4500.0,
                                         4875.0, 5250.0, 5625.0, 6000.0};

const FLOAT32 impeghe_ispold_init[ORDER] = {0.982973f,  0.932472f,  0.850217f,  0.739009f,
                                            0.602635f,  0.445738f,  0.273663f,  0.092268f,
                                            -0.092268f, -0.273663f, -0.445738f, -0.602635f,
                                            -0.739009f, -0.850217f, -0.932472f, -0.982973f};

const FLOAT32 impeghe_cos_window_512[512] = {
    0.003067957f, 0.009203754f, 0.015339206f, 0.021474080f, 0.027608145f, 0.033741172f,
    0.039872929f, 0.046003181f, 0.052131705f, 0.058258265f, 0.064382628f, 0.070504576f,
    0.076623864f, 0.082740262f, 0.088853553f, 0.094963498f, 0.101069860f, 0.107172422f,
    0.113270953f, 0.119365215f, 0.125454977f, 0.131540030f, 0.137620121f, 0.143695027f,
    0.149764538f, 0.155828401f, 0.161886394f, 0.167938292f, 0.173983872f, 0.180022895f,
    0.186055154f, 0.192080393f, 0.198098406f, 0.204108968f, 0.210111842f, 0.216106802f,
    0.222093627f, 0.228072077f, 0.234041959f, 0.240003020f, 0.245955050f, 0.251897812f,
    0.257831097f, 0.263754666f, 0.269668311f, 0.275571823f, 0.281464934f, 0.287347466f,
    0.293219149f, 0.299079835f, 0.304929227f, 0.310767144f, 0.316593379f, 0.322407693f,
    0.328209847f, 0.333999664f, 0.339776874f, 0.345541328f, 0.351292759f, 0.357030958f,
    0.362755716f, 0.368466824f, 0.374164075f, 0.379847199f, 0.385516047f, 0.391170382f,
    0.396809995f, 0.402434647f, 0.408044159f, 0.413638324f, 0.419216901f, 0.424779683f,
    0.430326492f, 0.435857087f, 0.441371262f, 0.446868837f, 0.452349573f, 0.457813293f,
    0.463259786f, 0.468688816f, 0.474100202f, 0.479493767f, 0.484869242f, 0.490226477f,
    0.495565265f, 0.500885367f, 0.506186664f, 0.511468828f, 0.516731799f, 0.521975279f,
    0.527199149f, 0.532403111f, 0.537587047f, 0.542750776f, 0.547894061f, 0.553016722f,
    0.558118522f, 0.563199341f, 0.568258941f, 0.573297143f, 0.578313768f, 0.583308637f,
    0.588281572f, 0.593232274f, 0.598160684f, 0.603066623f, 0.607949793f, 0.612810075f,
    0.617647290f, 0.622461259f, 0.627251804f, 0.632018745f, 0.636761844f, 0.641481042f,
    0.646176040f, 0.650846660f, 0.655492842f, 0.660114348f, 0.664710999f, 0.669282615f,
    0.673829019f, 0.678350031f, 0.682845533f, 0.687315345f, 0.691759229f, 0.696177125f,
    0.700568795f, 0.704934061f, 0.709272802f, 0.713584840f, 0.717870057f, 0.722128212f,
    0.726359129f, 0.730562747f, 0.734738886f, 0.738887310f, 0.743007958f, 0.747100592f,
    0.751165152f, 0.755201399f, 0.759209216f, 0.763188422f, 0.767138898f, 0.771060526f,
    0.774953127f, 0.778816521f, 0.782650590f, 0.786455214f, 0.790230215f, 0.793975472f,
    0.797690868f, 0.801376164f, 0.805031359f, 0.808656156f, 0.812250614f, 0.815814435f,
    0.819347501f, 0.822849810f, 0.826321065f, 0.829761207f, 0.833170176f, 0.836547732f,
    0.839893818f, 0.843208253f, 0.846490920f, 0.849741757f, 0.852960587f, 0.856147349f,
    0.859301805f, 0.862423956f, 0.865513623f, 0.868570685f, 0.871595085f, 0.874586642f,
    0.877545297f, 0.880470872f, 0.883363366f, 0.886222541f, 0.889048338f, 0.891840696f,
    0.894599497f, 0.897324562f, 0.900015891f, 0.902673304f, 0.905296743f, 0.907886088f,
    0.910441279f, 0.912962198f, 0.915448725f, 0.917900801f, 0.920318305f, 0.922701120f,
    0.925049245f, 0.927362502f, 0.929640889f, 0.931884289f, 0.934092522f, 0.936265647f,
    0.938403547f, 0.940506041f, 0.942573190f, 0.944604814f, 0.946600914f, 0.948561370f,
    0.950486064f, 0.952374995f, 0.954228103f, 0.956045270f, 0.957826436f, 0.959571540f,
    0.961280465f, 0.962953269f, 0.964589775f, 0.966189981f, 0.967753828f, 0.969281256f,
    0.970772147f, 0.972226501f, 0.973644257f, 0.975025356f, 0.976369739f, 0.977677345f,
    0.978948176f, 0.980182111f, 0.981379211f, 0.982539296f, 0.983662426f, 0.984748483f,
    0.985797524f, 0.986809373f, 0.987784147f, 0.988721669f, 0.989621997f, 0.990485072f,
    0.991310835f, 0.992099285f, 0.992850423f, 0.993564129f, 0.994240463f, 0.994879305f,
    0.995480776f, 0.996044695f, 0.996571124f, 0.997060061f, 0.997511446f, 0.997925282f,
    0.998301566f, 0.998640239f, 0.998941302f, 0.999204755f, 0.999430597f, 0.999618828f,
    0.999769390f, 0.999882340f, 0.999957621f, 0.999995291f, 0.999995291f, 0.999957621f,
    0.999882340f, 0.999769390f, 0.999618828f, 0.999430597f, 0.999204755f, 0.998941302f,
    0.998640239f, 0.998301566f, 0.997925282f, 0.997511446f, 0.997060061f, 0.996571124f,
    0.996044695f, 0.995480776f, 0.994879305f, 0.994240463f, 0.993564129f, 0.992850423f,
    0.992099285f, 0.991310835f, 0.990485072f, 0.989621997f, 0.988721669f, 0.987784147f,
    0.986809373f, 0.985797524f, 0.984748483f, 0.983662426f, 0.982539296f, 0.981379211f,
    0.980182111f, 0.978948176f, 0.977677345f, 0.976369739f, 0.975025356f, 0.973644257f,
    0.972226501f, 0.970772147f, 0.969281256f, 0.967753828f, 0.966189981f, 0.964589775f,
    0.962953269f, 0.961280465f, 0.959571540f, 0.957826436f, 0.956045270f, 0.954228103f,
    0.952374995f, 0.950486064f, 0.948561370f, 0.946600914f, 0.944604814f, 0.942573190f,
    0.940506041f, 0.938403547f, 0.936265647f, 0.934092522f, 0.931884289f, 0.929640889f,
    0.927362502f, 0.925049245f, 0.922701120f, 0.920318305f, 0.917900801f, 0.915448725f,
    0.912962198f, 0.910441279f, 0.907886088f, 0.905296743f, 0.902673304f, 0.900015891f,
    0.897324562f, 0.894599497f, 0.891840696f, 0.889048338f, 0.886222541f, 0.883363366f,
    0.880470872f, 0.877545297f, 0.874586642f, 0.871595085f, 0.868570685f, 0.865513623f,
    0.862423956f, 0.859301805f, 0.856147349f, 0.852960587f, 0.849741757f, 0.846490920f,
    0.843208253f, 0.839893818f, 0.836547732f, 0.833170176f, 0.829761207f, 0.826321065f,
    0.822849810f, 0.819347501f, 0.815814435f, 0.812250614f, 0.808656156f, 0.805031359f,
    0.801376164f, 0.797690868f, 0.793975472f, 0.790230215f, 0.786455214f, 0.782650590f,
    0.778816521f, 0.774953127f, 0.771060526f, 0.767138898f, 0.763188422f, 0.759209216f,
    0.755201399f, 0.751165152f, 0.747100592f, 0.743007958f, 0.738887310f, 0.734738886f,
    0.730562747f, 0.726359129f, 0.722128212f, 0.717870057f, 0.713584840f, 0.709272802f,
    0.704934061f, 0.700568795f, 0.696177125f, 0.691759229f, 0.687315345f, 0.682845533f,
    0.678350031f, 0.673829019f, 0.669282615f, 0.664710999f, 0.660114348f, 0.655492842f,
    0.650846660f, 0.646176040f, 0.641481042f, 0.636761844f, 0.632018745f, 0.627251804f,
    0.622461259f, 0.617647290f, 0.612810075f, 0.607949793f, 0.603066623f, 0.598160684f,
    0.593232274f, 0.588281572f, 0.583308637f, 0.578313768f, 0.573297143f, 0.568258941f,
    0.563199341f, 0.558118522f, 0.553016722f, 0.547894061f, 0.542750776f, 0.537587047f,
    0.532403111f, 0.527199149f, 0.521975279f, 0.516731799f, 0.511468828f, 0.506186664f,
    0.500885367f, 0.495565265f, 0.490226477f, 0.484869242f, 0.479493767f, 0.474100202f,
    0.468688816f, 0.463259786f, 0.457813293f, 0.452349573f, 0.446868837f, 0.441371262f,
    0.435857087f, 0.430326492f, 0.424779683f, 0.419216901f, 0.413638324f, 0.408044159f,
    0.402434647f, 0.396809995f, 0.391170382f, 0.385516047f, 0.379847199f, 0.374164075f,
    0.368466824f, 0.362755716f, 0.357030958f, 0.351292759f, 0.345541328f, 0.339776874f,
    0.333999664f, 0.328209847f, 0.322407693f, 0.316593379f, 0.310767144f, 0.304929227f,
    0.299079835f, 0.293219149f, 0.287347466f, 0.281464934f, 0.275571823f, 0.269668311f,
    0.263754666f, 0.257831097f, 0.251897812f, 0.245955050f, 0.240003020f, 0.234041959f,
    0.228072077f, 0.222093627f, 0.216106802f, 0.210111842f, 0.204108968f, 0.198098406f,
    0.192080393f, 0.186055154f, 0.180022895f, 0.173983872f, 0.167938292f, 0.161886394f,
    0.155828401f, 0.149764538f, 0.143695027f, 0.137620121f, 0.131540030f, 0.125454977f,
    0.119365215f, 0.113270953f, 0.107172422f, 0.101069860f, 0.094963498f, 0.088853553f,
    0.082740262f, 0.076623864f, 0.070504576f, 0.064382628f, 0.058258265f, 0.052131705f,
    0.046003181f, 0.039872929f, 0.033741172f, 0.027608145f, 0.021474080f, 0.015339206f,
    0.009203754f, 0.003067957f};

const FLOAT32 impeghe_cos_window_448[448] = {
    0.003506235f, 0.010518531f, 0.017530311f, 0.024541229f, 0.031550940f, 0.038559098f,
    0.045565363f, 0.052569386f, 0.059570823f, 0.066569328f, 0.073564567f, 0.080556184f,
    0.087543838f, 0.094527185f, 0.101505890f, 0.108479597f, 0.115447976f, 0.122410677f,
    0.129367352f, 0.136317670f, 0.143261284f, 0.150197864f, 0.157127038f, 0.164048493f,
    0.170961887f, 0.177866876f, 0.184763104f, 0.191650257f, 0.198527992f, 0.205395952f,
    0.212253809f, 0.219101235f, 0.225937888f, 0.232763439f, 0.239577532f, 0.246379837f,
    0.253170043f, 0.259947777f, 0.266712755f, 0.273464620f, 0.280203015f, 0.286927640f,
    0.293638140f, 0.300334215f, 0.307015538f, 0.313681751f, 0.320332527f, 0.326967567f,
    0.333586514f, 0.340189070f, 0.346774876f, 0.353343636f, 0.359895051f, 0.366428733f,
    0.372944415f, 0.379441738f, 0.385920405f, 0.392380118f, 0.398820519f, 0.405241311f,
    0.411642164f, 0.418022811f, 0.424382865f, 0.430722058f, 0.437040091f, 0.443336606f,
    0.449611336f, 0.455863953f, 0.462094128f, 0.468301624f, 0.474486053f, 0.480647177f,
    0.486784667f, 0.492898196f, 0.498987496f, 0.505052269f, 0.511092186f, 0.517107010f,
    0.523096323f, 0.529060006f, 0.534997642f, 0.540908933f, 0.546793640f, 0.552651465f,
    0.558482170f, 0.564285338f, 0.570060790f, 0.575808167f, 0.581527293f, 0.587217808f,
    0.592879415f, 0.598511875f, 0.604114890f, 0.609688222f, 0.615231574f, 0.620744705f,
    0.626227260f, 0.631679058f, 0.637099743f, 0.642489135f, 0.647846937f, 0.653172851f,
    0.658466637f, 0.663728058f, 0.668956876f, 0.674152792f, 0.679315507f, 0.684444845f,
    0.689540565f, 0.694602311f, 0.699629962f, 0.704623163f, 0.709581733f, 0.714505374f,
    0.719393909f, 0.724247098f, 0.729064643f, 0.733846307f, 0.738591909f, 0.743301213f,
    0.747973979f, 0.752609909f, 0.757208824f, 0.761770546f, 0.766294777f, 0.770781398f,
    0.775230050f, 0.779640555f, 0.784012794f, 0.788346410f, 0.792641282f, 0.796897233f,
    0.801113904f, 0.805291235f, 0.809428990f, 0.813526869f, 0.817584813f, 0.821602523f,
    0.825579822f, 0.829516530f, 0.833412468f, 0.837267399f, 0.841081142f, 0.844853580f,
    0.848584414f, 0.852273524f, 0.855920792f, 0.859525919f, 0.863088787f, 0.866609156f,
    0.870086968f, 0.873521984f, 0.876914084f, 0.880263031f, 0.883568645f, 0.886830866f,
    0.890049458f, 0.893224299f, 0.896355212f, 0.899442017f, 0.902484655f, 0.905482829f,
    0.908436537f, 0.911345541f, 0.914209783f, 0.917029023f, 0.919803143f, 0.922532082f,
    0.925215602f, 0.927853703f, 0.930446148f, 0.932992816f, 0.935493588f, 0.937948406f,
    0.940357089f, 0.942719519f, 0.945035577f, 0.947305143f, 0.949528158f, 0.951704502f,
    0.953834057f, 0.955916643f, 0.957952261f, 0.959940791f, 0.961882055f, 0.963776052f,
    0.965622663f, 0.967421770f, 0.969173372f, 0.970877230f, 0.972533405f, 0.974141717f,
    0.975702107f, 0.977214575f, 0.978678942f, 0.980095208f, 0.981463313f, 0.982783079f,
    0.984054565f, 0.985277653f, 0.986452281f, 0.987578392f, 0.988655984f, 0.989684880f,
    0.990665197f, 0.991596758f, 0.992479563f, 0.993313551f, 0.994098663f, 0.994834960f,
    0.995522261f, 0.996160686f, 0.996750057f, 0.997290432f, 0.997781813f, 0.998224080f,
    0.998617291f, 0.998961389f, 0.999256313f, 0.999502122f, 0.999698818f, 0.999846339f,
    0.999944687f, 0.999993861f, 0.999993861f, 0.999944687f, 0.999846339f, 0.999698818f,
    0.999502122f, 0.999256313f, 0.998961389f, 0.998617291f, 0.998224080f, 0.997781813f,
    0.997290432f, 0.996750057f, 0.996160686f, 0.995522261f, 0.994834960f, 0.994098663f,
    0.993313551f, 0.992479563f, 0.991596758f, 0.990665197f, 0.989684880f, 0.988655984f,
    0.987578392f, 0.986452281f, 0.985277653f, 0.984054565f, 0.982783079f, 0.981463313f,
    0.980095208f, 0.978678942f, 0.977214575f, 0.975702107f, 0.974141717f, 0.972533405f,
    0.970877230f, 0.969173372f, 0.967421770f, 0.965622663f, 0.963776052f, 0.961882055f,
    0.959940791f, 0.957952261f, 0.955916643f, 0.953834057f, 0.951704502f, 0.949528158f,
    0.947305143f, 0.945035577f, 0.942719519f, 0.940357089f, 0.937948406f, 0.935493588f,
    0.932992816f, 0.930446148f, 0.927853703f, 0.925215602f, 0.922532082f, 0.919803143f,
    0.917029023f, 0.914209783f, 0.911345541f, 0.908436537f, 0.905482829f, 0.902484655f,
    0.899442017f, 0.896355212f, 0.893224299f, 0.890049458f, 0.886830866f, 0.883568645f,
    0.880263031f, 0.876914084f, 0.873521984f, 0.870086968f, 0.866609156f, 0.863088787f,
    0.859525919f, 0.855920792f, 0.852273524f, 0.848584414f, 0.844853580f, 0.841081142f,
    0.837267399f, 0.833412468f, 0.829516530f, 0.825579822f, 0.821602523f, 0.817584813f,
    0.813526869f, 0.809428990f, 0.805291235f, 0.801113904f, 0.796897233f, 0.792641282f,
    0.788346410f, 0.784012794f, 0.779640555f, 0.775230050f, 0.770781398f, 0.766294777f,
    0.761770546f, 0.757208824f, 0.752609909f, 0.747973979f, 0.743301213f, 0.738591909f,
    0.733846307f, 0.729064643f, 0.724247098f, 0.719393909f, 0.714505374f, 0.709581733f,
    0.704623163f, 0.699629962f, 0.694602311f, 0.689540565f, 0.684444845f, 0.679315507f,
    0.674152792f, 0.668956876f, 0.663728058f, 0.658466637f, 0.653172851f, 0.647846937f,
    0.642489135f, 0.637099743f, 0.631679058f, 0.626227260f, 0.620744705f, 0.615231574f,
    0.609688222f, 0.604114890f, 0.598511875f, 0.592879415f, 0.587217808f, 0.581527293f,
    0.575808167f, 0.570060790f, 0.564285338f, 0.558482170f, 0.552651465f, 0.546793640f,
    0.540908933f, 0.534997642f, 0.529060006f, 0.523096323f, 0.517107010f, 0.511092186f,
    0.505052269f, 0.498987496f, 0.492898196f, 0.486784667f, 0.480647177f, 0.474486053f,
    0.468301624f, 0.462094128f, 0.455863953f, 0.449611336f, 0.443336606f, 0.437040091f,
    0.430722058f, 0.424382865f, 0.418022811f, 0.411642164f, 0.405241311f, 0.398820519f,
    0.392380118f, 0.385920405f, 0.379441738f, 0.372944415f, 0.366428733f, 0.359895051f,
    0.353343636f, 0.346774876f, 0.340189070f, 0.333586514f, 0.326967567f, 0.320332527f,
    0.313681751f, 0.307015538f, 0.300334215f, 0.293638140f, 0.286927640f, 0.280203015f,
    0.273464620f, 0.266712755f, 0.259947777f, 0.253170043f, 0.246379837f, 0.239577532f,
    0.232763439f, 0.225937888f, 0.219101235f, 0.212253809f, 0.205395952f, 0.198527992f,
    0.191650257f, 0.184763104f, 0.177866876f, 0.170961887f, 0.164048493f, 0.157127038f,
    0.150197864f, 0.143261284f, 0.136317670f, 0.129367352f, 0.122410677f, 0.115447976f,
    0.108479597f, 0.101505890f, 0.094527185f, 0.087543838f, 0.080556184f, 0.073564567f,
    0.066569328f, 0.059570823f, 0.052569386f, 0.045565363f, 0.038559098f, 0.031550940f,
    0.024541229f, 0.017530311f, 0.010518531f, 0.003506235f};

const FLOAT32 impeghe_lag_window[17] = {
    1.0001f,         0.999566371183f, 0.998266612613f, 0.996104103033f, 0.993084457421f,
    0.989215493202f, 0.984507262707f, 0.978971838951f, 0.972623467445f, 0.965478420258f,
    0.957554817200f, 0.948872864246f, 0.939454317093f, 0.929322779179f, 0.918503403664f,
    0.907022833824f, 0.894909143448f,
};

const FLOAT32 impeghe_res_interp_filter1_4[INTER_LP_FIL_LEN + 4] = {
    0.940000f,  0.856390f,  0.632268f,  0.337560f,  0.059072f, -0.131059f, -0.199393f, -0.158569f,
    -0.056359f, 0.047606f,  0.106749f,  0.103705f,  0.052062f, -0.015182f, -0.063705f, -0.073660f,
    -0.046497f, -0.000983f, 0.038227f,  0.053143f,  0.040059f, 0.009308f,  -0.021674f, -0.037767f,
    -0.033186f, -0.013028f, 0.010702f,  0.025901f,  0.026318f, 0.013821f,  -0.003645f, -0.016813f,
    -0.019855f, -0.012766f, -0.000530f, 0.010080f,  0.014122f, 0.010657f,  0.002594f,  -0.005363f,
    -0.009344f, -0.008101f, -0.003182f, 0.002330f,  0.005635f, 0.005562f,  0.002844f,  -0.000627f,
    -0.002993f, -0.003362f, -0.002044f, -0.000116f, 0.001315f, 0.001692f,  0.001151f,  0.000259f,
    -0.000417f, -0.000618f, -0.000434f, -0.000133f, 0.000063f, 0.000098f,  0.000048f,  0.000007f,
    0.000000f,  0.000000f,  0.000000f,  0.000000f,  0.000000f};

/* [b,a] = butter(2, 20.0/(sampling_freq/2), 'high') --> {a1, a2, b1, b2}.
   Coeffs a1 and a2 are sign inversed in the table.
*/
const FLOAT32 impeghe_hp20_filter_coeffs[6][4] = {

    /* 14700.0 */
    {1.993955279631078f, -0.993973493985847f, -1.993964386808462f, 0.996982193404231f},

    /* 16000.0 */
    {1.994446410541927f, -0.994461789075954f, -1.994454099808941f, 0.997227049904470f},

    /* 22050.0 */
    {1.995970179642829f, -0.995978283057647f, -1.995974231350238f, 0.997987115675119f},

    /* 24000.0 */
    {1.996297601769122f, -0.996304442992686f, -1.996301022380904f, 0.998150511190452f},

    /* 29400.0 */
    {1.996977632949813f, -0.996982193414607f, -1.996979913182210f, 0.998489956591105f},

    /* 32000.0 */
    {1.997223199944181f, -0.997227049911866f, -1.997225124928023f, 0.998612562464012f}

};
/** @} */ /* End of CoreEncROM */