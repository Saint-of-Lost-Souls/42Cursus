#include <stdio.h>
#include <stdlib.h>

#include "libcipher.h"

int main(int argc, char *argv[])
{
 char text[]="The cake is a lie";

 puts(text);

 cipher_encode(text);
 puts(text);

 cipher_decode(text);
 puts(text);

 exit (0);

} // end of main