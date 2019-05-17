//包含系统头文件 
#include<windows.h>

//定义各种各样奇奇怪怪的万分神奇的【颜色常量】 
//定义颜色常量 
//前景 
const WORD BLACK_FG     =0x0;
const WORD BLUE_FG      =0x1;
const WORD GRASS_FG     =0x2;
const WORD AZURE_FG     =0x3;
const WORD BLOOD_FG     =0x4;
const WORD VIOLET_FG    =0x5;
const WORD BROWN_FG     =0x6;
const WORD WHITE_FG     =0x7;
const WORD GREY_FG      =0x8;
const WORD INDIGO_FG    =0x9;
const WORD GREEN_FG     =0xA;
const WORD CYAN_FG      =0xB;
const WORD RED_FG       =0xC;
const WORD MAGENTA_FG   =0xD;
const WORD YELLOW_FG    =0xE;
const WORD SNOW_FG      =0xF;
//前景_兼容缩写 
const WORD BLACK        =0x0;
const WORD BLUE         =0x1;
const WORD GRASS        =0x2;
const WORD AZURE        =0x3;
const WORD BLOOD        =0x4;
const WORD VIOLET       =0x5;
const WORD BROWN        =0x6;
const WORD WHITE        =0x7;
const WORD GREY         =0x8;
const WORD INDIGO       =0x9;
const WORD GREEN        =0xA;
const WORD CYAN         =0xB;
const WORD RED          =0xC;
const WORD MAGENTA      =0xD;
const WORD YELLOW       =0xE;
const WORD SNOW         =0xF;
//背景 
const WORD BLACK_BG     =0x00;
const WORD BLUE_BG      =0x10;
const WORD GRASS_BG     =0x20;
const WORD AZURE_BG     =0x30;
const WORD BLOOD_BG     =0x40;
const WORD VIOLET_BG    =0x50;
const WORD BROWN_BG     =0x60;
const WORD WHITE_BG     =0x70;
const WORD GREY_BG      =0x80;
const WORD INDIGO_BG    =0x90;
const WORD GREEN_BG     =0xA0;
const WORD CYAN_BG      =0xB0;
const WORD RED_BG       =0xC0;
const WORD MAGENTA_BG   =0xD0;
const WORD YELLOW_BG    =0xE0;
const WORD SNOW_BG      =0xF0;
//定义颜色常量_保留 
//前景_保留 
const WORD _BLACK_FG    =0x0;
const WORD _BLUE_FG     =0x1;
const WORD _GRASS_FG    =0x2;
const WORD _AZURE_FG    =0x3;
const WORD _BLOOD_FG    =0x4;
const WORD _VIOLET_FG   =0x5;
const WORD _BROWN_FG    =0x6;
const WORD _WHITE_FG    =0x7;
const WORD _GREY_FG     =0x8;
const WORD _INDIGO_FG   =0x9;
const WORD _GREEN_FG    =0xA;
const WORD _CYAN_FG     =0xB;
const WORD _RED_FG      =0xC;
const WORD _MAGENTA_FG  =0xD;
const WORD _YELLOW_FG   =0xE;
const WORD _SNOW_FG     =0xF;
//前景_兼容缩写_保留 
const WORD _BLACK       =0x0;
const WORD _BLUE        =0x1;
const WORD _GRASS       =0x2;
const WORD _AZURE       =0x3;
const WORD _BLOOD       =0x4;
const WORD _VIOLET      =0x5;
const WORD _BROWN       =0x6;
const WORD _WHITE       =0x7;
const WORD _GREY        =0x8;
const WORD _INDIGO      =0x9;
const WORD _GREEN       =0xA;
const WORD _CYAN        =0xB;
const WORD _RED         =0xC;
const WORD _MAGENTA     =0xD;
const WORD _YELLOW      =0xE;
const WORD _SNOW        =0xF;
//背景_保留 
const WORD _BLACK_BG    =0x00;
const WORD _BLUE_BG     =0x10;
const WORD _GRASS_BG    =0x20;
const WORD _AZURE_BG    =0x30;
const WORD _BLOOD_BG    =0x40;
const WORD _VIOLET_BG   =0x50;
const WORD _BROWN_BG    =0x60;
const WORD _WHITE_BG    =0x70;
const WORD _GREY_BG     =0x80;
const WORD _INDIGO_BG   =0x90;
const WORD _GREEN_BG    =0xA0;
const WORD _CYAN_BG     =0xB0;
const WORD _RED_BG      =0xC0;
const WORD _MAGENTA_BG  =0xD0;
const WORD _YELLOW_BG   =0xE0;
const WORD _SNOW_BG     =0xF0;
//定义颜色常量_奇怪的拼写【喵喵喵？】 
//前景_奇怪的拼写【喵喵喵？】 
const WORD DARK_FG      =0x0;
const WORD SKY_FG       =0x3;
const WORD PURPLE_FG    =0x5;
const WORD GRAY_FG      =0x8;
const WORD LIGHT_FG     =0xF;
//前景_兼容缩写_奇怪的拼写【喵喵喵？】 
const WORD DARK         =0x0;
const WORD SKY          =0x3;
const WORD PURPLE       =0x5;
const WORD GRAY         =0x8;
const WORD LIGHT        =0xF;
//背景_奇怪的拼写【喵喵喵？】 
const WORD DARK_BG      =0x00;
const WORD SKY_BG       =0x30;
const WORD PURPLE_BG    =0x50;
const WORD GRAY_BG      =0x80;
const WORD LIGHT_BG     =0xF0;
//定义颜色常量_奇怪的拼写【喵喵喵？】_保留 
//前景_奇怪的拼写【喵喵喵？】_保留 
const WORD _DARK_FG     =0x0;
const WORD _SKY_FG      =0x3;
const WORD _PURPLE_FG   =0x5;
const WORD _GRAY_FG     =0x8;
const WORD _LIGHT_FG    =0xF;
//前景_兼容缩写_奇怪的拼写【喵喵喵？】_保留 
const WORD _DARK        =0x0;
const WORD _SKY         =0x3;
const WORD _PURPLE      =0x5;
const WORD _GRAY        =0x8;
const WORD _LIGHT       =0xF;
//背景_奇怪的拼写【喵喵喵？】_保留 
const WORD _DARK_BG     =0x00;
const WORD _SKY_BG      =0x30;
const WORD _PURPLE_BG   =0x50;
const WORD _GRAY_BG     =0x80;
const WORD _LIGHT_BG    =0xF0;

