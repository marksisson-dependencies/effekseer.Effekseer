#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /Zpc /Tvs_3_0 /Emain /Fh ShaderHeader/ad_model_distortion_vs.h
//    Shader/ad_model_distortion_vs.fx
//
//
// Parameters:
//
//   float4 _365_fAlphaUV[10];
//   float4 _365_fBlendAlphaUV[10];
//   float4 _365_fBlendUV[10];
//   float4 _365_fBlendUVDistortionUV[10];
//   float4 _365_fFlipbookIndexAndNextRate[10];
//   float4 _365_fFlipbookParameter;
//   float4 _365_fModelAlphaThreshold[10];
//   float4 _365_fModelColor[10];
//   float4 _365_fUV[10];
//   float4 _365_fUVDistortionUV[10];
//   float4x4 _365_mCameraProj;
//   float4x4 _365_mModel[10];
//   float4 _365_mUVInversed;
//
//
// Registers:
//
//   Name                           Reg   Size
//   ------------------------------ ----- ----
//   _365_mCameraProj               c0       4
//   _365_mModel                    c4      40
//   _365_fUV                       c44     10
//   _365_fAlphaUV                  c54     10
//   _365_fUVDistortionUV           c64     10
//   _365_fBlendUV                  c74     10
//   _365_fBlendAlphaUV             c84     10
//   _365_fBlendUVDistortionUV      c94     10
//   _365_fFlipbookParameter        c104     1
//   _365_fFlipbookIndexAndNextRate c105    10
//   _365_fModelAlphaThreshold      c115    10
//   _365_fModelColor               c125    10
//   _365_mUVInversed               c138     1
//

    vs_3_0
    def c135, 4, 0, 1, -1
    def c136, -2, 0.5, 2, 0
    dcl_texcoord v0
    dcl_texcoord2 v1
    dcl_texcoord3 v2
    dcl_texcoord4 v3
    dcl_texcoord6 v4
    dcl_texcoord o0.xy
    dcl_texcoord1 o1
    dcl_texcoord2 o2
    dcl_texcoord3 o3
    dcl_texcoord4 o4
    dcl_texcoord5 o5
    dcl_texcoord6 o6
    dcl_texcoord7 o7
    dcl_texcoord8 o8.xy
    dcl_position o9
    frc r0.x, v4.x
    add r0.y, -r0.x, v4.x
    slt r0.z, v4.x, -v4.x
    slt r0.x, -r0.x, r0.x
    mad r0.x, r0.z, r0.x, r0.y
    mul r0.y, r0.x, c135.x
    mova a0.xy, r0.yxzw
    mov r0.xyz, v0
    add r1.xyz, r0, v1
    add r0.xyz, r0, v2
    mul r2, v0.y, c5[a0.x]
    mad r2, c4[a0.x], v0.x, r2
    mad r2, c6[a0.x], v0.z, r2
    add r2, r2, c7[a0.x]
    mul r3, r1.y, c5[a0.x]
    mad r3, c4[a0.x], r1.x, r3
    mad r1, c6[a0.x], r1.z, r3
    add r1, r1, c7[a0.x]
    mul r3, r0.y, c5[a0.x]
    mad r3, c4[a0.x], r0.x, r3
    mad r0, c6[a0.x], r0.z, r3
    add r0, r0, c7[a0.x]
    add r3, -r2, r1
    dp4 r3.x, r3, r3
    rsq r3.x, r3.x
    lrp r4, r3.x, r1, r2
    add r1, -r2, r0
    dp4 r1.x, r1, r1
    rsq r1.x, r1.x
    lrp r3, r1.x, r0, r2
    mul r0, r2.y, c1
    mad r0, c0, r2.x, r0
    mad r0, c2, r2.z, r0
    mad r0, c3, r2.w, r0
    mad r1.xy, v3, c44[a0.y].zwzw, c44[a0.y]
    mul r2, r4.y, c1
    mad r2, c0, r4.x, r2
    mad r2, c2, r4.z, r2
    mad o1, c3, r4.w, r2
    mul r2, r3.y, c1
    mad r2, c0, r3.x, r2
    mad r2, c2, r3.z, r2
    mad o2, c3, r3.w, r2
    mad r1.z, c138.y, r1.y, c138.x
    mad o5.x, v3.x, c54[a0.y].z, c54[a0.y].x
    mad r1.y, v3.y, c54[a0.y].w, c54[a0.y].y
    mad o5.z, v3.x, c64[a0.y].z, c64[a0.y].x
    mad r1.w, v3.y, c64[a0.y].w, c64[a0.y].y
    mad o7.x, v3.x, c74[a0.y].z, c74[a0.y].x
    mad r2.x, v3.y, c74[a0.y].w, c74[a0.y].y
    mad o6.x, v3.x, c84[a0.y].z, c84[a0.y].x
    mad r2.y, v3.y, c84[a0.y].w, c84[a0.y].y
    mad o6.z, v3.x, c94[a0.y].z, c94[a0.y].x
    mad r2.z, v3.y, c94[a0.y].w, c94[a0.y].y
    mov r3, c104
    if_lt c135.y, r3.x
      frc r4.x, c105[a0.y].x
      add r5.x, -r4.x, c105[a0.y].x
      add r2.w, r5.x, c135.z
      mul r3.x, c104.w, c104.z
      abs r4.z, c104.y
      if_ge -r4.z, r4.z
        sge r4.z, r2.w, r3.x
        mad r4.w, r3.z, r3.w, c135.w
        add r5.y, r5.x, c135.z
        lrp r6.xy, r4.z, r4.w, r5
      else
        add r4.z, r3.y, c135.w
        if_ge -r4_abs.z, r4_abs.z
          rcp r4.z, r3.x
          mul r4.w, r4.z, r5.x
          frc r5.y, r4.w
          add r4.w, r4.w, -r5.y
          mad r6.x, r3.x, -r4.w, r5.x
          mul r4.z, r2.w, r4.z
          frc r4.w, r4.z
          add r4.z, -r4.w, r4.z
          mad r6.y, r3.x, -r4.z, r2.w
        else
          add r3.y, r3.y, c136.x
          sge r3.y, -r3_abs.y, r3_abs.y
          rcp r4.z, r3.x
          mul r4.w, r4.z, r5.x
          frc r5.y, r4.w
          add r4.w, r4.w, -r5.y
          mul r5.y, r4.w, c136.y
          frc r5.w, r5.y
          add r5.y, -r5.w, r5.y
          mad r5.y, r5.y, -c136.z, r4.w
          add r5.y, r5.y, c135.w
          sge r5.y, -r5_abs.y, r5_abs.y
          mul r5.w, r3.x, r4.w
          mad r4.w, r3.x, -r4.w, r5.x
          mad r3.z, r3.z, r3.w, c135.w
          frc r3.w, -r5.w
          add r3.w, -r3.w, r4.w
          add r3.w, -r3.w, r3.z
          lrp r7.x, r5.y, r3.w, r4.w
          mul r3.w, r2.w, r4.z
          frc r4.z, r3.w
          add r3.w, r3.w, -r4.z
          mul r4.z, r3.w, c136.y
          frc r4.w, r4.z
          add r4.z, -r4.w, r4.z
          mad r4.z, r4.z, -c136.z, r3.w
          add r4.z, r4.z, c135.w
          sge r4.z, -r4_abs.z, r4_abs.z
          mul r4.w, r3.w, r3.x
          mad r2.w, r3.x, -r3.w, r2.w
          frc r3.x, -r4.w
          add r3.x, r2.w, -r3.x
          add r3.x, -r3.x, r3.z
          lrp r7.y, r4.z, r3.x, r2.w
          add r5.z, r5.x, c135.z
          lrp r6.xy, r3.y, r7, r5.xzzw
        endif
      endif
      frc r2.w, r6.x
      add r3.x, r6.x, -r2.w
      slt r3.y, r6.x, -r6.x
      slt r2.w, -r2.w, r2.w
      mad r2.w, r3.y, r2.w, r3.x
      frc r3.x, c104.z
      add r3.y, -r3.x, c104.z
      slt r3.z, c104.z, -c104.z
      slt r3.x, -r3.x, r3.x
      mad r3.x, r3.z, r3.x, r3.y
      mul r3.y, r2.w, r3.x
      sge r3.y, r3.y, -r3.y
      lrp r4.z, r3.y, r3.x, -r3.x
      rcp r3.y, r4.z
      mul r3.y, r2.w, r3.y
      frc r3.y, r3.y
      mul r3.y, r3.y, r4.z
      frc r3.z, r3.y
      add r3.w, r3.y, -r3.z
      slt r3.y, r3.y, -r3.y
      slt r3.z, -r3.z, r3.z
      mad r3.z, r3.y, r3.z, r3.w
      rcp r3.y, r3.x
      mul r2.w, r2.w, r3.y
      frc r4.z, r2.w
      add r4.w, r2.w, -r4.z
      slt r2.w, r2.w, -r2.w
      slt r4.z, -r4.z, r4.z
      mad r3.w, r2.w, r4.z, r4.w
      rcp r4.z, c104.z
      rcp r4.w, c104.w
      mad r3.zw, r3, -r4, r1.xyxz
      mul r3.zw, r3, c104
      frc r2.w, r6.y
      add r5.x, r6.y, -r2.w
      slt r5.y, r6.y, -r6.y
      slt r2.w, -r2.w, r2.w
      mad r2.w, r5.y, r2.w, r5.x
      mul r5.x, r3.x, r2.w
      sge r5.x, r5.x, -r5.x
      lrp r6.x, r5.x, r3.x, -r3.x
      rcp r3.x, r6.x
      mul r3.x, r2.w, r3.x
      frc r3.x, r3.x
      mul r3.x, r3.x, r6.x
      frc r5.x, r3.x
      add r5.y, r3.x, -r5.x
      slt r3.x, r3.x, -r3.x
      slt r5.x, -r5.x, r5.x
      mad r5.z, r3.x, r5.x, r5.y
      mul r2.w, r3.y, r2.w
      frc r3.x, r2.w
      add r3.y, r2.w, -r3.x
      slt r2.w, r2.w, -r2.w
      slt r3.x, -r3.x, r3.x
      mad r5.w, r2.w, r3.x, r3.y
      mul r3.xy, r4.zwzw, r5.zwzw
      mad o7.zw, r3, r4, r3.xyxy
    else
      mov o7.zw, c135.y
      mov r4.x, c135.y
    endif
    mad o5.y, c138.y, r1.y, c138.x
    mad o5.w, c138.y, r1.w, c138.x
    mad o7.y, c138.y, r2.x, c138.x
    mad o6.y, c138.y, r2.y, c138.x
    mad o6.w, c138.y, r2.z, c138.x
    mov o0.xy, r1.xzzw
    mov o3, r0
    mov o4, c125[a0.y]
    mov r4.y, c115[a0.y].x
    mov o8.xy, r4
    mov o9, r0

