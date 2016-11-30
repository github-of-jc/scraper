#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    printf("enter the site you wanna scrape\n");
    char *siteAddress = malloc(4096);
    scanf(siteAddress, "%s");
   
    printf("start to scrape %s...\n", siteAddress);
    
    return 0;
}