//定义【可爱】的令人尊敬的模式常量 
//定义模式常量 
//缩写 
const bool FG=false;
const bool BG=true;
//兼容全称 
const bool FOREGROUND=false;
const bool BACKGROUND=true;
//定义模式常量_保留 
//缩写_保留 
const bool _FG=false;
const bool _BG=true;
//兼容全称_保留 
const bool _FOREGROUND=false;
const bool _BACKGROUND=true;

//使用标准命名空间 
using namespace std;

//各种各样【不废话了】的颜色更改函数 
//颜色更改函数 
void SetColor(WORD COLOR){SetConsoleTextAttribute(GetStdHandle(-11),COLOR);}
void SetColor(bool MODE,WORD COLOR,bool _nothing){SetConsoleTextAttribute(GetStdHandle(-11),COLOR<<(MODE<<2));}
void SetColor(WORD COLOR_FG,WORD COLOR_BG){SetConsoleTextAttribute(GetStdHandle(-11),(COLOR_BG<<4)|COLOR_FG);}
//颜色更改函数_保留 
void _SetColor(WORD COLOR){SetConsoleTextAttribute(GetStdHandle(-11),COLOR);}
void _SetColor(bool MODE,WORD COLOR,bool _nothing){SetConsoleTextAttribute(GetStdHandle(-11),COLOR<<(MODE<<2));}
void _SetColor(WORD COLOR_FG,WORD COLOR_BG){SetConsoleTextAttribute(GetStdHandle(-11),(COLOR_BG<<4)|COLOR_FG);}
