

#line 1 "binary.impl"
#include "BUILTIN.h"
extern OBJ __ADenotation_4;
extern OBJ __ADenotation_11;
extern OBJ __ADenotation_12;
extern OBJ __ADenotation_15;
extern OBJ __ANat_5;
extern OBJ __ANat_8;
extern OBJ __ANat_9;
extern OBJ __ANat_60;
extern OBJ __ANat_61;
extern OBJ __ANat_62;
extern OBJ __ANat_63;
extern OBJ __ANat_64;
extern OBJ __ANat_66;
extern OBJ __ANat_69;
extern OBJ __ANat_76;
extern OBJ __ANat_81;
extern OBJ __ANatConv_1;
extern OBJ _Abinary_1(OBJ);OBJ __Abinary_1; /* binToNat */
extern OBJ _Abinary_2(OBJ);OBJ __Abinary_2; /* natToBin */
extern OBJ _Abinary_3(OBJ,OBJ);OBJ __Abinary_3; /* natToBinHelper */
extern OBJ _Abinary_4(OBJ,OBJ);OBJ __Abinary_4; /* binToNatHelper */
extern OBJ _Abinary_5(OBJ);OBJ __Abinary_5; /* binToNat'5 */
OBJ __Abinary_6; /* natToBin'6 */
extern OBJ _Abinary_7(OBJ);OBJ __Abinary_7; /* natToBin'7 */
OBJ __Abinary_8; /* natToBinHelper'8 */
extern OBJ _Abinary_9(OBJ,OBJ);OBJ __Abinary_9; /* natToBinHelper'9 */
extern OBJ _Abinary_10(OBJ,OBJ);OBJ __Abinary_10; /* binToNatHelper'10 */

extern OBJ _Abinary_1(OBJ x1) /* binToNat */
{OBJ r;
 CPCLS(__Abinary_5,1);
#line 10
 r=(*(OBJ(*)(OBJ,OBJ))METHOD(__Abinary_5,1))(__Abinary_5,x1);
#line 10
 return r;}

extern OBJ _Abinary_2(OBJ x1) /* natToBin */
{OBJ r;
 CPCLS(__Abinary_7,1);
#line 16
 r=(*(OBJ(*)(OBJ,OBJ))METHOD(__Abinary_7,1))(__Abinary_7,x1);
#line 16
 return r;}

extern OBJ _Abinary_3(OBJ x1,OBJ x2) /* natToBinHelper */
{OBJ r;
 CPCLS(__Abinary_9,1);
#line 20
 r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__Abinary_9,2))(__Abinary_9,x1,x2);
#line 20
 return r;}

extern OBJ _Abinary_4(OBJ x1,OBJ x2) /* binToNatHelper */
{OBJ r;
 CPCLS(__Abinary_10,1);
#line 30
 r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__Abinary_10,2))(__Abinary_10,x1,x2);
#line 30
 return r;}

extern OBJ _Abinary_5(OBJ x1) /* binToNat'5 */
{OBJ r;
 CPCLS(__Abinary_4,1);
 COPY(__ANat_5,1);
#line 10
 r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__Abinary_4,2))(__Abinary_4,x1,__ANat_5);
#line 10
 return r;}

extern OBJ _Abinary_7(OBJ x1) /* natToBin'7 */
{OBJ r;
 CPCLS(__Abinary_3,1);
 CPPRD(__Abinary_6,1);
#line 16
 r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__Abinary_3,2))(__Abinary_3,x1,__Abinary_6);
#line 16
 return r;}

extern OBJ _Abinary_9(OBJ x1,OBJ x2) /* natToBinHelper'9 */
{OBJ r;
 COPY(__ANat_8,1);
 CPCLS(__ANat_76,1);
 COPY(x1,1);
#line 20
 {OBJ x3;
#line 22
  x3=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_76,2))(__ANat_76,x1,__ANat_8);
#line 22
  if(ISTGPRM(x3,1)){
#line 22
   FREE(x1,1);
#line 22
   CPPRD(__Abinary_8,1);
#line 22
   CPCLS(__ADenotation_4,1);
#line 23
   r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ADenotation_4,2))(__ADenotation_4,__Abinary_8,x2);
#line 23
  }else{
#line 23
   COPY(x1,1);
#line 23
   CPCLS(__Abinary_3,1);
#line 23
   CPCLS(__ADenotation_4,1);
#line 23
   COPY(__ANat_9,2);
#line 23
   CPCLS(__ANat_64,1);
#line 23
   CPCLS(__ANat_66,1);
#line 23
   CPCLS(__ANatConv_1,1);
#line 23
   {OBJ x4;OBJ x5;OBJ x6;OBJ x7;
#line 25
    x4=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_64,2))(__ANat_64,x1,__ANat_9);
#line 25
    x5=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_66,2))(__ANat_66,x1,__ANat_9);
