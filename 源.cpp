#include <stdio.h>
#include <stdlib.h>
void ruku();
int jieyue();
void guihuan(void);
void qingchuucun(void);
int main() {
	while (1) {
		printf("(1)�ɱ����\n");
		printf("(2)����\n");
		printf("(3)�黹\n");
		printf("(4)������\n");
		printf("(5)��ѯ����\n");
		printf("(0)�˳�����\n");
		int type;

		scanf_s("%d", &type);
		switch (type) {
		case 1: ruku(); break;
		case 2: {
			if (jieyue() == 0) printf("����ʧ��"); break;
			if (jieyue() == 1) printf("���ĳɹ�"); break;
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
	printf("����������\n");
	scanf_s("%d", &n);
	while (n <= 0 || n >= 10000) {
		printf("������Ŵ���!\n");
		scanf_s("%d", &n);
	}
	if (n > 0 && n < 10000) {
		printf("%d�Ѿ����\n", n);
	}
}
int jieyue() {
	printf("����������\n");
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= 3; i++) {
		if (n > 0 && n < 10000) {
			return 1;
		}
		if ((n <= 0 || n >= 10000)&&i!=3) {
			printf("������Ŵ���\n��������������\n");
			scanf_s("%d", &n);
		}
		if ((n <= 0 || n >= 10000) && i == 3) {
			printf("����������Ŵ����Ѵ�3�Σ�\n");
		}
	}	
	return 0;
}
void guihuan(void) {
	int n;
	printf("����黹���\n");
	scanf_s("%d", &n);
	while (n <= 0 || n >= 10000) {
		printf("������Ŵ���\n");
		scanf_s("%d", &n);
	}
	if (n > 0 && n < 10000) {
		printf("%d�Ѿ��黹\n", n);
	}
}
void qingchuucun(void) {
	printf("����������\n");
	int n;
	scanf_s("%d", &n);
	while (n <= 0 || n >= 10000) {
		printf("������Ŵ���\n");
		scanf_s("%d", &n);
	}
	if (n > 0 && n < 10000) {
		printf("%d�Ѿ����\n", n);
	}
}