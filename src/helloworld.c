#include <genesis.h>
int main(u16 hard) {
   // Printing on screen is a VDP task so you need to call VDP_drawText(<your_text>, <x>, <y>).
   VDP_drawText("Hello World!", 10, 13);
   return 0;
}
