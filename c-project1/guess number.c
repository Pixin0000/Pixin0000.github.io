#include <stdlib.h>
#include <stdio.h>
int main() {
	int num = 1; //設置迴圈變數
	int change; //設置可變動變數
	int count=0; // 跑了幾次
	char ans1,ans2,ans3,ans4,ans5,ans6,ans7 ; //答案共7個
	int final_ans = 0;//最後答案
	printf("thinking a number on your mind, and I will guess it!\n\n");



first:
	for(num=1; num<=100; num+=2) {
		++count;
		printf("%-4.2d", num);//4格寬 數字顯示2位
		if(count%9==0) {
			printf("\n");//每執行9次換行
		}
	}
	count = 0;//清空變數
	printf("\n");
	printf("Is your number on the table (y/n)? \n");
	scanf("%s", &ans1);
	if((ans1=='Y') || (ans1=='y')) { //若有數字
		final_ans += 1;
	}
second:
	for(num=2; num<=100; num+=2) {
		change = num;
		++count;
		if(count%2==0) {
			change--;
		}
		printf("%-4.2d", change);//4格寬 數字顯示2位
		if(count%9==0) {
			printf("\n");//每執行9次換行
		}
	}
	printf("\n");
	printf("Is your number on the table (y/n)? \n");
	scanf("%s", &ans2);
	count = 0;//清空變數
	change = 0;//清空變數
	if((ans2=='Y') || (ans2=='y')) {
		final_ans += 2;
	}
third:
	for(num=4; num<=100; num++) {
		change = num;
		++count;
		if(count%4==1&&num!=4) {
			num+=4;
		}
		printf("%-4.2d", num);//4格寬 數字顯示2位
		if(count%9==0) {
			printf("\n");//每執行9次換行
		}
	}
	printf("\n");
	printf("Is your number on the table (y/n)? \n");
	scanf("%s", &ans3);
	count = 0;//清空變數
	change = 0;//清空變數
	if((ans3=='Y') || (ans3=='y')) {
		final_ans +=4;
	}
fourth:
	for(num=8; num<=100; num++) {
		change = num;
		++count;
		if(count%8==1&&num!=8) {
			num+=8;
		}
		if(num>100) {
			break;
		}
		printf("%-4.2d", num);//4格寬 數字顯示2位
		if(count%9==0) {
			printf("\n");//每執行9次換行
		}
	}
	printf("\n");
	printf("Is your number on the table (y/n)? \n");
	scanf("%s", &ans4);
	count = 0;//清空變數
	change = 0;//清空變數
	if((ans4=='Y') || (ans4=='y')) {
		final_ans += 8;
	}
fifth:
	for(num=16; num<=100; num++) {
		change = num;
		++count;
		if(count%16==1&&num!=16) {
			num+=16;
		}
		if(num>100) {
			break;
		}
		printf("%-4.2d", num);//4格寬 數字顯示2位
		if(count%9==0) {
			printf("\n");//每執行9次換行
		}
	}
	printf("\n");
	printf("Is your number on the table (y/n)? \n");
	scanf("%s", &ans5);
	count = 0;//清空變數
	change = 0;//清空變數
	if((ans5=='Y') || (ans5=='y')) {
		final_ans += 16;
	}
sixth:
	for(num=32; num<=100; num++) {
		change = num;
		++count;
		if(count%32==1&&num!=32) {
			num+=32;
		}
		if(num>100) {
			break;
		}
		printf("%-4.2d", num);//4格寬 數字顯示2位
		if(count%9==0) {
			printf("\n");//每執行9次換行
		}
	}
	printf("\n");
	printf("Is your number on the table (y/n)? \n");
	scanf("%s", &ans6);
	count = 0;//清空變數
	change = 0;//清空變數
	if((ans6=='Y') || (ans6=='y')) {
		final_ans += 32;
	}
seventh:
	for(num=64; num<=100; num++) {
		++count;
		printf("%-4.2d", num);//4格寬 數字顯示2位
		if(count%9==0) {
			printf("\n");//每執行9次換行
		}
	}
	printf("\n");
	printf("Is your number on the table (y/n)? \n");
	scanf("%s", &ans7);
	if((ans7=='Y') || (ans7=='y')) {
		final_ans += 64;
	}

	else if((ans1=='n') || (ans1=='N')) { //若無數字
		final_ans += 0;
		goto second;//回到第二個table
	} else if((ans2=='n') || (ans2=='N')) { //若無數字
		final_ans += 0;
		goto third;//回到第三個table
	} else if((ans3=='n') || (ans3=='N')) { //若無數字
		final_ans += 0;
		goto fourth;//回到第四個table
	} else if((ans4=='n') || (ans4=='N')) { //若無數字
		final_ans += 0;
		goto fifth;//回到第五個table
	} else if((ans5=='n') || (ans5=='N')) { //若無數字
		final_ans += 0;
		goto sixth;//回到第六個table
	} else if((ans6=='n') || (ans6=='N')) { //若無數字
		final_ans += 0;
		goto seventh;//回到第七個table
	} else if((ans7=='n') || (ans7=='N')) { //若無數字
		final_ans += 0;
	}



	if(final_ans<=100) { //判斷最後答案
		printf("your secret number is %d\n",final_ans);
	} else if(final_ans>100 && final_ans<=127) {
		printf("WRONG!%d is not a number form 1~100\n",final_ans);
		printf("I think you input too much yes!\n");
	} else if(final_ans>127) {
		printf("there are wrong characters on your response\n");
		printf("please try again\n");
	}

	system("PAUSE");
	return 0;
}