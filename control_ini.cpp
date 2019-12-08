 
/* Simple test program
 *
 *  gcc -o test test.c minIni.c
 */
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "minIni.c"
#define sizearray(a)  (sizeof(a) / sizeof((a)[0]))

const char inifile[] = "test.ini";
const char inifile2[] = "testplain.ini";


int main(){
    
    
a:

 /* string writing */
   ini_puts("SECTION", "dataid", "data_stored", inifile);


//goto a;
    
};
