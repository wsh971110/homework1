#include <stdio.h>
#include <stdlib.h>
#define Pi 3.1415926
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	        int r;
            scanf("%d",&r);
            printf("r=%d Pi=%.7f\n",r,Pi);
            printf("S=%.7f\n",Pi*r*r);
            return 0;
}