#line 25
    x6=(*(OBJ(*)(OBJ,OBJ))METHOD(__ANatConv_1,1))(__ANatConv_1,x5);
#line 25
    x7=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ADenotation_4,2))(__ADenotation_4,x6,x2);
#line 25
    r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__Abinary_3,2))(__Abinary_3,x4,x7);}}}
#line 25
 return r;}

extern OBJ _Abinary_10(OBJ x1,OBJ x2) /* binToNatHelper'10 */
{OBJ r;
 CPCLS(__ADenotation_15,1);
 COPY(__ANat_5,1);
 CPCLS(__ANat_81,1);
 CPPRD(x1,1);
#line 30
 {OBJ x3;OBJ x4;
#line 31
  x3=(*(OBJ(*)(OBJ,OBJ))METHOD(__ADenotation_15,1))(__ADenotation_15,x1);
#line 31
  COPY(x3,1);
#line 31
  x4=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_81,2))(__ANat_81,x3,__ANat_5);
#line 31
  if(ISTGPRM(x4,1)){
#line 31
   CPPRD(x1,1);
#line 31
   COPY(x2,1);
#line 31
   CPCLS(__Abinary_4,1);
#line 31
   CPCLS(__ADenotation_11,1);
#line 31
   CPCLS(__ADenotation_12,1);
#line 31
   COPY(__ANat_8,2);
#line 31
   COPY(__ANat_9,1);
#line 31
   CPCLS(__ANat_60,1);
#line 31
   CPCLS(__ANat_61,2);
#line 31
   CPCLS(__ANat_62,1);
#line 31
   CPCLS(__ANat_63,1);
#line 31
   CPCLS(__ANat_69,1);
#line 31
   {OBJ x5;OBJ x6;OBJ x7;OBJ x8;OBJ x9;OBJ x10;OBJ x11;OBJ x12;
#line 34
    x5=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_69,2))(__ANat_69,__ANat_9,x2);
#line 36
    x6=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_61,2))(__ANat_61,x2,__ANat_8);
#line 33
    x7=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_62,2))(__ANat_62,x3,__ANat_8);
#line 33
    COPY(x7,3);
#line 33
    x8=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__ADenotation_11,3))(__ADenotation_11,x1,x7,x7);
#line 36
    x9=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__ADenotation_12,3))(__ADenotation_12,x1,x7,x7);
#line 33
    x10=(*(OBJ(*)(OBJ,OBJ))METHOD(__ANat_60,1))(__ANat_60,x8);
#line 36
    x11=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__Abinary_4,2))(__Abinary_4,x9,x6);
#line 36
    x12=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_63,2))(__ANat_63,x10,x5);
#line 36
    r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_61,2))(__ANat_61,x12,x11);}
#line 36
  }else{
#line 36
   FRPRD(x1,1);
#line 36
   FREE(x2,1);
#line 36
   FREE(x3,1);
#line 36
   COPY(__ANat_5,1);
#line 38
   r=__ANat_5;}}
#line 38
 return r;}

static OBJ _mt_1_0_1(OBJ t,OBJ t1) 
{OBJ r;
 DCCLS(t,1);
 r=(*(OBJ(*)(OBJ))ENTRY(t))(t1);
 return r;}
static OBJ _mt_1_0_1_l(OBJ t,OBJ t1) 
{OBJ r;
 DCCLS(t,1);
 r=(*(OBJ(*)(OBJ))ENTRY(t))(t1);
 COPY(r,1);LZYCLS(t,r);
 return r;}

static OBJ _mt_2_0_2(OBJ t,OBJ t1,OBJ t2) 
{OBJ r;
 DCCLS(t,1);
 r=(*(OBJ(*)(OBJ,OBJ))ENTRY(t))(t1,t2);
 return r;}

init_Abinary()
{
 static int visited=0; if(visited) return; visited=1;
 init_ADenotation();
 init_ANat();
 init_AChar();
 init_ANatConv();
 init_AInt();
 init_AReal();
 CLS(2,_Abinary_10,__Abinary_10);
 CLS(2,_Abinary_9,__Abinary_9);
 DEN("1",__Abinary_8);
 CLS(1,_Abinary_7,__Abinary_7);
 DEN("",__Abinary_6);
 CLS(1,_Abinary_5,__Abinary_5);
 CLS(2,_Abinary_4,__Abinary_4);
 CLS(2,_Abinary_3,__Abinary_3);
 CLS(1,_Abinary_2,__Abinary_2);
 CLS(1,_Abinary_1,__Abinary_1);
 MTH(1,0,1,_mt_1_0_1);LZYMTH(1,0,1,_mt_1_0_1_l);
 MTH(2,0,2,_mt_2_0_2);LZYMTH(2,0,2,_mt_2_0_2);}

