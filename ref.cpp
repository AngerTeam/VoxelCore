// bad sp value at call has been detected, the output may be wrong!
int LibraryVersion()
{
  UArray *v0; // eax
  int result; // eax
  int v2; // ecx
  int v3; // edi
  int v4; // edx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  _DWORD *v8; // ecx
  int v9; // eax
  char *v10; // edi
  int v11; // edx
  int v12; // eax
  char *v13; // edi
  int v14; // ecx
  void *v15; // edx
  CompanyName::Utils *v16; // edi
  UArray *v17; // esi
  unsigned int Data; // eax
  unsigned int v19; // ebp
  unsigned int v20; // ecx
  unsigned int v21; // edx
  int v22; // esi
  int v23; // ecx
  char *v24; // esi
  unsigned int v25; // ebp
  void *v26; // edx
  void *v27; // edx
  int v28; // edx
  int v29; // edx
  CompanyName::Utils *i; // edx
  int v31; // ebp
  int v32; // ebp
  int v33; // ecx
  int v34; // ecx
  int v35; // esi
  char *v36; // [esp+4h] [ebp-118h]
  unsigned int v37; // [esp+18h] [ebp-104h]
  int v38; // [esp+1Ch] [ebp-100h]
  unsigned int v39; // [esp+28h] [ebp-F4h]
  char v40; // [esp+36h] [ebp-E6h] BYREF
  char v41; // [esp+37h] [ebp-E5h] BYREF
  unsigned int v42; // [esp+38h] [ebp-E4h] BYREF
  int v43; // [esp+3Ch] [ebp-E0h] BYREF
  int v44[2]; // [esp+40h] [ebp-DCh] BYREF
  int v45; // [esp+48h] [ebp-D4h] BYREF
  int *v46; // [esp+4Ch] [ebp-D0h] BYREF
  int v47[4]; // [esp+50h] [ebp-CCh] BYREF
  int v48; // [esp+60h] [ebp-BCh]
  int v49; // [esp+64h] [ebp-B8h]
  char v50[4]; // [esp+68h] [ebp-B4h] BYREF
  int v51; // [esp+6Ch] [ebp-B0h]
  int v52; // [esp+70h] [ebp-ACh] BYREF
  int v53[29]; // [esp+74h] [ebp-A8h] BYREF
  char v54; // [esp+E8h] [ebp-34h]
  char v55; // [esp+E9h] [ebp-33h]
  int v56; // [esp+ECh] [ebp-30h]
  int v57; // [esp+F0h] [ebp-2Ch]
  int v58; // [esp+F4h] [ebp-28h]
  int v59; // [esp+F8h] [ebp-24h]
  unsigned int v60; // [esp+FCh] [ebp-20h]

  v60 = __readgsdword(0x14u);
  v0 = (UArray *)LibraryVersionArray;
  if ( !LibraryVersionArray )
  {
    sub_9C220(v53);
    v54 = 0;
    v53[28] = 0;
    v55 = 0;
    v53[0] = (int)(&`vtable for'std::ios + 2);
    v56 = 0;
    v57 = 0;
    v3 = (int)*(&off_14C580 + 2);
    v4 = (int)*(&off_14C580 + 3);
    v58 = 0;
    v5 = *(_DWORD *)(v3 - 12);
    v59 = 0;
    v44[0] = v3;
    *(int *)((char *)v44 + v5) = v4;
    v44[1] = 0;
    sub_9B240((char *)v44 + *(_DWORD *)(v3 - 12), 0);
    v6 = (int)*(&off_14C580 + 5);
    v7 = (int)*(*(&off_14C580 + 4) - 3);
    v45 = (int)*(&off_14C580 + 4);
    v8 = (int *)((char *)&v45 + v7);
    *v8 = v6;
    sub_9B240(v8, 0);
    *(int *)((char *)v44 + (_DWORD)*(*(&off_14C580 + 1) - 3)) = (int)*(&off_14C580 + 6);
    v44[0] = (int)&unk_14C5C0 + 12;
    v53[0] = (int)&unk_14C5C0 + 52;
    v45 = (int)&unk_14C5C0 + 32;
    memset(v47, 0, sizeof(v47));
    v46 = &`vtable for'std::streambuf + 2;
    v48 = 0;
    v49 = 0;
    sub_BC830(v50);
    v51 = 24;
    v46 = &`vtable for'std::stringbuf + 2;
    v52 = (int)&unk_156410 + 12;
    sub_9B240(v53, &v46);
    std::string::append(&v45, "Voxel Core, platform: ", 22);
    std::string::append(&v45, "ANDROID", 7);
    std::string::append(&v45, ", version: ", 11);
    std::string::append_int(&v45, 1);
    std::string::append(&v45, ".", 1);
    v9 = v45;
    v10 = (char *)&v45 + *(_DWORD *)(v45 - 12);
    if ( !v10[117] )
    {
      v11 = *((_DWORD *)v10 + 31);
      if ( !v11 )
        sub_E8860();
      if ( !*(_BYTE *)(v11 + 28) )
      {
        v31 = *((_DWORD *)v10 + 31);
        sub_99940(v31);
        (*(void (__cdecl **)(int, int))(*(_DWORD *)v31 + 24))(v31, 32);
        v9 = v45;
      }
      v10[117] = 1;
    }
    v10[116] = 48;
    *(int *)((char *)v47 + *(_DWORD *)(v9 - 12)) = 2;
    std::string::append_int(&v45, 8);
    std::string::append(&v45, ".", 1);
    v12 = v45;
    v13 = (char *)&v45 + *(_DWORD *)(v45 - 12);
    if ( !v13[117] )
    {
      v14 = *((_DWORD *)v13 + 31);
      if ( !v14 )
        sub_E8860();
      if ( !*(_BYTE *)(v14 + 28) )
      {
        v32 = *((_DWORD *)v13 + 31);
        sub_99940(v32);
        (*(void (__cdecl **)(int, int))(*(_DWORD *)v32 + 24))(v32, 32);
        v12 = v45;
      }
      v13[117] = 1;
    }
    v13[116] = 48;
    *(int *)((char *)v47 + *(_DWORD *)(v12 - 12)) = 4;
    std::string::append_int(&v45, 14);
    v42 = (unsigned int)&unk_156410 + 12;
    if ( v48 )
    {
      v43 = sub_2D960(&v41);
      sub_EBE10(&v42, &v43);
      v15 = (void *)(v43 - 12);
      if ( (_UNKNOWN *)(v43 - 12) != &unk_156410 )
      {
        if ( &pthread_create )
        {
          v35 = _InterlockedExchangeAdd((volatile signed __int32 *)(v43 - 4), 0xFFFFFFFF);
        }
        else
        {
          v35 = *(_DWORD *)(v43 - 4);
          *(_DWORD *)(v43 - 4) = v35 - 1;
        }
        if ( v35 <= 0 )
        {
          v36 = &v40;
          sub_EEFB0(v15);
        }
      }
    }
    else
    {
      sub_EF300(&v42, &v52);
    }
    v16 = *(CompanyName::Utils **)(v42 - 12);
    v38 = CompanyName::Utils::NearestPowerOfTwo(v16, (int)v36);
    v17 = (UArray *)operator new(0x1Cu);
    UArray::UArray(v17, v38, 1);
    LibraryVersionArray = v17;
    Data = UArray::GetData(v17);
    v19 = v42;
    if ( (int)v16 <= 0 )
    {
      v16 = 0;
    }
    else if ( (Data >= v42 + 16 || v42 >= Data + 16) && (unsigned int)v16 > 0xF )
    {
      v20 = v42;
      v39 = 0;
      v21 = 16 * ((((unsigned int)v16 - 16) >> 4) + 1);
      v22 = 0;
      do
      {
        ++v39;
        *(__m128i *)(Data + v22) = _mm_loadu_si128((const __m128i *)(v20 + v22));
        v22 += 16;
      }
      while ( (((unsigned int)v16 - 16) >> 4) + 1 > v39 );
      if ( v16 != (CompanyName::Utils *)v21 )
      {
        *(_BYTE *)(Data + v21) = *(_BYTE *)(v20 + v21);
        if ( (int)v16 > (int)(v21 + 1) )
        {
          *(_BYTE *)(Data + v21 + 1) = *(_BYTE *)(v20 + v21 + 1);
          if ( (int)v16 > (int)(v21 + 2) )
          {
            *(_BYTE *)(Data + v21 + 2) = *(_BYTE *)(v20 + v21 + 2);
            if ( (int)v16 > (int)(v21 + 3) )
            {
              *(_BYTE *)(Data + v21 + 3) = *(_BYTE *)(v20 + v21 + 3);
              if ( (int)v16 > (int)(v21 + 4) )
              {
                *(_BYTE *)(Data + v21 + 4) = *(_BYTE *)(v20 + v21 + 4);
                if ( (int)v16 > (int)(v21 + 5) )
                {
                  *(_BYTE *)(Data + v21 + 5) = *(_BYTE *)(v20 + v21 + 5);
                  if ( (int)v16 > (int)(v21 + 6) )
                  {
                    *(_BYTE *)(Data + v21 + 6) = *(_BYTE *)(v20 + v21 + 6);
                    if ( (int)v16 > (int)(v21 + 7) )
                    {
                      *(_BYTE *)(Data + v21 + 7) = *(_BYTE *)(v20 + v21 + 7);
                      if ( (int)v16 > (int)(v21 + 8) )
                      {
                        *(_BYTE *)(Data + v21 + 8) = *(_BYTE *)(v20 + v21 + 8);
                        if ( (int)v16 > (int)(v21 + 9) )
                        {
                          *(_BYTE *)(Data + v21 + 9) = *(_BYTE *)(v20 + v21 + 9);
                          if ( (int)v16 > (int)(v21 + 10) )
                          {
                            *(_BYTE *)(Data + v21 + 10) = *(_BYTE *)(v20 + v21 + 10);
                            if ( (int)v16 > (int)(v21 + 11) )
                            {
                              *(_BYTE *)(Data + v21 + 11) = *(_BYTE *)(v20 + v21 + 11);
                              if ( (int)v16 > (int)(v21 + 12) )
                              {
                                *(_BYTE *)(Data + v21 + 12) = *(_BYTE *)(v20 + v21 + 12);
                                if ( (int)v16 > (int)(v21 + 13) )
                                {
                                  *(_BYTE *)(Data + v21 + 13) = *(_BYTE *)(v20 + v21 + 13);
                                  if ( (int)v16 > (int)(v21 + 14) )
                                    *(_BYTE *)(Data + v21 + 14) = *(_BYTE *)(v20 + v21 + 14);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      for ( i = 0; i != v16; i = (CompanyName::Utils *)((char *)i + 1) )
        *((_BYTE *)i + Data) = *((_BYTE *)i + v19);
    }
    if ( v38 > (int)v16 )
    {
      v23 = v38 - (_DWORD)v16;
      v37 = 16 * (((unsigned int)(v38 - (_DWORD)v16 - 16) >> 4) + 1);
      if ( (unsigned int)(v38 - 1 - (_DWORD)v16) <= 0xE )
        goto LABEL_85;
      v24 = (char *)v16 + Data;
      v25 = 0;
      do
      {
        ++v25;
        v24 += 16;
        *((_OWORD *)v24 - 1) = 0LL;
      }
      while ( v25 < ((unsigned int)(v38 - (_DWORD)v16 - 16) >> 4) + 1 );
      v16 = (CompanyName::Utils *)((char *)v16 + v37);
      if ( v23 != v37 )
      {
LABEL_85:
        *((_BYTE *)v16 + Data) = 0;
        if ( v38 > (int)v16 + 1 )
        {
          *((_BYTE *)v16 + Data + 1) = 0;
          if ( v38 > (int)v16 + 2 )
          {
            *((_BYTE *)v16 + Data + 2) = 0;
            if ( v38 > (int)v16 + 3 )
            {
              *((_BYTE *)v16 + Data + 3) = 0;
              if ( v38 > (int)v16 + 4 )
              {
                *((_BYTE *)v16 + Data + 4) = 0;
                if ( v38 > (int)v16 + 5 )
                {
                  *((_BYTE *)v16 + Data + 5) = 0;
                  if ( v38 > (int)v16 + 6 )
                  {
                    *((_BYTE *)v16 + Data + 6) = 0;
                    if ( v38 > (int)v16 + 7 )
                    {
                      *((_BYTE *)v16 + Data + 7) = 0;
                      if ( v38 > (int)v16 + 8 )
                      {
                        *((_BYTE *)v16 + Data + 8) = 0;
                        if ( v38 > (int)v16 + 9 )
                        {
                          *((_BYTE *)v16 + Data + 9) = 0;
                          if ( v38 > (int)v16 + 10 )
                          {
                            *((_BYTE *)v16 + Data + 10) = 0;
                            if ( v38 > (int)v16 + 11 )
                            {
                              *((_BYTE *)v16 + Data + 11) = 0;
                              if ( v38 > (int)v16 + 12 )
                              {
                                *((_BYTE *)v16 + Data + 12) = 0;
                                if ( v38 > (int)v16 + 13 )
                                {
                                  *((_BYTE *)v16 + Data + 13) = 0;
                                  if ( v38 > (int)v16 + 14 )
                                    *((_BYTE *)v16 + Data + 14) = 0;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v26 = (void *)(v42 - 12);
    if ( (_UNKNOWN *)(v42 - 12) != &unk_156410 )
    {
      if ( &pthread_create )
      {
        v34 = _InterlockedExchangeAdd((volatile signed __int32 *)(v42 - 4), 0xFFFFFFFF);
      }
      else
      {
        v34 = *(_DWORD *)(v42 - 4);
        *(_DWORD *)(v42 - 4) = v34 - 1;
      }
      if ( v34 <= 0 )
        sub_EEFB0(v26);
    }
    v44[0] = (int)&unk_14C5C0 + 12;
    v53[0] = (int)&unk_14C5C0 + 52;
    v45 = (int)&unk_14C5C0 + 32;
    v46 = &`vtable for'std::stringbuf + 2;
    v27 = (void *)(v52 - 12);
    if ( (_UNKNOWN *)(v52 - 12) != &unk_156410 )
    {
      if ( &pthread_create )
      {
        v33 = _InterlockedExchangeAdd((volatile signed __int32 *)(v52 - 4), 0xFFFFFFFF);
      }
      else
      {
        v33 = *(_DWORD *)(v52 - 4);
        *(_DWORD *)(v52 - 4) = v33 - 1;
      }
      if ( v33 <= 0 )
        sub_EEFB0(v27);
    }
    v46 = &`vtable for'std::streambuf + 2;
    sub_BA8F0(v50);
    *(int *)((char *)v44 + (_DWORD)*(*(&off_14C580 + 1) - 3)) = (int)*(&off_14C580 + 6);
    v28 = (int)*(&off_14C580 + 5);
    v45 = (int)*(&off_14C580 + 4);
    *(int *)((char *)&v45 + *(_DWORD *)(v45 - 12)) = v28;
    v29 = (int)*(&off_14C580 + 3);
    v44[0] = (int)*(&off_14C580 + 2);
    *(int *)((char *)v44 + *(_DWORD *)(v44[0] - 12)) = v29;
    v53[0] = (int)(&`vtable for'std::ios + 2);
    sub_9C6C0(v53);
    v0 = (UArray *)LibraryVersionArray;
  }
  result = UArray::GetUnityArray(v0);
  if ( __readgsdword(0x14u) != v60 )
    sub_2D930(v2);
  return result;
}