// approximately 196 instruction slots used
#endif

const BYTE g_vs30_main[] =
{
      0,   3, 254, 255, 254, 255, 
    203,   0,  67,  84,  65,  66, 
     28,   0,   0,   0, 244,   2, 
      0,   0,   0,   3, 254, 255, 
     13,   0,   0,   0,  28,   0, 
      0,   0,  16,   1,   0,   0, 
    237,   2,   0,   0,  32,   1, 
      0,   0,   2,   0,  54,   0, 
     10,   0, 218,   0,  48,   1, 
      0,   0,   0,   0,   0,   0, 
     64,   1,   0,   0,   2,   0, 
     84,   0,  10,   0,  82,   1, 
     84,   1,   0,   0,   0,   0, 
      0,   0, 100,   1,   0,   0, 
      2,   0,  74,   0,  10,   0, 
     42,   1, 116,   1,   0,   0, 
      0,   0,   0,   0, 132,   1, 
      0,   0,   2,   0,  94,   0, 
     10,   0, 122,   1, 160,   1, 
      0,   0,   0,   0,   0,   0, 
    176,   1,   0,   0,   2,   0, 
    105,   0,  10,   0, 166,   1, 
    208,   1,   0,   0,   0,   0, 
      0,   0, 224,   1,   0,   0, 
      2,   0, 104,   0,   1,   0, 
    162,   1, 248,   1,   0,   0, 
      0,   0,   0,   0,   8,   2, 
      0,   0,   2,   0, 115,   0, 
     10,   0, 206,   1,  36,   2, 
      0,   0,   0,   0,   0,   0, 
     52,   2,   0,   0,   2,   0, 
    125,   0,  10,   0, 246,   1, 
     72,   2,   0,   0,   0,   0, 
      0,   0,  88,   2,   0,   0, 
      2,   0,  44,   0,  10,   0, 
    178,   0, 100,   2,   0,   0, 
      0,   0,   0,   0, 116,   2, 
      0,   0,   2,   0,  64,   0, 
     10,   0,   2,   1, 140,   2, 
      0,   0,   0,   0,   0,   0, 
    156,   2,   0,   0,   2,   0, 
      0,   0,   4,   0,   2,   0, 
    176,   2,   0,   0,   0,   0, 
      0,   0, 192,   2,   0,   0, 
      2,   0,   4,   0,  40,   0, 
     18,   0, 204,   2,   0,   0, 
      0,   0,   0,   0, 220,   2, 
      0,   0,   2,   0, 138,   0, 
      1,   0,  42,   2, 248,   1, 
      0,   0,   0,   0,   0,   0, 
     95,  51,  54,  53,  95, 102, 
     65, 108, 112, 104,  97,  85, 
     86,   0, 171, 171,   1,   0, 
      3,   0,   1,   0,   4,   0, 
     10,   0,   0,   0,   0,   0, 
      0,   0,  95,  51,  54,  53, 
     95, 102,  66, 108, 101, 110, 
    100,  65, 108, 112, 104,  97, 
     85,  86,   0, 171,   1,   0, 
      3,   0,   1,   0,   4,   0, 
     10,   0,   0,   0,   0,   0, 
      0,   0,  95,  51,  54,  53, 
     95, 102,  66, 108, 101, 110, 
    100,  85,  86,   0, 171, 171, 
      1,   0,   3,   0,   1,   0, 
      4,   0,  10,   0,   0,   0, 
      0,   0,   0,   0,  95,  51, 
     54,  53,  95, 102,  66, 108, 
    101, 110, 100,  85,  86,  68, 
    105, 115, 116, 111, 114, 116, 
    105, 111, 110,  85,  86,   0, 
    171, 171,   1,   0,   3,   0, 
      1,   0,   4,   0,  10,   0, 
      0,   0,   0,   0,   0,   0, 
     95,  51,  54,  53,  95, 102, 
     70, 108, 105, 112,  98, 111, 
    111, 107,  73, 110, 100, 101, 
    120,  65, 110, 100,  78, 101, 
    120, 116,  82,  97, 116, 101, 
      0, 171,   1,   0,   3,   0, 
      1,   0,   4,   0,  10,   0, 
      0,   0,   0,   0,   0,   0, 
     95,  51,  54,  53,  95, 102, 
     70, 108, 105, 112,  98, 111, 
    111, 107,  80,  97, 114,  97, 
    109, 101, 116, 101, 114,   0, 
      1,   0,   3,   0,   1,   0, 
      4,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,  95,  51, 
     54,  53,  95, 102,  77, 111, 
    100, 101, 108,  65, 108, 112, 
    104,  97,  84, 104, 114, 101, 
    115, 104, 111, 108, 100,   0, 
    171, 171,   1,   0,   3,   0, 
      1,   0,   4,   0,  10,   0, 
      0,   0,   0,   0,   0,   0, 
     95,  51,  54,  53,  95, 102, 
     77, 111, 100, 101, 108,  67, 
    111, 108, 111, 114,   0, 171, 
    171, 171,   1,   0,   3,   0, 
      1,   0,   4,   0,  10,   0, 
      0,   0,   0,   0,   0,   0, 
     95,  51,  54,  53,  95, 102, 
     85,  86,   0, 171, 171, 171, 
      1,   0,   3,   0,   1,   0, 
      4,   0,  10,   0,   0,   0, 
      0,   0,   0,   0,  95,  51, 
     54,  53,  95, 102,  85,  86, 
     68, 105, 115, 116, 111, 114, 
    116, 105, 111, 110,  85,  86, 
      0, 171, 171, 171,   1,   0, 
      3,   0,   1,   0,   4,   0, 
     10,   0,   0,   0,   0,   0, 
      0,   0,  95,  51,  54,  53, 
     95, 109,  67,  97, 109, 101, 
    114,  97,  80, 114, 111, 106, 
      0, 171, 171, 171,   3,   0, 
      3,   0,   4,   0,   4,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,  95,  51,  54,  53, 
     95, 109,  77, 111, 100, 101, 
    108,   0,   3,   0,   3,   0, 
      4,   0,   4,   0,  10,   0, 
      0,   0,   0,   0,   0,   0, 
     95,  51,  54,  53,  95, 109, 
     85,  86,  73, 110, 118, 101, 
    114, 115, 101, 100,   0, 118, 
    115,  95,  51,  95,  48,   0, 
     77, 105,  99, 114, 111, 115, 
    111, 102, 116,  32,  40,  82, 
     41,  32,  72,  76,  83,  76, 
     32,  83, 104,  97, 100, 101, 
    114,  32,  67, 111, 109, 112, 
    105, 108, 101, 114,  32,  57, 
     46,  50,  57,  46,  57,  53, 
     50,  46,  51,  49,  49,  49, 
      0, 171, 171, 171,  81,   0, 
      0,   5, 135,   0,  15, 160, 
      0,   0, 128,  64,   0,   0, 
      0,   0,   0,   0, 128,  63, 
      0,   0, 128, 191,  81,   0, 
      0,   5, 136,   0,  15, 160, 
      0,   0,   0, 192,   0,   0, 
      0,  63,   0,   0,   0,  64, 
      0,   0,   0,   0,  31,   0, 
      0,   2,   5,   0,   0, 128, 
      0,   0,  15, 144,  31,   0, 
      0,   2,   5,   0,   2, 128, 
      1,   0,  15, 144,  31,   0, 
      0,   2,   5,   0,   3, 128, 
      2,   0,  15, 144,  31,   0, 
      0,   2,   5,   0,   4, 128, 
      3,   0,  15, 144,  31,   0, 
      0,   2,   5,   0,   6, 128, 
      4,   0,  15, 144,  31,   0, 
      0,   2,   5,   0,   0, 128, 
      0,   0,   3, 224,  31,   0, 
      0,   2,   5,   0,   1, 128, 
      1,   0,  15, 224,  31,   0, 
      0,   2,   5,   0,   2, 128, 
      2,   0,  15, 224,  31,   0, 
      0,   2,   5,   0,   3, 128, 
      3,   0,  15, 224,  31,   0, 
      0,   2,   5,   0,   4, 128, 
      4,   0,  15, 224,  31,   0, 
      0,   2,   5,   0,   5, 128, 
      5,   0,  15, 224,  31,   0, 
      0,   2,   5,   0,   6, 128, 
      6,   0,  15, 224,  31,   0, 
      0,   2,   5,   0,   7, 128, 
      7,   0,  15, 224,  31,   0, 
      0,   2,   5,   0,   8, 128, 
      8,   0,   3, 224,  31,   0, 
      0,   2,   0,   0,   0, 128, 
      9,   0,  15, 224,  19,   0, 
      0,   2,   0,   0,   1, 128, 
      4,   0,   0, 144,   2,   0, 
      0,   3,   0,   0,   2, 128, 
      0,   0,   0, 129,   4,   0, 
      0, 144,  12,   0,   0,   3, 
      0,   0,   4, 128,   4,   0, 
      0, 144,   4,   0,   0, 145, 
     12,   0,   0,   3,   0,   0, 
      1, 128,   0,   0,   0, 129, 
      0,   0,   0, 128,   4,   0, 
      0,   4,   0,   0,   1, 128, 
      0,   0, 170, 128,   0,   0, 
      0, 128,   0,   0,  85, 128, 
      5,   0,   0,   3,   0,   0, 
      2, 128,   0,   0,   0, 128, 
    135,   0,   0, 160,  46,   0, 
      0,   2,   0,   0,   3, 176, 
      0,   0, 225, 128,   1,   0, 
      0,   2,   0,   0,   7, 128, 
      0,   0, 228, 144,   2,   0, 
      0,   3,   1,   0,   7, 128, 
      0,   0, 228, 128,   1,   0, 
    228, 144,   2,   0,   0,   3, 
      0,   0,   7, 128,   0,   0, 
    228, 128,   2,   0, 228, 144, 
      5,   0,   0,   4,   2,   0, 
     15, 128,   0,   0,  85, 144, 
      5,  32, 228, 160,   0,   0, 
      0, 176,   4,   0,   0,   5, 
      2,   0,  15, 128,   4,  32, 
    228, 160,   0,   0,   0, 176, 
      0,   0,   0, 144,   2,   0, 
    228, 128,   4,   0,   0,   5, 
      2,   0,  15, 128,   6,  32, 
    228, 160,   0,   0,   0, 176, 
      0,   0, 170, 144,   2,   0, 
    228, 128,   2,   0,   0,   4, 
      2,   0,  15, 128,   2,   0, 
    228, 128,   7,  32, 228, 160, 
      0,   0,   0, 176,   5,   0, 
      0,   4,   3,   0,  15, 128, 
      1,   0,  85, 128,   5,  32, 
    228, 160,   0,   0,   0, 176, 
      4,   0,   0,   5,   3,   0, 
     15, 128,   4,  32, 228, 160, 
      0,   0,   0, 176,   1,   0, 
      0, 128,   3,   0, 228, 128, 
      4,   0,   0,   5,   1,   0, 
     15, 128,   6,  32, 228, 160, 
      0,   0,   0, 176,   1,   0, 
    170, 128,   3,   0, 228, 128, 
      2,   0,   0,   4,   1,   0, 
     15, 128,   1,   0, 228, 128, 
      7,  32, 228, 160,   0,   0, 
      0, 176,   5,   0,   0,   4, 
      3,   0,  15, 128,   0,   0, 
     85, 128,   5,  32, 228, 160, 
      0,   0,   0, 176,   4,   0, 
      0,   5,   3,   0,  15, 128, 
      4,  32, 228, 160,   0,   0, 
      0, 176,   0,   0,   0, 128, 
      3,   0, 228, 128,   4,   0, 
      0,   5,   0,   0,  15, 128, 
      6,  32, 228, 160,   0,   0, 
      0, 176,   0,   0, 170, 128, 
      3,   0, 228, 128,   2,   0, 
      0,   4,   0,   0,  15, 128, 
      0,   0, 228, 128,   7,  32, 
    228, 160,   0,   0,   0, 176, 
      2,   0,   0,   3,   3,   0, 
     15, 128,   2,   0, 228, 129, 
      1,   0, 228, 128,   9,   0, 
      0,   3,   3,   0,   1, 128, 
      3,   0, 228, 128,   3,   0, 
    228, 128,   7,   0,   0,   2, 
      3,   0,   1, 128,   3,   0, 
      0, 128,  18,   0,   0,   4, 
      4,   0,  15, 128,   3,   0, 
      0, 128,   1,   0, 228, 128, 
      2,   0, 228, 128,   2,   0, 
      0,   3,   1,   0,  15, 128, 
      2,   0, 228, 129,   0,   0, 
    228, 128,   9,   0,   0,   3, 
      1,   0,   1, 128,   1,   0, 
    228, 128,   1,   0, 228, 128, 
      7,   0,   0,   2,   1,   0, 
      1, 128,   1,   0,   0, 128, 
     18,   0,   0,   4,   3,   0, 
     15, 128,   1,   0,   0, 128, 
      0,   0, 228, 128,   2,   0, 
    228, 128,   5,   0,   0,   3, 
      0,   0,  15, 128,   2,   0, 
     85, 128,   1,   0, 228, 160, 
      4,   0,   0,   4,   0,   0, 
     15, 128,   0,   0, 228, 160, 
      2,   0,   0, 128,   0,   0, 
    228, 128,   4,   0,   0,   4, 
      0,   0,  15, 128,   2,   0, 
    228, 160,   2,   0, 170, 128, 
      0,   0, 228, 128,   4,   0, 
      0,   4,   0,   0,  15, 128, 
      3,   0, 228, 160,   2,   0, 
    255, 128,   0,   0, 228, 128, 
      4,   0,   0,   6,   1,   0, 
      3, 128,   3,   0, 228, 144, 
     44,  32, 238, 160,   0,   0, 
     85, 176,  44,  32, 228, 160, 
      0,   0,  85, 176,   5,   0, 
      0,   3,   2,   0,  15, 128, 
      4,   0,  85, 128,   1,   0, 
    228, 160,   4,   0,   0,   4, 
      2,   0,  15, 128,   0,   0, 
    228, 160,   4,   0,   0, 128, 
      2,   0, 228, 128,   4,   0, 
      0,   4,   2,   0,  15, 128, 
      2,   0, 228, 160,   4,   0, 
    170, 128,   2,   0, 228, 128, 
      4,   0,   0,   4,   1,   0, 
     15, 224,   3,   0, 228, 160, 
      4,   0, 255, 128,   2,   0, 
    228, 128,   5,   0,   0,   3, 
      2,   0,  15, 128,   3,   0, 
     85, 128,   1,   0, 228, 160, 
      4,   0,   0,   4,   2,   0, 
     15, 128,   0,   0, 228, 160, 
      3,   0,   0, 128,   2,   0, 
    228, 128,   4,   0,   0,   4, 
      2,   0,  15, 128,   2,   0, 
    228, 160,   3,   0, 170, 128, 
      2,   0, 228, 128,   4,   0, 
      0,   4,   2,   0,  15, 224, 
      3,   0, 228, 160,   3,   0, 
    255, 128,   2,   0, 228, 128, 
      4,   0,   0,   4,   1,   0, 
      4, 128, 138,   0,  85, 160, 
      1,   0,  85, 128, 138,   0, 
      0, 160,   4,   0,   0,   6, 
      5,   0,   1, 224,   3,   0, 
      0, 144,  54,  32, 170, 160, 
      0,   0,  85, 176,  54,  32, 
      0, 160,   0,   0,  85, 176, 
      4,   0,   0,   6,   1,   0, 
      2, 128,   3,   0,  85, 144, 
     54,  32, 255, 160,   0,   0, 
     85, 176,  54,  32,  85, 160, 
      0,   0,  85, 176,   4,   0, 
      0,   6,   5,   0,   4, 224, 
      3,   0,   0, 144,  64,  32, 
    170, 160,   0,   0,  85, 176, 
     64,  32,   0, 160,   0,   0, 
     85, 176,   4,   0,   0,   6, 
      1,   0,   8, 128,   3,   0, 
     85, 144,  64,  32, 255, 160, 
      0,   0,  85, 176,  64,  32, 
     85, 160,   0,   0,  85, 176, 
      4,   0,   0,   6,   7,   0, 
      1, 224,   3,   0,   0, 144, 
     74,  32, 170, 160,   0,   0, 
     85, 176,  74,  32,   0, 160, 
      0,   0,  85, 176,   4,   0, 
      0,   6,   2,   0,   1, 128, 
      3,   0,  85, 144,  74,  32, 
    255, 160,   0,   0,  85, 176, 
     74,  32,  85, 160,   0,   0, 
     85, 176,   4,   0,   0,   6, 
      6,   0,   1, 224,   3,   0, 
      0, 144,  84,  32, 170, 160, 
      0,   0,  85, 176,  84,  32, 
      0, 160,   0,   0,  85, 176, 
      4,   0,   0,   6,   2,   0, 
      2, 128,   3,   0,  85, 144, 
     84,  32, 255, 160,   0,   0, 
     85, 176,  84,  32,  85, 160, 
      0,   0,  85, 176,   4,   0, 
      0,   6,   6,   0,   4, 224, 
      3,   0,   0, 144,  94,  32, 
    170, 160,   0,   0,  85, 176, 
     94,  32,   0, 160,   0,   0, 
     85, 176,   4,   0,   0,   6, 
      2,   0,   4, 128,   3,   0, 
     85, 144,  94,  32, 255, 160, 
      0,   0,  85, 176,  94,  32, 
     85, 160,   0,   0,  85, 176, 
      1,   0,   0,   2,   3,   0, 
     15, 128, 104,   0, 228, 160, 
     41,   0,   4,   2, 135,   0, 
     85, 160,   3,   0,   0, 128, 
     19,   0,   0,   3,   4,   0, 
      1, 128, 105,  32,   0, 160, 
      0,   0,  85, 176,   2,   0, 
      0,   4,   5,   0,   1, 128, 
      4,   0,   0, 129, 105,  32, 
      0, 160,   0,   0,  85, 176, 
      2,   0,   0,   3,   2,   0, 
      8, 128,   5,   0,   0, 128, 
    135,   0, 170, 160,   5,   0, 
      0,   3,   3,   0,   1, 128, 
    104,   0, 255, 160, 104,   0, 
    170, 160,  35,   0,   0,   2, 
      4,   0,   4, 128, 104,   0, 
     85, 160,  41,   0,   3,   2, 
      4,   0, 170, 129,   4,   0, 
    170, 128,  13,   0,   0,   3, 
      4,   0,   4, 128,   2,   0, 
    255, 128,   3,   0,   0, 128, 
      4,   0,   0,   4,   4,   0, 
      8, 128,   3,   0, 170, 128, 
      3,   0, 255, 128, 135,   0, 
    255, 160,   2,   0,   0,   3, 
      5,   0,   2, 128,   5,   0, 
      0, 128, 135,   0, 170, 160, 
     18,   0,   0,   4,   6,   0, 
      3, 128,   4,   0, 170, 128, 
      4,   0, 255, 128,   5,   0, 
    228, 128,  42,   0,   0,   0, 
      2,   0,   0,   3,   4,   0, 
      4, 128,   3,   0,  85, 128, 
    135,   0, 255, 160,  41,   0, 
      3,   2,   4,   0, 170, 140, 
      4,   0, 170, 139,   6,   0, 
      0,   2,   4,   0,   4, 128, 
      3,   0,   0, 128,   5,   0, 
      0,   3,   4,   0,   8, 128, 
      4,   0, 170, 128,   5,   0, 
      0, 128,  19,   0,   0,   2, 
      5,   0,   2, 128,   4,   0, 
    255, 128,   2,   0,   0,   3, 
      4,   0,   8, 128,   4,   0, 
    255, 128,   5,   0,  85, 129, 
      4,   0,   0,   4,   6,   0, 
      1, 128,   3,   0,   0, 128, 
      4,   0, 255, 129,   5,   0, 
      0, 128,   5,   0,   0,   3, 
      4,   0,   4, 128,   2,   0, 
    255, 128,   4,   0, 170, 128, 
     19,   0,   0,   2,   4,   0, 
      8, 128,   4,   0, 170, 128, 
      2,   0,   0,   3,   4,   0, 
      4, 128,   4,   0, 255, 129, 
      4,   0, 170, 128,   4,   0, 
      0,   4,   6,   0,   2, 128, 
      3,   0,   0, 128,   4,   0, 
    170, 129,   2,   0, 255, 128, 
     42,   0,   0,   0,   2,   0, 
      0,   3,   3,   0,   2, 128, 
      3,   0,  85, 128, 136,   0, 
      0, 160,  13,   0,   0,   3, 
      3,   0,   2, 128,   3,   0, 
     85, 140,   3,   0,  85, 139, 
      6,   0,   0,   2,   4,   0, 
      4, 128,   3,   0,   0, 128, 
      5,   0,   0,   3,   4,   0, 
      8, 128,   4,   0, 170, 128, 
      5,   0,   0, 128,  19,   0, 
      0,   2,   5,   0,   2, 128, 
      4,   0, 255, 128,   2,   0, 
      0,   3,   4,   0,   8, 128, 
      4,   0, 255, 128,   5,   0, 
     85, 129,   5,   0,   0,   3, 
      5,   0,   2, 128,   4,   0, 
    255, 128, 136,   0,  85, 160, 
     19,   0,   0,   2,   5,   0, 
      8, 128,   5,   0,  85, 128, 
      2,   0,   0,   3,   5,   0, 
      2, 128,   5,   0, 255, 129, 
      5,   0,  85, 128,   4,   0, 
      0,   4,   5,   0,   2, 128, 
      5,   0,  85, 128, 136,   0, 
    170, 161,   4,   0, 255, 128, 
      2,   0,   0,   3,   5,   0, 
      2, 128,   5,   0,  85, 128, 
    135,   0, 255, 160,  13,   0, 
      0,   3,   5,   0,   2, 128, 
      5,   0,  85, 140,   5,   0, 
     85, 139,   5,   0,   0,   3, 
      5,   0,   8, 128,   3,   0, 
      0, 128,   4,   0, 255, 128, 
      4,   0,   0,   4,   4,   0, 
      8, 128,   3,   0,   0, 128, 
      4,   0, 255, 129,   5,   0, 
      0, 128,   4,   0,   0,   4, 
      3,   0,   4, 128,   3,   0, 
    170, 128,   3,   0, 255, 128, 
    135,   0, 255, 160,  19,   0, 
      0,   2,   3,   0,   8, 128, 
      5,   0, 255, 129,   2,   0, 
      0,   3,   3,   0,   8, 128, 
      3,   0, 255, 129,   4,   0, 
    255, 128,   2,   0,   0,   3, 
      3,   0,   8, 128,   3,   0, 
    255, 129,   3,   0, 170, 128, 
     18,   0,   0,   4,   7,   0, 
      1, 128,   5,   0,  85, 128, 
      3,   0, 255, 128,   4,   0, 
    255, 128,   5,   0,   0,   3, 
      3,   0,   8, 128,   2,   0, 
    255, 128,   4,   0, 170, 128, 
     19,   0,   0,   2,   4,   0, 
      4, 128,   3,   0, 255, 128, 
      2,   0,   0,   3,   3,   0, 
      8, 128,   3,   0, 255, 128, 
      4,   0, 170, 129,   5,   0, 
      0,   3,   4,   0,   4, 128, 
      3,   0, 255, 128, 136,   0, 
     85, 160,  19,   0,   0,   2, 
      4,   0,   8, 128,   4,   0, 
    170, 128,   2,   0,   0,   3, 
      4,   0,   4, 128,   4,   0, 
    255, 129,   4,   0, 170, 128, 
      4,   0,   0,   4,   4,   0, 
      4, 128,   4,   0, 170, 128, 
    136,   0, 170, 161,   3,   0, 
    255, 128,   2,   0,   0,   3, 
      4,   0,   4, 128,   4,   0, 
    170, 128, 135,   0, 255, 160, 
     13,   0,   0,   3,   4,   0, 
      4, 128,   4,   0, 170, 140, 
      4,   0, 170, 139,   5,   0, 
      0,   3,   4,   0,   8, 128, 
      3,   0, 255, 128,   3,   0, 
      0, 128,   4,   0,   0,   4, 
      2,   0,   8, 128,   3,   0, 
      0, 128,   3,   0, 255, 129, 
      2,   0, 255, 128,  19,   0, 
      0,   2,   3,   0,   1, 128, 
      4,   0, 255, 129,   2,   0, 
      0,   3,   3,   0,   1, 128, 
      2,   0, 255, 128,   3,   0, 
      0, 129,   2,   0,   0,   3, 
      3,   0,   1, 128,   3,   0, 
      0, 129,   3,   0, 170, 128, 
     18,   0,   0,   4,   7,   0, 
      2, 128,   4,   0, 170, 128, 
      3,   0,   0, 128,   2,   0, 
    255, 128,   2,   0,   0,   3, 
      5,   0,   4, 128,   5,   0, 
      0, 128, 135,   0, 170, 160, 
     18,   0,   0,   4,   6,   0, 
      3, 128,   3,   0,  85, 128, 
      7,   0, 228, 128,   5,   0, 
    232, 128,  43,   0,   0,   0, 
     43,   0,   0,   0,  19,   0, 
      0,   2,   2,   0,   8, 128, 
      6,   0,   0, 128,   2,   0, 
      0,   3,   3,   0,   1, 128, 
      6,   0,   0, 128,   2,   0, 
    255, 129,  12,   0,   0,   3, 
      3,   0,   2, 128,   6,   0, 
      0, 128,   6,   0,   0, 129, 
     12,   0,   0,   3,   2,   0, 
      8, 128,   2,   0, 255, 129, 
      2,   0, 255, 128,   4,   0, 
      0,   4,   2,   0,   8, 128, 
      3,   0,  85, 128,   2,   0, 
    255, 128,   3,   0,   0, 128, 
     19,   0,   0,   2,   3,   0, 
      1, 128, 104,   0, 170, 160, 
      2,   0,   0,   3,   3,   0, 
      2, 128,   3,   0,   0, 129, 
    104,   0, 170, 160,  12,   0, 
      0,   3,   3,   0,   4, 128, 
    104,   0, 170, 160, 104,   0, 
    170, 161,  12,   0,   0,   3, 
      3,   0,   1, 128,   3,   0, 
      0, 129,   3,   0,   0, 128, 
      4,   0,   0,   4,   3,   0, 
      1, 128,   3,   0, 170, 128, 
      3,   0,   0, 128,   3,   0, 
     85, 128,   5,   0,   0,   3, 
      3,   0,   2, 128,   2,   0, 
    255, 128,   3,   0,   0, 128, 
     13,   0,   0,   3,   3,   0, 
      2, 128,   3,   0,  85, 128, 
      3,   0,  85, 129,  18,   0, 
      0,   4,   4,   0,   4, 128, 
      3,   0,  85, 128,   3,   0, 
      0, 128,   3,   0,   0, 129, 
      6,   0,   0,   2,   3,   0, 
      2, 128,   4,   0, 170, 128, 
      5,   0,   0,   3,   3,   0, 
      2, 128,   2,   0, 255, 128, 
      3,   0,  85, 128,  19,   0, 
      0,   2,   3,   0,   2, 128, 
      3,   0,  85, 128,   5,   0, 
      0,   3,   3,   0,   2, 128, 
      3,   0,  85, 128,   4,   0, 
    170, 128,  19,   0,   0,   2, 
      3,   0,   4, 128,   3,   0, 
     85, 128,   2,   0,   0,   3, 
      3,   0,   8, 128,   3,   0, 
     85, 128,   3,   0, 170, 129, 
     12,   0,   0,   3,   3,   0, 
      2, 128,   3,   0,  85, 128, 
      3,   0,  85, 129,  12,   0, 
      0,   3,   3,   0,   4, 128, 
      3,   0, 170, 129,   3,   0, 
    170, 128,   4,   0,   0,   4, 
      3,   0,   4, 128,   3,   0, 
     85, 128,   3,   0, 170, 128, 
      3,   0, 255, 128,   6,   0, 
      0,   2,   3,   0,   2, 128, 
      3,   0,   0, 128,   5,   0, 
      0,   3,   2,   0,   8, 128, 
      2,   0, 255, 128,   3,   0, 
     85, 128,  19,   0,   0,   2, 
      4,   0,   4, 128,   2,   0, 
    255, 128,   2,   0,   0,   3, 
      4,   0,   8, 128,   2,   0, 
    255, 128,   4,   0, 170, 129, 
     12,   0,   0,   3,   2,   0, 
      8, 128,   2,   0, 255, 128, 
      2,   0, 255, 129,  12,   0, 
      0,   3,   4,   0,   4, 128, 
      4,   0, 170, 129,   4,   0, 
    170, 128,   4,   0,   0,   4, 
      3,   0,   8, 128,   2,   0, 
    255, 128,   4,   0, 170, 128, 
      4,   0, 255, 128,   6,   0, 
      0,   2,   4,   0,   4, 128, 
    104,   0, 170, 160,   6,   0, 
      0,   2,   4,   0,   8, 128, 
    104,   0, 255, 160,   4,   0, 
      0,   4,   3,   0,  12, 128, 
      3,   0, 228, 128,   4,   0, 
    228, 129,   1,   0, 132, 128, 
      5,   0,   0,   3,   3,   0, 
     12, 128,   3,   0, 228, 128, 
    104,   0, 228, 160,  19,   0, 
      0,   2,   2,   0,   8, 128, 
      6,   0,  85, 128,   2,   0, 
      0,   3,   5,   0,   1, 128, 
      6,   0,  85, 128,   2,   0, 
    255, 129,  12,   0,   0,   3, 
      5,   0,   2, 128,   6,   0, 
     85, 128,   6,   0,  85, 129, 
     12,   0,   0,   3,   2,   0, 
      8, 128,   2,   0, 255, 129, 
      2,   0, 255, 128,   4,   0, 
      0,   4,   2,   0,   8, 128, 
      5,   0,  85, 128,   2,   0, 
    255, 128,   5,   0,   0, 128, 
      5,   0,   0,   3,   5,   0, 
      1, 128,   3,   0,   0, 128, 
      2,   0, 255, 128,  13,   0, 
      0,   3,   5,   0,   1, 128, 
      5,   0,   0, 128,   5,   0, 
      0, 129,  18,   0,   0,   4, 
      6,   0,   1, 128,   5,   0, 
      0, 128,   3,   0,   0, 128, 
      3,   0,   0, 129,   6,   0, 
      0,   2,   3,   0,   1, 128, 
      6,   0,   0, 128,   5,   0, 
      0,   3,   3,   0,   1, 128, 
      2,   0, 255, 128,   3,   0, 
      0, 128,  19,   0,   0,   2, 
      3,   0,   1, 128,   3,   0, 
      0, 128,   5,   0,   0,   3, 
      3,   0,   1, 128,   3,   0, 
      0, 128,   6,   0,   0, 128, 
     19,   0,   0,   2,   5,   0, 
      1, 128,   3,   0,   0, 128, 
      2,   0,   0,   3,   5,   0, 
      2, 128,   3,   0,   0, 128, 
      5,   0,   0, 129,  12,   0, 
      0,   3,   3,   0,   1, 128, 
      3,   0,   0, 128,   3,   0, 
      0, 129,  12,   0,   0,   3, 
      5,   0,   1, 128,   5,   0, 
      0, 129,   5,   0,   0, 128, 
      4,   0,   0,   4,   5,   0, 
      4, 128,   3,   0,   0, 128, 
      5,   0,   0, 128,   5,   0, 
     85, 128,   5,   0,   0,   3, 
      2,   0,   8, 128,   3,   0, 
     85, 128,   2,   0, 255, 128, 
     19,   0,   0,   2,   3,   0, 
      1, 128,   2,   0, 255, 128, 
      2,   0,   0,   3,   3,   0, 
      2, 128,   2,   0, 255, 128, 
      3,   0,   0, 129,  12,   0, 
      0,   3,   2,   0,   8, 128, 
      2,   0, 255, 128,   2,   0, 
    255, 129,  12,   0,   0,   3, 
      3,   0,   1, 128,   3,   0, 
      0, 129,   3,   0,   0, 128, 
      4,   0,   0,   4,   5,   0, 
      8, 128,   2,   0, 255, 128, 
      3,   0,   0, 128,   3,   0, 
     85, 128,   5,   0,   0,   3, 
      3,   0,   3, 128,   4,   0, 
    238, 128,   5,   0, 238, 128, 
      4,   0,   0,   4,   7,   0, 
     12, 224,   3,   0, 228, 128, 
      4,   0, 228, 128,   3,   0, 
     68, 128,  42,   0,   0,   0, 
      1,   0,   0,   2,   7,   0, 
     12, 224, 135,   0,  85, 160, 
      1,   0,   0,   2,   4,   0, 
      1, 128, 135,   0,  85, 160, 
     43,   0,   0,   0,   4,   0, 
      0,   4,   5,   0,   2, 224, 
    138,   0,  85, 160,   1,   0, 
     85, 128, 138,   0,   0, 160, 
      4,   0,   0,   4,   5,   0, 
      8, 224, 138,   0,  85, 160, 
      1,   0, 255, 128, 138,   0, 
      0, 160,   4,   0,   0,   4, 
      7,   0,   2, 224, 138,   0, 
     85, 160,   2,   0,   0, 128, 
    138,   0,   0, 160,   4,   0, 
      0,   4,   6,   0,   2, 224, 
    138,   0,  85, 160,   2,   0, 
     85, 128, 138,   0,   0, 160, 
      4,   0,   0,   4,   6,   0, 
      8, 224, 138,   0,  85, 160, 
      2,   0, 170, 128, 138,   0, 
      0, 160,   1,   0,   0,   2, 
      0,   0,   3, 224,   1,   0, 
    232, 128,   1,   0,   0,   2, 
      3,   0,  15, 224,   0,   0, 
    228, 128,   1,   0,   0,   3, 
      4,   0,  15, 224, 125,  32, 
    228, 160,   0,   0,  85, 176, 
      1,   0,   0,   3,   4,   0, 
      2, 128, 115,  32,   0, 160, 
      0,   0,  85, 176,   1,   0, 
      0,   2,   8,   0,   3, 224, 
      4,   0, 228, 128,   1,   0, 
      0,   2,   9,   0,  15, 224, 
      0,   0, 228, 128, 255, 255, 
      0,   0
};