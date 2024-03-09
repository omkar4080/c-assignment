#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(void)

{
printf("...........................................................................\n");
printf(" data tyape\t\t formate specifire \t\t size \t\t range\n");
printf("...........................................................................\n");
printf("\n int\t\t\t\t%%d\t\t\t %d\t %d to %d\n",sizeof(int),INT_MIN,INT_MAX);
printf("\n short int\t\t\t%%hd\t\t\t %d\t\t %hd to %hd\n",sizeof(short int),SHRT_MIN,SHRT_MAX);
printf("\nsigned char \t\t\t%%c\t\t\t %d \t\t %d to %d\n",sizeof( char),SCHAR_MIN,SCHAR_MAX);
printf("\n unsigned int\t\t\t%%u\t\t\t %lu\t\t 0 to %u\n",sizeof(unsigned int),UINT_MAX );
printf("\n unsigned short int\t\t%%hu\t\t\t %lu\t\t 0 to %u\n",sizeof(unsigned short int),USHRT_MAX);
printf("\n long int \t\t\t %%ld \t\t\t%lu\t \t %ld to %ld\n",sizeof(long int),LONG_MIN,LONG_MAX);
printf("\n float \t\t\t\t %%f \t\t\t%lu \t\t %f to %f\n",sizeof(float),FLT_MIN,FLT_MAX);
printf("\n float \t\t\t\t %%g \t\t\t%lu \t\t %g to %g\n",sizeof(float),FLT_MIN,FLT_MAX);
printf("\n float \t\t\t\t %%e \t\t\t%lu \t\t %e to %e\n",sizeof(float),FLT_MIN,FLT_MAX);
printf("\n float \t\t\t\t %%E \t\t\t%lu \t\t %E to %E\n",sizeof(float),FLT_MIN,FLT_MAX);

return 0;
}
