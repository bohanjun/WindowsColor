# WindowsColor.h
## License

<svg xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" width="108" height="20"><linearGradient id="b" x2="0" y2="100%"><stop offset="0" stop-color="#bbb" stop-opacity=".1"/><stop offset="1" stop-opacity=".1"/></linearGradient><clipPath id="a"><rect width="108" height="20" rx="3" fill="#fff"/></clipPath><g clip-path="url(#a)"><path fill="#555" d="M0 0h47v20H0z"/><path fill="#fe7d37" d="M47 0h61v20H47z"/><path fill="url(#b)" d="M0 0h108v20H0z"/></g><g fill="#fff" text-anchor="middle" font-family="DejaVu Sans,Verdana,Geneva,sans-serif" font-size="110"> <text x="245" y="150" fill="#010101" fill-opacity=".3" transform="scale(.1)" textLength="370">license</text><text x="245" y="140" transform="scale(.1)" textLength="370">license</text><text x="765" y="150" fill="#010101" fill-opacity=".3" transform="scale(.1)" textLength="510">AGPL-3.0</text><text x="765" y="140" transform="scale(.1)" textLength="510">AGPL-3.0</text></g> </svg>

## FAQ (Frequently Asked Question)
* ONE
  - Can I use the "WindowsColor.h" on my MacOS?
  - Oooooops! Sorry, temporary not yet.
* TWO
  - How to use the "WindowsColor.h"?
  - Copy the "WindowsColor.h" to the "include" folder.
* THREE
  - Why I can not use the "WindowsColor.h"?
  - You can try to reboot your computer or reinstall the IDE (Integrated Development Environment).
## E.G
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

## Update Event
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
## About The Author
### Initiator
* Bohan Wei (bohanjun)
* 12 years old
* Boy
### Contributor
* bohanjun
* MAYBE NEXT ONE ARE YOU...
