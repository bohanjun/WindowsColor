# WindowsColor.h
## 各位大佬，这是俺的第一个 GitHub 项目，请不要再嘲笑我的英语/开发能力了QωQ
## 问答
* ONE
  - Can I use the "WindowsColor.h" on my MacOS?
  - Oooooops! Sorry, temporary not yet.
* TWO
  - How to use the "WindowsColor.h"?
  - Copy the "WindowsColor.h" to the "include" folder.
* THREE
  - Why I can not use the "WindowsColor.h"?
  - You can try to reboot your computer or reinstall the IDE.
## 栗子
```cpp
#include <cstdio>
#include <iostream>
#include <WindowsColor.h> 
using namespace std;
int main()
{
    SetColor (BROWN_FG);
    printf ("BROWN_FG\n");
    SetColor (BLUE_BG);
    printf ("BLUE_BG\n");
    SetColor (BLOOD_FG | GRASS_BG);
    printf ("BLOOD_FG and GLASS_BG\n");
    SetColor (FG, CYAN, 0);
    printf ("CYAN_FG\n");
    SetColor (BG, INDIGO, 0);
    printf ("INDIGO_BG\n");
    SetColor (AZURE, YELLOW);
    printf ("AZURE_FG and YELLOW_BG\n");
    cout << MAGENTA_FG + GREEN_BG << "MAGENTA_FG and GREEN_BG\n";
    return 0;
}
```
<div align=center>
    <img src="https://i.loli.net/2019/05/17/5cdecd0f6403079231.jpg" />
</div>

## 更新
### 20190531 v2.0.6 [Code: Indigo]
* Made some tiny optimizations
### 20190531 v2.0.5 [Code: Indigo]
* Fixed some tiny bugs
### 20190525 v2.0.3
* Made some tiny optimizations
### 20190519 v2.0.1
* Fixed some tiny bugs
### 20190519 v2.0.0
* Reconsitution the Classes & Functions
### 20190512 v1.0.2
* Fixed some tiny bugs
### 20190511 v1.0.1
* Fixed some tiny bugs
### 20190511 v1.0.0
* Created this project
