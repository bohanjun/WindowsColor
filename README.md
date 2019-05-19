# WindowsColor.h
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
#include <WindowsColor.h> 
using namespace std;
int main()
{
	SetColor (BROWN_FG);
	printf ("BROWN_FG\n");
	SetColor (BLUE_BG);
	printf ("BLUE_BG\n");
	SetColor (BLOOD_FG | GRASS_BG); // *** Not GLASS But GRASS!  
	printf ("BLOOD_FG and GLASS_BG\n");
	SetColor (FG, CYAN, 0);
	printf ("CYAN_FG\n");
	SetColor (BG, INDIGO, 0);
	printf ("INDIGO_BG\n");
	SetColor (AZURE, YELLOW);
	printf ("AZURE_FG and YELLOW_BG\n");
	SetColor (MAGENTA, GREEN);
	printf ("MAGENTA_FG and GREEN_BG\n");
	return 0;
}
```
<div style="text-align: center">
![Photo 1-1](https://i.loli.net/2019/05/17/5cdecd0f6403079231.jpg)
</div>

## About The Author
### Initiator
* Bohan Wei (bohanjun)
* 12 years old
* Boy
### Contributor
* bohanjun
* MAYBE NEXT ONE ARE YOU...
