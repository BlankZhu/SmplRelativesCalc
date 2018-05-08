#include "./rltv_calc.h"
Person::Person(const std::string &n) : _this_name(n) {
    // initialize the relation map
    // my tree
    if(n == "Me" || n == "You") {
        _relation_mp["father"] = "father";
        _relation_mp["mother"] = "mother";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "wife";
        _relation_mp["son"] = "son";
        _relation_mp["daughter"] = "daughter";
        _relation_mp["eldersister"] = "eldersister";
        _relation_mp["elderbrother"] = "elderbrother";
        _relation_mp["youngersister"] = "youngersister";
        _relation_mp["youngerbrother"] = "youngerbrother";
    }
    if(n == "wife") {
        _relation_mp["father"] = "TOO FAR AWAY!";
        _relation_mp["mother"] = "TOO FAR AWAY!";
        _relation_mp["husband"] = "You";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "son";
        _relation_mp["daughter"] = "daughter";
        _relation_mp["eldersister"] = "TOO FAR AWAY!";
        _relation_mp["elderbrother"] = "TOO FAR AWAY!";
        _relation_mp["youngersister"] = "TOO FAR AWAY!";
        _relation_mp["youngerbrother"] = "TOO FAR AWAY!";
    }
    if(n == "son") {
        _relation_mp["father"] = "You";
        _relation_mp["mother"] = "wife";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "ErXiFu";
        _relation_mp["son"] = "grandson";
        _relation_mp["daughter"] = "granddaughter";
        _relation_mp["eldersister"] = "daughter";
        _relation_mp["elderbrother"] = "son";
        _relation_mp["youngersister"] = "daughter";
        _relation_mp["youngerbrother"] = "son";
    }
    if(n == "daughter") {
        _relation_mp["father"] = "You";
        _relation_mp["mother"] = "wife";
        _relation_mp["husband"] = "NvXu";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "outgrandson";
        _relation_mp["daughter"] = "outgranddaughter";
        _relation_mp["eldersister"] = "daughter";
        _relation_mp["elderbrother"] = "son";
        _relation_mp["youngersister"] = "daughter";
        _relation_mp["youngerbrother"] = "son";
    }
    if(n == "ErXiFu") {
        _relation_mp["father"] = "TOO FAR AWAY!";
        _relation_mp["mother"] = "TOO FAR AWAY!";
        _relation_mp["husband"] = "son";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "grandson";
        _relation_mp["daughter"] = "granddaughter";
        _relation_mp["eldersister"] = "TOO FAR AWAY!";
        _relation_mp["elderbrother"] = "TOO FAR AWAY!";
        _relation_mp["youngersister"] = "TOO FAR AWAY!";
        _relation_mp["youngerbrother"] = "TOO FAR AWAY!";
    }
    if(n == "NvXu") {
        _relation_mp["father"] = "TOO FAR AWAY!";
        _relation_mp["mother"] = "TOO FAR AWAY!";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "daughter";
        _relation_mp["son"] = "outgrandson";
        _relation_mp["daughter"] = "outgranddaughter";
        _relation_mp["eldersister"] = "TOO FAR AWAY!";
        _relation_mp["elderbrother"] = "TOO FAR AWAY!";
        _relation_mp["youngersister"] = "TOO FAR AWAY!";
        _relation_mp["youngerbrother"] = "TOO FAR AWAY!";
    }
    if(n == "grandson") {
        _relation_mp["father"] = "son";
        _relation_mp["mother"] = "ErXiFu";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "TOO FAR AWAY!";
        _relation_mp["son"] = "TOO FAR AWAY!";
        _relation_mp["daughter"] = "TOO FAR AWAY!";
        _relation_mp["eldersister"] = "granddaughter";
        _relation_mp["elderbrother"] = "grandson";
        _relation_mp["youngersister"] = "granddaughter";
        _relation_mp["youngerbrother"] = "grandson";
    }
    if(n == "granddaughter") {
        _relation_mp["father"] = "son";
        _relation_mp["mother"] = "ErXiFu";
        _relation_mp["husband"] = "TOO FAR AWAY!";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "TOO FAR AWAY!";
        _relation_mp["daughter"] = "TOO FAR AWAY!";
        _relation_mp["eldersister"] = "granddaughter";
        _relation_mp["elderbrother"] = "grandson";
        _relation_mp["youngersister"] = "granddaughter";
        _relation_mp["youngerbrother"] = "grandson";
    }

    // sister tree
    if(n == "eldersister") {
        _relation_mp["father"] = "father";
        _relation_mp["mother"] = "mother";
        _relation_mp["husband"] = "JieFu";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "WaiSheng";
        _relation_mp["daughter"] = "WaiShengNv";
        _relation_mp["eldersister"] = "eldersister";
        _relation_mp["elderbrother"] = "elderbrother";
        _relation_mp["youngersister"] = "sister";
        _relation_mp["youngerbrother"] = "brother";
    }
    if(n == "youngersister") {
        _relation_mp["father"] = "father";
        _relation_mp["mother"] = "mother";
        _relation_mp["husband"] = "MeiFu";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "WaiSheng";
        _relation_mp["daughter"] = "WaiShengNv";
        _relation_mp["eldersister"] = "sister";
        _relation_mp["elderbrother"] = "brother";
        _relation_mp["youngersister"] = "youngersister";
        _relation_mp["youngerbrother"] = "youngerbrother";
    }
    if(n == "sister") {
        _relation_mp["father"] = "father";
        _relation_mp["mother"] = "mother";
        _relation_mp["husband"] = "LianJin";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "WaiSheng";
        _relation_mp["daughter"] = "WaiShengNv";
        _relation_mp["eldersister"] = "sister";
        _relation_mp["elderbrother"] = "brother";
        _relation_mp["youngersister"] = "sister";
        _relation_mp["youngerbrother"] = "brother";
    }
    if(n == "JieFu") {
        _relation_mp["father"] = "TOO FAR AWAY!";
        _relation_mp["mother"] = "TOO FAR AWAY!";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "eldersister";
        _relation_mp["son"] = "WaiSheng";
        _relation_mp["daughter"] = "WaiShengNv";
        _relation_mp["eldersister"] = "TOO FAR AWAY!";
        _relation_mp["elderbrother"] = "TOO FAR AWAY!";
        _relation_mp["youngersister"] = "TOO FAR AWAY!";
        _relation_mp["youngerbrother"] = "TOO FAR AWAY!";
    }
    if(n == "MeiFu") {
        _relation_mp["father"] = "TOO FAR AWAY!";
        _relation_mp["mother"] = "TOO FAR AWAY!";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "youngersister";
        _relation_mp["son"] = "WaiSheng";
        _relation_mp["daughter"] = "WaiShengNv";
        _relation_mp["eldersister"] = "TOO FAR AWAY!";
        _relation_mp["elderbrother"] = "TOO FAR AWAY!";
        _relation_mp["youngersister"] = "TOO FAR AWAY!";
        _relation_mp["youngerbrother"] = "TOO FAR AWAY!";
    }
    if(n == "LianJin") {
        _relation_mp["father"] = "TOO FAR AWAY!";
        _relation_mp["mother"] = "TOO FAR AWAY!";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "sister";
        _relation_mp["son"] = "WaiSheng";
        _relation_mp["daughter"] = "WaiShengNv";
        _relation_mp["eldersister"] = "TOO FAR AWAY!";
        _relation_mp["elderbrother"] = "TOO FAR AWAY!";
        _relation_mp["youngersister"] = "TOO FAR AWAY!";
        _relation_mp["youngerbrother"] = "TOO FAR AWAY!";
    }
    if(n == "WaiSheng") {
        _relation_mp["father"] = "LianJin";
        _relation_mp["mother"] = "sister";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "TOO FAR AWAY!";
        _relation_mp["son"] = "TOO FAR AWAY!";
        _relation_mp["daughter"] = "TOO FAR AWAY!";
        _relation_mp["eldersister"] = "WaiShengNv";
        _relation_mp["elderbrother"] = "WaiSheng";
        _relation_mp["youngersister"] = "WaiShengNv";
        _relation_mp["youngerbrother"] = "WaiSheng";
    }
    if(n == "WaiShengNv") {
        _relation_mp["father"] = "LianJin";
        _relation_mp["mother"] = "sister";
        _relation_mp["husband"] = "TOO FAR AWAY!";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "TOO FAR AWAY!";
        _relation_mp["daughter"] = "TOO FAR AWAY!";
        _relation_mp["eldersister"] = "WaiShengNv";
        _relation_mp["elderbrother"] = "WaiSheng";
        _relation_mp["youngersister"] = "WaiShengNv";
        _relation_mp["youngerbrother"] = "WaiSheng";
    }

    // brother tree
    if(n == "elderbrother") {
        _relation_mp["father"] = "father";
        _relation_mp["mother"] = "mother";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "SaoZi";
        _relation_mp["son"] = "ZhiZi";
        _relation_mp["daughter"] = "ZhiNv";
        _relation_mp["eldersister"] = "eldersister";
        _relation_mp["elderbrother"] = "elderbrother";
        _relation_mp["youngersister"] = "youngersister";
        _relation_mp["youngerbrother"] = "youngerbrother";
    }
    if(n == "youngerbrother") {
        _relation_mp["father"] = "father";
        _relation_mp["mother"] = "mother";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "DiXi";
        _relation_mp["son"] = "ZhiZi";
        _relation_mp["daughter"] = "ZhiNv";
        _relation_mp["eldersister"] = "sister";
        _relation_mp["elderbrother"] = "brother";
        _relation_mp["youngersister"] = "youngersister";
        _relation_mp["youngerbrother"] = "youngerbrother";
    }
    if(n == "brother") {
        _relation_mp["father"] = "father";
        _relation_mp["mother"] = "mother";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "DiXi";
        _relation_mp["son"] = "ZhiZi";
        _relation_mp["daughter"] = "ZhiNv";
        _relation_mp["eldersister"] = "sister";
        _relation_mp["elderbrother"] = "brother";
        _relation_mp["youngersister"] = "sister";
        _relation_mp["youngerbrother"] = "brother";
    }
    if(n == "SaoZi") {
        _relation_mp["father"] = "TOO FAR AWAY!";
        _relation_mp["mother"] = "TOO FAR AWAY!";
        _relation_mp["husband"] = "elderbrother";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "ZhiZi";
        _relation_mp["daughter"] = "ZhiNv";
        _relation_mp["eldersister"] = "TOO FAR AWAY!";
        _relation_mp["elderbrother"] = "TOO FAR AWAY!";
        _relation_mp["youngersister"] = "TOO FAR AWAY!";
        _relation_mp["youngerbrother"] = "TOO FAR AWAY!";
    }
    if(n == "DiXi") {
        _relation_mp["father"] = "TOO FAR AWAY!";
        _relation_mp["mother"] = "TOO FAR AWAY!";
        _relation_mp["husband"] = "youngerbrother";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "ZhiZi";
        _relation_mp["daughter"] = "ZhiNv";
        _relation_mp["eldersister"] = "TOO FAR AWAY!";
        _relation_mp["elderbrother"] = "TOO FAR AWAY!";
        _relation_mp["youngersister"] = "TOO FAR AWAY!";
        _relation_mp["youngerbrother"] = "TOO FAR AWAY!";
    }
    if(n == "ZhiZi") {
        _relation_mp["father"] = "brother";
        _relation_mp["mother"] = "DiXi";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "TOO FAR AWAY!";
        _relation_mp["son"] = "TOO FAR AWAY!";
        _relation_mp["daughter"] = "TOO FAR AWAY!";
        _relation_mp["eldersister"] = "ZhiNv";
        _relation_mp["elderbrother"] = "ZhiZi";
        _relation_mp["youngersister"] = "ZhiNv";
        _relation_mp["youngerbrother"] = "ZhiZi";
    }
    if(n == "ZhiNv") {
        _relation_mp["father"] = "brother";
        _relation_mp["mother"] = "DiXi";
        _relation_mp["husband"] = "TOO FAR AWAY!";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "TOO FAR AWAY!";
        _relation_mp["daughter"] = "TOO FAR AWAY!";
        _relation_mp["eldersister"] = "ZhiNv";
        _relation_mp["elderbrother"] = "ZhiZi";
        _relation_mp["youngersister"] = "ZhiNv";
        _relation_mp["youngerbrother"] = "ZhiZi";
    }

    // father tree
    if(n == "father") {
        _relation_mp["father"] = "grandfather";
        _relation_mp["mother"] = "grandmother";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "mother";
        _relation_mp["son"] = "brother";
        _relation_mp["daughter"] = "sister";
        _relation_mp["eldersister"] = "GuMa";
        _relation_mp["elderbrother"] = "BoFu";
        _relation_mp["youngersister"] = "GuMa";
        _relation_mp["youngerbrother"] = "ShuFu";
    }
    if(n == "ShuFu") {
        _relation_mp["father"] = "grandfather";
        _relation_mp["mother"] = "grandmother";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "ShenShen";
        _relation_mp["son"] = "Tangbrother";
        _relation_mp["daughter"] = "Tangsister";
        _relation_mp["eldersister"] = "GuMa";
        _relation_mp["elderbrother"] = "father";
        _relation_mp["youngersister"] = "GuMa";
        _relation_mp["youngerbrother"] = "ShuFu";
    }
    if(n == "BoFu") {
        _relation_mp["father"] = "grandfather";
        _relation_mp["mother"] = "grandmother";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "BoMu";
        _relation_mp["son"] = "Tangbrother";
        _relation_mp["daughter"] = "Tangsister";
        _relation_mp["eldersister"] = "GuMa";
        _relation_mp["elderbrother"] = "BoFu";
        _relation_mp["youngersister"] = "GuMa";
        _relation_mp["youngerbrother"] = "father";
    }
    if(n == "ShenShen") {
        _relation_mp["father"] = "TOO FAR AWAY!";
        _relation_mp["mother"] = "TOO FAR AWAY!";
        _relation_mp["husband"] = "ShuFu";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "Tangbrother";
        _relation_mp["daughter"] = "Tangsister";
        _relation_mp["eldersister"] = "TOO FAR AWAY!";
        _relation_mp["elderbrother"] = "TOO FAR AWAY!";
        _relation_mp["youngersister"] = "TOO FAR AWAY!";
        _relation_mp["youngerbrother"] = "TOO FAR AWAY!";
    }
    if(n == "BoMu") {
        _relation_mp["father"] = "TOO FAR AWAY!";
        _relation_mp["mother"] = "TOO FAR AWAY!";
        _relation_mp["husband"] = "BoFu";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "Tangbrother";
        _relation_mp["daughter"] = "Tangsister";
        _relation_mp["eldersister"] = "TOO FAR AWAY!";
        _relation_mp["elderbrother"] = "TOO FAR AWAY!";
        _relation_mp["youngersister"] = "TOO FAR AWAY!";
        _relation_mp["youngerbrother"] = "TOO FAR AWAY!";
    }
    if(n == "Tangbrother") {
        _relation_mp["father"] = "ShuFu";
        _relation_mp["mother"] = "ShenShen";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "TOO FAR AWAY!";
        _relation_mp["son"] = "TOO FAR AWAY!";
        _relation_mp["daughter"] = "TOO FAR AWAY!";
        _relation_mp["eldersister"] = "Tangsister";
        _relation_mp["elderbrother"] = "Tangbrother";
        _relation_mp["youngersister"] = "Tangsister";
        _relation_mp["youngerbrother"] = "Tangbrother";
    }
    if(n == "Tangsister") {
        _relation_mp["father"] = "ShuFu";
        _relation_mp["mother"] = "ShenShen";
        _relation_mp["husband"] = "TOO FAR AWAY!";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "TOO FAR AWAY!";
        _relation_mp["daughter"] = "TOO FAR AWAY!";
        _relation_mp["eldersister"] = "Tangsister";
        _relation_mp["elderbrother"] = "Tangbrother";
        _relation_mp["youngersister"] = "Tangsister";
        _relation_mp["youngerbrother"] = "Tangbrother";
    }
    if(n == "GuMa") {
        _relation_mp["father"] = "grandfather";
        _relation_mp["mother"] = "grandmother";
        _relation_mp["husband"] = "GuZhang";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "GuBiaobrother";
        _relation_mp["daughter"] = "GuBiaosister";
        _relation_mp["eldersister"] = "GuMa";
        _relation_mp["elderbrother"] = "BoFu";
        _relation_mp["youngersister"] = "GuMa";
        _relation_mp["youngerbrother"] = "ShuFu";
    }
    if(n == "GuZhang") {
        _relation_mp["father"] = "TOO FAR AWAY!";
        _relation_mp["mother"] = "TOO FAR AWAY!";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "GuZhang";
        _relation_mp["son"] = "GuBiaobrother";
        _relation_mp["daughter"] = "GuBiaosister";
        _relation_mp["eldersister"] = "TOO FAR AWAY!";
        _relation_mp["elderbrother"] = "TOO FAR AWAY!";
        _relation_mp["youngersister"] = "TOO FAR AWAY!";
        _relation_mp["youngerbrother"] = "TOO FAR AWAY!";
    }
    if(n == "GuBiaobrother") {
        _relation_mp["father"] = "GuZhang";
        _relation_mp["mother"] = "GuMa";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "TOO FAR AWAY!";
        _relation_mp["son"] = "TOO FAR AWAY!";
        _relation_mp["daughter"] = "TOO FAR AWAY!";
        _relation_mp["eldersister"] = "GuBiaosister";
        _relation_mp["elderbrother"] = "GuBiaobrother";
        _relation_mp["youngersister"] = "GuBiaosister";
        _relation_mp["youngerbrother"] = "GuBiaobrother";
    }
    if(n == "GuBiaosister") {
        _relation_mp["father"] = "GuZhang";
        _relation_mp["mother"] = "GuMa";
        _relation_mp["husband"] = "TOO FAR AWAY!";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "TOO FAR AWAY!";
        _relation_mp["daughter"] = "TOO FAR AWAY!";
        _relation_mp["eldersister"] = "GuBiaosister";
        _relation_mp["elderbrother"] = "GuBiaobrother";
        _relation_mp["youngersister"] = "GuBiaosister";
        _relation_mp["youngerbrother"] = "GuBiaobrother";
    }
    if(n == "grandfather") {
        _relation_mp["father"] = "TOO FAR AWAY!";
        _relation_mp["mother"] = "TOO FAR AWAY!";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "grandmother";
        _relation_mp["son"] = "father";
        _relation_mp["daughter"] = "GuMa";
        _relation_mp["eldersister"] = "TOO FAR AWAY!";
        _relation_mp["elderbrother"] = "TOO FAR AWAY!";
        _relation_mp["youngersister"] = "TOO FAR AWAY!";
        _relation_mp["youngerbrother"] = "TOO FAR AWAY!";
    }
    if(n == "grandmother") {
        _relation_mp["father"] = "TOO FAR AWAY!";
        _relation_mp["mother"] = "TOO FAR AWAY!";
        _relation_mp["husband"] = "grandfather";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "father";
        _relation_mp["daughter"] = "GuMa";
        _relation_mp["eldersister"] = "TOO FAR AWAY!";
        _relation_mp["elderbrother"] = "TOO FAR AWAY!";
        _relation_mp["youngersister"] = "TOO FAR AWAY!";
        _relation_mp["youngerbrother"] = "TOO FAR AWAY!";
    }

    // mother tree
    if(n == "mother") {
        _relation_mp["father"] = "outgrandfather";
        _relation_mp["mother"] = "outgrandmother";
        _relation_mp["husband"] = "father";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "brother";
        _relation_mp["daughter"] = "sister";
        _relation_mp["eldersister"] = "YiMa";
        _relation_mp["elderbrother"] = "JiuJiu";
        _relation_mp["youngersister"] = "YiMa";
        _relation_mp["youngerbrother"] = "JiuJiu";
    }
    if(n == "YiMa") {
        _relation_mp["father"] = "outgrandfather";
        _relation_mp["mother"] = "outgrandmother";
        _relation_mp["husband"] = "YiZhang";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "YiBiaobrother";
        _relation_mp["daughter"] = "YiBiaosister";
        _relation_mp["eldersister"] = "YiMa";
        _relation_mp["elderbrother"] = "JiuJiu";
        _relation_mp["youngersister"] = "YiMa";
        _relation_mp["youngerbrother"] = "JiuJiu";
    }
    if(n == "YiZhang") {
        _relation_mp["father"] = "TOO FAR AWAY!";
        _relation_mp["mother"] = "TOO FAR AWAY!";
        _relation_mp["husband"] = "ARE YOUR SURE???";
        _relation_mp["wife"] = "YiMa";
        _relation_mp["son"] = "YiBiaobrother";
        _relation_mp["daughter"] = "YiBiaosister";
        _relation_mp["eldersister"] = "TOO FAR AWAY!";
        _relation_mp["elderbrother"] = "TOO FAR AWAY!";
        _relation_mp["youngersister"] = "TOO FAR AWAY!";
        _relation_mp["youngerbrother"] = "TOO FAR AWAY!";
    }
    if(n == "YiBiaobrother") {
        _relation_mp["father"] = "YiZhang";
        _relation_mp["mother"] = "YiMa";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "TOO FAR AWAY!";
        _relation_mp["son"] = "TOO FAR AWAY!";
        _relation_mp["daughter"] = "TOO FAR AWAY!";
        _relation_mp["eldersister"] = "YiBiaosister";
        _relation_mp["elderbrother"] = "YiBiaobrother";
        _relation_mp["youngersister"] = "YiBiaosister";
        _relation_mp["youngerbrother"] = "YiBiaobrother";
    }
    if(n == "YiBiaosister") {
        _relation_mp["father"] = "YiZhang";
        _relation_mp["mother"] = "YiMa";
        _relation_mp["husband"] = "TOO FAR AWAY!";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "TOO FAR AWAY!";
        _relation_mp["daughter"] = "TOO FAR AWAY!";
        _relation_mp["eldersister"] = "YiBiaosister";
        _relation_mp["elderbrother"] = "YiBiaobrother";
        _relation_mp["youngersister"] = "YiBiaosister";
        _relation_mp["youngerbrother"] = "YiBiaobrother";
    }
    if(n == "JiuJiu") {
        _relation_mp["father"] = "outgrandfather";
        _relation_mp["mother"] = "outgrandmother";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "JiuMa";
        _relation_mp["son"] = "Biaobrother";
        _relation_mp["daughter"] = "Biaosister";
        _relation_mp["eldersister"] = "YiMa";
        _relation_mp["elderbrother"] = "JiuJiu";
        _relation_mp["youngersister"] = "YiMa";
        _relation_mp["youngerbrother"] = "JiuJiu";
    }
    if(n == "JiuMa") {
        _relation_mp["father"] = "TOO FAR AWAY!";
        _relation_mp["mother"] = "TOO FAR AWAY!";
        _relation_mp["husband"] = "JiuJiu";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "Biaobrother";
        _relation_mp["daughter"] = "Biaosister";
        _relation_mp["eldersister"] = "TOO FAR AWAY!";
        _relation_mp["elderbrother"] = "TOO FAR AWAY!";
        _relation_mp["youngersister"] = "TOO FAR AWAY!";
        _relation_mp["youngerbrother"] = "TOO FAR AWAY!";
    }
    if(n == "JiuBiaobrother") {
        _relation_mp["father"] = "YiZhang";
        _relation_mp["mother"] = "YiMa";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "TOO FAR AWAY!";
        _relation_mp["son"] = "TOO FAR AWAY!";
        _relation_mp["daughter"] = "TOO FAR AWAY!";
        _relation_mp["eldersister"] = "JiuBiaosister";
        _relation_mp["elderbrother"] = "JiuBiaobrother";
        _relation_mp["youngersister"] = "JiuBiaosister";
        _relation_mp["youngerbrother"] = "JiuBiaobrother";
    }
    if(n == "JiuBiaosister") {
        _relation_mp["father"] = "YiZhang";
        _relation_mp["mother"] = "YiMa";
        _relation_mp["husband"] = "TOO FAR AWAY!";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "TOO FAR AWAY!";
        _relation_mp["daughter"] = "TOO FAR AWAY!";
        _relation_mp["eldersister"] = "JiuBiaosister";
        _relation_mp["elderbrother"] = "JiuBiaobrother";
        _relation_mp["youngersister"] = "JiuBiaosister";
        _relation_mp["youngerbrother"] = "JiuBiaobrother";
    }
    if(n == "outgrandfather") {
        _relation_mp["father"] = "TOO FAR AWAY!";
        _relation_mp["mother"] = "TOO FAR AWAY!";
        _relation_mp["husband"] = "ARE YOU SURE???";
        _relation_mp["wife"] = "outgrandmother";
        _relation_mp["son"] = "JiuJiu";
        _relation_mp["daughter"] = "mother";
        _relation_mp["eldersister"] = "TOO FAR AWAY!";
        _relation_mp["elderbrother"] = "TOO FAR AWAY!";
        _relation_mp["youngersister"] = "TOO FAR AWAY!";
        _relation_mp["youngerbrother"] = "TOO FAR AWAY!";
    }
    if(n == "outgrandmother") {
        _relation_mp["father"] = "TOO FAR AWAY!";
        _relation_mp["mother"] = "TOO FAR AWAY!";
        _relation_mp["husband"] = "outgrandfather";
        _relation_mp["wife"] = "ARE YOU SURE???";
        _relation_mp["son"] = "JiuJiu";
        _relation_mp["daughter"] = "mother";
        _relation_mp["eldersister"] = "TOO FAR AWAY!";
        _relation_mp["elderbrother"] = "TOO FAR AWAY!";
        _relation_mp["youngersister"] = "TOO FAR AWAY!";
        _relation_mp["youngerbrother"] = "TOO FAR AWAY!";
    }
}

std::string Person::Calculate(const std::string &n) {
    return this->_relation_mp[n];
}

std::string Person::getName(){
    return this->_this_name;
}

char *convert(char* s1, char* s2) {
    std::string lhs(s1);
    std::string rhs(s2);
    Person tmpP(lhs);
    auto res = tmpP.Calculate(rhs);
    return strdup(res.c_str());
}
