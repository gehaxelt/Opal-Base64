

#ifndef Aascii_included
#define Aascii_included

#define __Aascii_AcharToNat __Aascii_1
#define _Aascii_AcharToNat _Aascii_1
extern OBJ __Aascii_AcharToNat;
extern OBJ _Aascii_AcharToNat(OBJ);

#define __Aascii_AnatToChar __Aascii_2
#define _Aascii_AnatToChar _Aascii_2
extern OBJ __Aascii_AnatToChar;
extern OBJ _Aascii_AnatToChar(OBJ);

#ifndef Aascii_AcharToNat
#define Aascii_AcharToNat(x1,x2) {x2=_Aascii_AcharToNat(x1);}
#endif

#ifndef Aascii_AnatToChar
#define Aascii_AnatToChar(x1,x2) {x2=_Aascii_AnatToChar(x1);}
#endif

#ifndef Aascii_AcharToNat_L189
#define Aascii_AcharToNat_L189(x1,x188) {x188=_Aascii_AcharToNat_L189(x1);}
#endif

#ifndef Aascii_AnatToChar_L377
#define Aascii_AnatToChar_L377(x1,x191) {x191=_Aascii_AnatToChar_L377(x1);}
#endif

#endif
