#include<cstdio>
#include<windows.h>

long long int input,num,numm,a,b,c;
bool tbit[1024];

void keybd_push(BYTE num){
	keybd_event(num,0,0,0);
	keybd_event(num,0,2,0);
}

int main(){
	while(1){
	scanf("%lld",&input);
	num=0;
	while(input){
		tbit[++num]=input%2;
		input/=2;
	}
	while(num%3)	tbit[++num]=0;
	numm=num;
	printf("2bit: ");
	for(int i=num;i>=1;i--)printf("%d ",tbit[i]);
	printf("\n");
	
	for(int i=0;i<3;i++){
		keybd_push(VK_NUMLOCK);
		keybd_push(VK_CAPITAL);
		keybd_push(VK_SCROLL);
		Sleep(500);
		keybd_push(VK_NUMLOCK);
		keybd_push(VK_CAPITAL);
		keybd_push(VK_SCROLL);
		Sleep(500);
	}
	Sleep(2000);
	
	
	for(int i=1;i<=numm/3;i++){
		a=tbit[num--];
		b=tbit[num--];
		c=tbit[num--];
		if(a) keybd_push(VK_NUMLOCK);
		if(b) keybd_push(VK_CAPITAL);
		if(c) keybd_push(VK_SCROLL);
		Sleep(500);
		if(a) keybd_push(VK_NUMLOCK);
		if(b) keybd_push(VK_CAPITAL);
		if(c) keybd_push(VK_SCROLL);
		Sleep(500);
	}
	
	
	for(int i=0;i<3;i++){
		keybd_push(VK_NUMLOCK);
		keybd_push(VK_CAPITAL);
		keybd_push(VK_SCROLL);
		Sleep(500);
		keybd_push(VK_NUMLOCK);
		keybd_push(VK_CAPITAL);
		keybd_push(VK_SCROLL);
		Sleep(500);
	}
	}
}
