

#ifndef Abase64_included
#define Abase64_included

#define __Abase64_Abase64encode __Abase64_1
#define _Abase64_Abase64encode _Abase64_1
extern OBJ __Abase64_Abase64encode;
extern OBJ _Abase64_Abase64encode(OBJ);

#define __Abase64_Abase64decode __Abase64_2
#define _Abase64_Abase64decode _Abase64_2
extern OBJ __Abase64_Abase64decode;
extern OBJ _Abase64_Abase64decode(OBJ);

#define __Abase64_Abase64RekDecodeChiffre __Abase64_3
#define _Abase64_Abase64RekDecodeChiffre _Abase64_3
extern OBJ __Abase64_Abase64RekDecodeChiffre;
extern OBJ _Abase64_Abase64RekDecodeChiffre(OBJ,OBJ);

#define __Abase64_Abase64RekDecodeBitStr __Abase64_4
#define _Abase64_Abase64RekDecodeBitStr _Abase64_4
extern OBJ __Abase64_Abase64RekDecodeBitStr;
extern OBJ _Abase64_Abase64RekDecodeBitStr(OBJ,OBJ);

#define __Abase64_Abase64RekEncodeChiffre __Abase64_5
#define _Abase64_Abase64RekEncodeChiffre _Abase64_5
extern OBJ __Abase64_Abase64RekEncodeChiffre;
extern OBJ _Abase64_Abase64RekEncodeChiffre(OBJ,OBJ);

#define __Abase64_Abase64EncodeAddPadding __Abase64_6
#define _Abase64_Abase64EncodeAddPadding _Abase64_6
extern OBJ __Abase64_Abase64EncodeAddPadding;
extern OBJ _Abase64_Abase64EncodeAddPadding(OBJ,OBJ);

#define __Abase64_Abase64RekEncodeBitStr __Abase64_7
#define _Abase64_Abase64RekEncodeBitStr _Abase64_7
extern OBJ __Abase64_Abase64RekEncodeBitStr;
extern OBJ _Abase64_Abase64RekEncodeBitStr(OBJ);

#define __Abase64_Abase64AddNull __Abase64_8
#define _Abase64_Abase64AddNull _Abase64_8
extern OBJ __Abase64_Abase64AddNull;
extern OBJ _Abase64_Abase64AddNull(OBJ,OBJ);

#define __Abase64_Abase64CharToNat __Abase64_9
#define _Abase64_Abase64CharToNat _Abase64_9
extern OBJ __Abase64_Abase64CharToNat;
extern OBJ _Abase64_Abase64CharToNat(OBJ);

#define __Abase64_Abase64NatToChar __Abase64_10
#define _Abase64_Abase64NatToChar _Abase64_10
extern OBJ __Abase64_Abase64NatToChar;
extern OBJ _Abase64_Abase64NatToChar(OBJ);

#ifndef Abase64_Abase64encode
#define Abase64_Abase64encode(x1,x2) {x2=_Abase64_Abase64encode(x1);}
#endif

#ifndef Abase64_Abase64decode
#define Abase64_Abase64decode(x1,x2) {x2=_Abase64_Abase64decode(x1);}
#endif

#ifndef Abase64_Abase64RekDecodeChiffre
#define Abase64_Abase64RekDecodeChiffre(x1,x2,x3) {x3=_Abase64_Abase64RekDecodeChiffre(x1,x2);}
#endif

#ifndef Abase64_Abase64RekDecodeBitStr
#define Abase64_Abase64RekDecodeBitStr(x1,x2,x3) {x3=_Abase64_Abase64RekDecodeBitStr(x1,x2);}
#endif

#ifndef Abase64_Abase64RekEncodeChiffre
#define Abase64_Abase64RekEncodeChiffre(x1,x2,x3) {x3=_Abase64_Abase64RekEncodeChiffre(x1,x2);}
#endif

#ifndef Abase64_Abase64EncodeAddPadding
#define Abase64_Abase64EncodeAddPadding(x1,x2,x3) {x3=_Abase64_Abase64EncodeAddPadding(x1,x2);}
#endif

#ifndef Abase64_Abase64RekEncodeBitStr
#define Abase64_Abase64RekEncodeBitStr(x1,x2) {x2=_Abase64_Abase64RekEncodeBitStr(x1);}
#endif

#ifndef Abase64_Abase64AddNull
#define Abase64_Abase64AddNull(x1,x2,x3) {x3=_Abase64_Abase64AddNull(x1,x2);}
#endif

#ifndef Abase64_Abase64CharToNat
#define Abase64_Abase64CharToNat(x1,x2) {x2=_Abase64_Abase64CharToNat(x1);}
#endif

#ifndef Abase64_Abase64NatToChar
#define Abase64_Abase64NatToChar(x1,x2) {x2=_Abase64_Abase64NatToChar(x1);}
#endif

#ifndef Abase64_Abase64encode_L12
#define Abase64_Abase64encode_L12(x1,x4) {x4=_Abase64_Abase64encode_L12(x1);}
#endif

#ifndef Abase64_Abase64decode_L15
#define Abase64_Abase64decode_L15(x1,x3) {x3=_Abase64_Abase64decode_L15(x1);}
#endif

#ifndef Abase64_Abase64RekDecodeChiffre_L16
#define Abase64_Abase64RekDecodeChiffre_L16(x1,x2,x11) {x11=_Abase64_Abase64RekDecodeChiffre_L16(x1,x2);}
#endif

#ifndef Abase64_Abase64RekDecodeBitStr_L18
#define Abase64_Abase64RekDecodeBitStr_L18(x1,x2,x12) {x12=_Abase64_Abase64RekDecodeBitStr_L18(x1,x2);}
#endif

#ifndef Abase64_Abase64RekEncodeChiffre_L21
#define Abase64_Abase64RekEncodeChiffre_L21(x1,x2,x12) {x12=_Abase64_Abase64RekEncodeChiffre_L21(x1,x2);}
#endif

#ifndef Abase64_Abase64EncodeAddPadding_L24
#define Abase64_Abase64EncodeAddPadding_L24(x1,x2,x8) {x8=_Abase64_Abase64EncodeAddPadding_L24(x1,x2);}
#endif

#ifndef Abase64_Abase64RekEncodeBitStr_L26
#define Abase64_Abase64RekEncodeBitStr_L26(x1,x11) {x11=_Abase64_Abase64RekEncodeBitStr_L26(x1);}
#endif

#ifndef Abase64_Abase64AddNull_L28
#define Abase64_Abase64AddNull_L28(x1,x2,x6) {x6=_Abase64_Abase64AddNull_L28(x1,x2);}
#endif

#ifndef Abase64_Abase64CharToNat_L124
#define Abase64_Abase64CharToNat_L124(x1,x68) {x68=_Abase64_Abase64CharToNat_L124(x1);}
#endif

#ifndef Abase64_Abase64NatToChar_L221
#define Abase64_Abase64NatToChar_L221(x1,x100) {x100=_Abase64_Abase64NatToChar_L221(x1);}
#endif

#endif
