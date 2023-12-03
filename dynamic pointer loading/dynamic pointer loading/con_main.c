#if _MSC_VER
	#pragma comment( linker, "/subsystem:console" )
#endif

#if defined(_MSC_VER)		
	#pragma comment(lib, "user32.lib")
	#pragma comment(lib, "gdi32.lib")
#endif

#include <stdio.h>
#include <conio.h>


#include "r_renderer.h"


int main() {
    printf("Hello, World!\n");
    //printfln("---------------------");

    //renderer_init(RT_D3D11);
    renderer_init(RT_GL4);

    rs.init();
    rs.render();
    rs.deinit();

    renderer_deinit();


    //printfln("---------------------");

    //-----------
    //do {} while(GetAsyncKeyState(VK_ESCAPE)==0);
    const int ESCAPE = 27; int k = 0; do { k = _getch(); } while (k != ESCAPE);
    //_getch();
    //getch();
    return 0;
}

