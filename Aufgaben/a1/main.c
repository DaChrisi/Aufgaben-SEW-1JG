//Formatieren
//Christian Wunder
//19.11.2021
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char wort[]="Elektrotechnik";
    float a=(float)20.0/6.0;
    double b=-200.0/6.0;
    //<123456789012345678901234567890>
    printf("<123456789012345678901234567890>\n");
    //<        Elektrotechnik>
    printf("<%22s>\n",wort);
    //<Elektro               >
    printf("<%-22.7s>\n",wort);
    //<"Elektrotechnik"           >
    printf("<\"%-12s%-12c>\n",wort,'"');
    //<\Elektrotechnik          >
    printf("<\\%-24s>\n",wort);
    //<           %Elektrotechnik%>
    printf("<%12c%12s%%>\n",'%',wort);
    //<000003.333>
    printf("<%010.3f>\n",a);

    printf("<+%010.1e>\n",a);
    //<-003.3E+001>
    printf("<%011.1E>\n",b);
    //<          +3.333333>
    printf("<%+19f>\n",a);
    //<       -33.3333333333>
    printf("<%21.10f>\n",b);
    return EXIT_SUCCESS;
}
