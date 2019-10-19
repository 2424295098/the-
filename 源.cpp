#include <stdio.h>
#include <stdlib.h>
void ruku();
int jieyue();
void guihuan(void);
void qingchuucun(void);
int main() {
	while (1) {
		printf("(1)采编入库\n");
		printf("(2)借阅\n");
		printf("(3)归还\n");
		printf("(4)清除库存\n");
		printf("(5)查询功能\n");
		printf("(0)退出程序\n");
		int type;

		scanf_s("%d", &type);
		switch (type) {
		case 1: ruku(); break;
		case 2: {
			if (jieyue() == 0) printf("借阅失败"); break;
			if (jieyue() == 1) printf("借阅成功"); break;
		}
		case 3: guihuan(); break;
		case 4: qingchuucun(); break;
		case 0: exit(0);
		}
	}
	return 0;
}
void ruku(void) {
	int n;
	printf("输入入库书号\n");
	scanf_s("%d", &n);
	while (n <= 0 || n >= 10000) {
		printf("输入书号错误!\n");
		scanf_s("%d", &n);
	}
	if (n > 0 && n < 10000) {
		printf("%d已经入库\n", n);
	}
}
int jieyue() {
	printf("输入借阅书号\n");
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= 3; i++) {
		if (n > 0 && n < 10000) {
			return 1;
		}
		if ((n <= 0 || n >= 10000)&&i!=3) {
			printf("输入书号错误！\n重新输入借阅书号\n");
			scanf_s("%d", &n);
		}
		if ((n <= 0 || n >= 10000) && i == 3) {
			printf("连续输入书号错误已达3次！\n");
		}
	}	
	return 0;
}
void guihuan(void) {
	int n;
	printf("输入归还书号\n");
	scanf_s("%d", &n);
	while (n <= 0 || n >= 10000) {
		printf("输入书号错误！\n");
		scanf_s("%d", &n);
	}
	if (n > 0 && n < 10000) {
		printf("%d已经归还\n", n);
	}
}
void qingchuucun(void) {
	printf("输入清除书号\n");
	int n;
	scanf_s("%d", &n);
	while (n <= 0 || n >= 10000) {
		printf("输入书号错误！\n");
		scanf_s("%d", &n);
	}
	if (n > 0 && n < 10000) {
		printf("%d已经清除\n", n);
	}
}