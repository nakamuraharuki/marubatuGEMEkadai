#include <stdio.h>

int ppp(int s[3][3],int x,int y,int c);
int chk(int s[3][3],int c);
int main(void)
{
int i,j,x,y,r,s[3][3];
printf("‰¡²X‚Æc²Y‚ğİ’è‚µ‚Ä‚­‚¾‚³‚¢B\nƒ}ƒ‹‚Í‚PB\nƒoƒc‚Í‚Q‚Å‚·B\n");

for(i=0;i<3;i++){
for(j=0;j<3;j++)s[i][j]=0;
}

ppp(s,0,0,0);

for(i=1;i<10;i++){
printf("\næè”š‚P‚Ì“ü—Í\n");
printf("X:");
scanf("%d",&x);
printf("Y:");
scanf("%d",&y);
ppp(s,x,y,1);
r=chk(s,1);
if(r!=0){
printf("\næè‚ÌŸ‚¿\n");
return 0;
}
printf("\nŒãè”š‚Q‚Ì“ü—Í\n");
printf("X:");
scanf("%d",&x);
printf("Y:");
scanf("%d",&y);
ppp(s,x,y,2);
r=chk(s,2);
if(r!=0){
printf("\nŒãè‚ÌŸ‚¿\n");
return 0;
}
}
printf("\nˆø‚«•ª‚¯\n");

return 0;
}

int ppp(int s[3][3],int x,int y,int c){

int i,j;

x=x-1;
y=y-1;
if(s[y][x]==0){
if(c==1)s[y][x]=1;
if(c==2)s[y][x]=2;
}else{
printf("\nNG!\n");
}

printf("* 1 2 3 <X\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
if(j==0)printf("%d ",i+1);
printf("%d ",s[i][j]);
}
printf("\n");
}
printf("^\nY\n");

return 0;
} 

int chk(int s[3][3],int c){

int f;
f=0;
if(s[0][0]==c&&s[0][1]==c&&s[0][2]==c)f=c;
if(s[1][0]==c&&s[1][1]==c&&s[1][2]==c)f=c;
if(s[2][0]==c&&s[2][1]==c&&s[2][2]==c)f=c;

if(s[0][0]==c&&s[1][0]==c&&s[2][0]==c)f=c;
if(s[0][1]==c&&s[1][1]==c&&s[2][1]==c)f=c;
if(s[0][2]==c&&s[1][2]==c&&s[2][2]==c)f=c;

if(s[0][0]==c&&s[1][1]==c&&s[2][2]==c)f=c;
if(s[0][2]==c&&s[1][1]==c&&s[2][0]==c)f=c;

return f;
}