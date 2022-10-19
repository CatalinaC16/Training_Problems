/*Programul L10Ex1 */
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
 float re, im;
} COMPLEX;
void aduna(COMPLEX *a, COMPLEX *b, COMPLEX *c)
 /* transmiterea parametrilor prin pointeri */
{
 c->re=a->re+b->re;
 c->im=a->im+b->im;
}
void scade(COMPLEX a, COMPLEX b, COMPLEX *c)
 /* transmiterea parametrilor de intrare prin valoare si a rezultatului prin pointer */
{
 c->re=a.re-b.re;
 c->im=a.im-b.im;
}
void produs(COMPLEX *a, COMPLEX *b, COMPLEX *c)
/*transmiterea parametrilor prin pointeri */
{
 c->re=a->re*b->re-a->im*b->im;
 c->im=a->im*b->re+a->re*b->im;
}
void impartire(COMPLEX *a, COMPLEX *b, COMPLEX *c)
/*transmiterea parametrilor prin pointeri */
{
 float x;
 x=b->re*b->re+b->im*b->im;
 if (x==0) {
 printf("\nImpartire la zero!\n");
 exit(1);
 }
 else{
 c->re=(a->re*b->re+a->im*b->im)/x;
 c->im=(a->im*b->re-a->re*b->im)/x;
 }
}
 int main()
 /* Operaţii asupra numerelor complexe */
 {
 COMPLEX a,b,c;
 char ch;
 ch='D';
 while ((ch=='D')|| (ch=='d'))
 {
 printf("\nIntroduceti primul numar complex\n");
 printf("a.re=");scanf("%f",&a.re);
 printf("a.im=");scanf("%f",&a.im);
 printf("\nIntroduceti al doilea numar complex\n");
 printf("b.re=");scanf("%f",&b.re);
 printf("b.im=");scanf("%f",&b.im);
 aduna(&a,&b,&c);
 printf("\n(%f+j*%f)+(%f+j*%f)=%f+j*%f\n", a.re,a.im,b.re,b.im,c.re,c.im);
 scade(a,b,&c);
 printf("\n(%f+j*%f)-(%f+j*%f)=%f+j*%f\n", a.re,a.im,b.re,b.im,c.re,c.im);
 produs(&a,&b,&c);
 printf("\n(%f+j*%f)*(%f+j*%f)=%f+j*%f\n", a.re,a.im,b.re,b.im,c.re,c.im);
 impartire(&a,&b,&c);
 printf("\n(%f+j*%f)/(%f+j*%f)=%f+j*%f\n", a.re,a.im,b.re,b.im,c.re,c.im);
 printf("\nCONTINUATI?DA=D/d,Nu=alt caracter " );
 scanf("%*c%c",&ch);
 }
 return 0;
 }