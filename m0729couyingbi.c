#include<stdio.h>

int main(){
	//���� �������1�� 2�Ǻ�5�ǵ�Ӳ�Ҵճ�10Ԫ���µĽ���أ� 
	int x;
	int one, two, five;
	
	scanf("%d", &x);
	for(one =1 ; one < x*10 ; one++){
		for(two = 1; two < x*10/2; two++){
			for(five = 1; five < x*10/5; five++){
				if(one + two*2 + five*5 == x*10){
					printf("������%d��1�Ǽ�%d��2�Ǽ�%d��5�ǵõ�%dԪ\n",one,two,five,x);
					goto out;
				}
			}
		}
	}
	out:
		return 0;
}
