

#ifndef Abinary_included
#define Abinary_included

#define __Abinary_AbinToNat __Abinary_1
#define _Abinary_AbinToNat _Abinary_1
extern OBJ __Abinary_AbinToNat;
extern OBJ _Abinary_AbinToNat(OBJ);

#define __Abinary_AnatToBin __Abinary_2
#define _Abinary_AnatToBin _Abinary_2
extern OBJ __Abinary_AnatToBin;
extern OBJ _Abinary_AnatToBin(OBJ);

#define __Abinary_AnatToBinHelper __Abinary_3
#define _Abinary_AnatToBinHelper _Abinary_3
extern OBJ __Abinary_AnatToBinHelper;
extern OBJ _Abinary_AnatToBinHelper(OBJ,OBJ);

#define __Abinary_AbinToNatHelper __Abinary_4
#define _Abinary_AbinToNatHelper _Abinary_4
extern OBJ __Abinary_AbinToNatHelper;
extern OBJ _Abinary_AbinToNatHelper(OBJ,OBJ);

#ifndef Abinary_AbinToNat
#define Abinary_AbinToNat(x1,x2) {x2=_Abinary_AbinToNat(x1);}
#endif

#ifndef Abinary_AnatToBin
#define Abinary_AnatToBin(x1,x2) {x2=_Abinary_AnatToBin(x1);}
#endif

#ifndef Abinary_AnatToBinHelper
#define Abinary_AnatToBinHelper(x1,x2,x3) {x3=_Abinary_AnatToBinHelper(x1,x2);}
#endif

#ifndef Abinary_AbinToNatHelper
#define Abinary_AbinToNatHelper(x1,x2,x3) {x3=_Abinary_AbinToNatHelper(x1,x2);}
#endif

#ifndef Abinary_AbinToNat_L5
#define Abinary_AbinToNat_L5(x1,x2) {x2=_Abinary_AbinToNat_L5(x1);}
#endif

#ifndef Abinary_AnatToBin_L7
#define Abinary_AnatToBin_L7(x1,x2) {x2=_Abinary_AnatToBin_L7(x1);}
#endif

#ifndef Abinary_AnatToBinHelper_L9
#define Abinary_AnatToBinHelper_L9(x1,x2,x8) {x8=_Abinary_AnatToBinHelper_L9(x1,x2);}
#endif

#ifndef Abinary_AbinToNatHelper_L10
#define Abinary_AbinToNatHelper_L10(x1,x2,x13) {x13=_Abinary_AbinToNatHelper_L10(x1,x2);}
#endif

#endif
