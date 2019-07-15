//包含系统头文件 
#include<windows.h>
#include<ostream>
#include<istream>
#include<assert.h>

//令人着迷的【Class】【欧，你太可爱了！】 
class Color{
    public:
        WORD VALUE;
        Color(const WORD&num=0x00){*this=num;}
        Color(const Color&_COLOR){this->VALUE=_COLOR.VALUE;}
        Color&operator=(WORD num){
            assert(num>=0x00&&num<=0xFF);
            VALUE=num;
            return*this;
        }
        Color&operator=(Color _COLOR){
            assert(_COLOR.VALUE>=0x00&&_COLOR.VALUE<=0xFF);
            VALUE=_COLOR.VALUE;
            return*this;
        }
        Color operator|(const Color&_COLOR)const{
            Color tmp;
            tmp.VALUE=VALUE|_COLOR.VALUE;
            return tmp;
        }
        Color operator+(const Color&_COLOR)const{
            Color tmp;
            tmp.VALUE=VALUE|_COLOR.VALUE;
            return tmp;
        }
        Color operator*(const Color&_COLOR)const{
            Color tmp;
            tmp.VALUE=VALUE|_COLOR.VALUE;
            return tmp;
        }
};

//定义各种各样奇奇怪怪的万分神奇的【颜色常量】 
//定义颜色常量 
//前景 
const Color BLACK_FG     =0x0;
const Color BLUE_FG      =0x1;
const Color GRASS_FG     =0x2;
const Color AZURE_FG     =0x3;
const Color BLOOD_FG     =0x4;
const Color VIOLET_FG    =0x5;
const Color BROWN_FG     =0x6;
const Color WHITE_FG     =0x7;
const Color GREY_FG      =0x8;
const Color INDIGO_FG    =0x9;
const Color GREEN_FG     =0xA;
const Color CYAN_FG      =0xB;
const Color RED_FG       =0xC;
const Color MAGENTA_FG   =0xD;
const Color YELLOW_FG    =0xE;
const Color SNOW_FG      =0xF;
//前景_兼容缩写 
const Color BLACK        =0x0;
const Color BLUE         =0x1;
const Color GRASS        =0x2;
const Color AZURE        =0x3;
const Color BLOOD        =0x4;
const Color VIOLET       =0x5;
const Color BROWN        =0x6;
const Color WHITE        =0x7;
const Color GREY         =0x8;
const Color INDIGO       =0x9;
const Color GREEN        =0xA;
const Color CYAN         =0xB;
const Color RED          =0xC;
const Color MAGENTA      =0xD;
const Color YELLOW       =0xE;
const Color SNOW         =0xF;
//背景 
const Color BLACK_BG     =0x00;
const Color BLUE_BG      =0x10;
const Color GRASS_BG     =0x20;
const Color AZURE_BG     =0x30;
const Color BLOOD_BG     =0x40;
const Color VIOLET_BG    =0x50;
const Color BROWN_BG     =0x60;
const Color WHITE_BG     =0x70;
const Color GREY_BG      =0x80;
const Color INDIGO_BG    =0x90;
const Color GREEN_BG     =0xA0;
const Color CYAN_BG      =0xB0;
const Color RED_BG       =0xC0;
const Color MAGENTA_BG   =0xD0;
const Color YELLOW_BG    =0xE0;
const Color SNOW_BG      =0xF0;
//定义颜色常量_保留 
//前景_保留 
const Color _BLACK_FG    =0x0;
const Color _BLUE_FG     =0x1;
const Color _GRASS_FG    =0x2;
const Color _AZURE_FG    =0x3;
const Color _BLOOD_FG    =0x4;
const Color _VIOLET_FG   =0x5;
const Color _BROWN_FG    =0x6;
const Color _WHITE_FG    =0x7;
const Color _GREY_FG     =0x8;
const Color _INDIGO_FG   =0x9;
const Color _GREEN_FG    =0xA;
const Color _CYAN_FG     =0xB;
const Color _RED_FG      =0xC;
const Color _MAGENTA_FG  =0xD;
const Color _YELLOW_FG   =0xE;
const Color _SNOW_FG     =0xF;
//前景_兼容缩写_保留 
const Color _BLACK       =0x0;
const Color _BLUE        =0x1;
const Color _GRASS       =0x2;
const Color _AZURE       =0x3;
const Color _BLOOD       =0x4;
const Color _VIOLET      =0x5;
const Color _BROWN       =0x6;
const Color _WHITE       =0x7;
const Color _GREY        =0x8;
const Color _INDIGO      =0x9;
const Color _GREEN       =0xA;
const Color _CYAN        =0xB;
const Color _RED         =0xC;
const Color _MAGENTA     =0xD;
const Color _YELLOW      =0xE;
const Color _SNOW        =0xF;
//背景_保留 
const Color _BLACK_BG    =0x00;
const Color _BLUE_BG     =0x10;
const Color _GRASS_BG    =0x20;
const Color _AZURE_BG    =0x30;
const Color _BLOOD_BG    =0x40;
const Color _VIOLET_BG   =0x50;
const Color _BROWN_BG    =0x60;
const Color _WHITE_BG    =0x70;
const Color _GREY_BG     =0x80;
const Color _INDIGO_BG   =0x90;
const Color _GREEN_BG    =0xA0;
const Color _CYAN_BG     =0xB0;
const Color _RED_BG      =0xC0;
const Color _MAGENTA_BG  =0xD0;
const Color _YELLOW_BG   =0xE0;
const Color _SNOW_BG     =0xF0;
//定义颜色常量_奇怪的拼写【喵喵喵？】 
//前景_奇怪的拼写【喵喵喵？】 
const Color DARK_FG      =0x0;
const Color SKY_FG       =0x3;
const Color PURPLE_FG    =0x5;
const Color GRAY_FG      =0x8;
const Color LIGHT_FG     =0xF;
//前景_兼容缩写_奇怪的拼写【喵喵喵？】 
const Color DARK         =0x0;
const Color SKY          =0x3;
const Color PURPLE       =0x5;
const Color GRAY         =0x8;
const Color LIGHT        =0xF;
//背景_奇怪的拼写【喵喵喵？】 
const Color DARK_BG      =0x00;
const Color SKY_BG       =0x30;
const Color PURPLE_BG    =0x50;
const Color GRAY_BG      =0x80;
const Color LIGHT_BG     =0xF0;
//定义颜色常量_奇怪的拼写【喵喵喵？】_保留 
//前景_奇怪的拼写【喵喵喵？】_保留 
const Color _DARK_FG     =0x0;
const Color _SKY_FG      =0x3;
const Color _PURPLE_FG   =0x5;
const Color _GRAY_FG     =0x8;
const Color _LIGHT_FG    =0xF;
//前景_兼容缩写_奇怪的拼写【喵喵喵？】_保留 
const Color _DARK        =0x0;
const Color _SKY         =0x3;
const Color _PURPLE      =0x5;
const Color _GRAY        =0x8;
const Color _LIGHT       =0xF;
//背景_奇怪的拼写【喵喵喵？】_保留 
const Color _DARK_BG     =0x00;
const Color _SKY_BG      =0x30;
const Color _PURPLE_BG   =0x50;
const Color _GRAY_BG     =0x80;
const Color _LIGHT_BG    =0xF0;

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
void SetColor(Color COLOR){SetConsoleTextAttribute(GetStdHandle(-11),COLOR.VALUE);}
void SetColor(bool MODE,Color COLOR,bool _nothing){SetConsoleTextAttribute(GetStdHandle(-11),COLOR.VALUE<<(MODE<<2));}
void SetColor(Color COLOR_FG,Color COLOR_BG){SetConsoleTextAttribute(GetStdHandle(-11),(COLOR_BG.VALUE<<4)|COLOR_FG.VALUE);}
//颜色更改函数_保留 
void _SetColor(Color COLOR){SetConsoleTextAttribute(GetStdHandle(-11),COLOR.VALUE);}
void _SetColor(bool MODE,Color COLOR,bool _nothing){SetConsoleTextAttribute(GetStdHandle(-11),COLOR.VALUE<<(MODE<<2));}
void _SetColor(Color COLOR_FG,Color COLOR_BG){SetConsoleTextAttribute(GetStdHandle(-11),(COLOR_BG.VALUE<<4)|(COLOR_FG.VALUE));}

//【迷人的】的便携式颜色更改【输入输出流】 
ostream&operator<<(ostream&outStream,const Color&_COLOR){
    _SetColor(_COLOR);
    return outStream;
}
istream&operator>>(istream&inStream,const Color&_COLOR){
    _SetColor(_COLOR);
    return inStream;
}
