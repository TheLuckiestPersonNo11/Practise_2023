#include <stdio.h>
#include <locale.h>
#include <string.h>
int main() {
	setlocale(LC_ALL, "Ukr");
	int y, m, d;
	double b, r, s;
	printf("������ �� ���������: ");
	scanf_s("%d", &y);
	if (y < 2021) {
		printf("\n������� �� ���������\n");
		return 0;
	}
	if (y > 2022) {
		printf("\n������� �� ���������\n");
		return 0;
	}
	if (y == 2021) {
		printf("\nг� ���������: 2021\n");
	}
	if (y == 2022) {
		printf("\nг� ���������: 2022\n");
	}
	printf("\n������ ����� ���������: ");
	scanf_s("%d", &m);
	if (m < 1) {
		printf("\n������� ����� ���������\n");
		return 0;
	}
	if (m > 12) {
		printf("\n������� ����� ���������\n");
		return 0;
	}
	if (m == 1) {
		printf("\n̳���� ���������: �����\n");
		printf("\n������ ���� ���������: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d > 31) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d >= 1 && d <= 31) {
			printf("\n���� ���������: %d/0%d/%d", d, m, y);
			printf("\n");
		}
	}
	if (m == 2) {
		printf("\n̳���� ���������: �����\n");
		printf("\n������ ���� ���������: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d > 28) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d >= 1 && d <= 28) {
			printf("\n���� ���������: %d/0%d/%d", d, m, y);
			printf("\n");
		}
	}
	if (m == 3) {
		printf("\n̳���� ���������: ��������\n");
		printf("\n������ ���� ���������: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d > 31) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d >= 1 && d <= 31) {
			printf("\n���� ���������: %d/0%d/%d", d, m, y);
			printf("\n");
		}
	}
	if (m == 4) {
		printf("\n̳���� ���������: ������\n");
		printf("\n������ ���� ���������: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d > 30) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d >= 1 && d <= 30) {
			printf("\n���� ���������: %d/0%d/%d", d, m, y);
			printf("\n");
		}
	}
	if (m == 5) {
		printf("\n̳���� ���������: �������\n");
		printf("\n������ ���� ���������: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d > 31) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d >= 1 && d <= 31) {
			printf("\n���� ���������: %d/0%d/%d", d, m, y);
			printf("\n");
		}
	}
	if (m == 6) {
		printf("\n̳���� ���������: �������\n");
		printf("\n������ ���� ���������: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d > 30) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d >= 1 && d <= 30) {
			printf("\n���� ���������: %d/0%d/%d", d, m, y);
			printf("\n");
		}
	}
	if (m == 7) {
		printf("\n̳���� ���������: ������\n");
		printf("\n������ ���� ���������: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d > 31) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d >= 1 && d <= 31) {
			printf("\n���� ���������: %d/0%d/%d", d, m, y);
			printf("\n");
		}
	}
	if (m == 8) {
		printf("\n̳���� ���������: �������\n");
		printf("\n������ ���� ���������: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d > 31) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d >= 1 && d <= 31) {
			printf("\n���� ���������: %d/0%d/%d", d, m, y);
			printf("\n");
		}
	}
	if (m == 9) {
		printf("\n̳���� ���������: ��������\n");
		printf("\n������ ���� ���������: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d > 30) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d >= 1 && d <= 30) {
			printf("\n���� ���������: %d/0%d/%d", d, m, y);
			printf("\n");
		}
	}
	if (m == 10) {
		printf("\n̳���� ���������: �������\n");
		printf("\n������ ���� ���������: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d > 31) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d >= 1 && d <= 31) {
			printf("\n���� ���������: %d/%d/%d", d, m, y);
			printf("\n");
		}
	}
	if (m == 11) {
		printf("\n̳���� ���������: ��������\n");
		printf("\n������ ���� ���������: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d > 30) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d >= 1 && d <= 30) {
			printf("\n���� ���������: %d/%d/%d", d, m, y);
			printf("\n");
		}
	}
	if (m == 12) {
		printf("\n̳���� ���������: �������\n");
		printf("\n������ ���� ���������: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d > 31) {
			printf("\n������� ���� ���������\n");
			return 0;
		}
		if (d >= 1 && d <= 31) {
			printf("\n���� ���������: %d/%d/%d", d, m, y);
			printf("\n");
		}
	}
	printf("\n������ ������ � $: ");
	scanf_s("%lf", &r);
	if (r < 300) {
		printf("\n������ ������\n");
		return 0;
	}
	if (r > 900) {
		printf("\n������ ������\n");
		return 0;
	}
	if (r >= 300 && r <= 900) {
		printf("\nC�����: $%lg", r);
		printf("\n");
	}
	printf("\n������ ������ �������� ����� � $: ");
	scanf_s("%lf", &b);
	if (b < 300) {
		printf("\n������ ������ �������� �����\n");
		return 0;
	}
	if (b > 900) {
		printf("\n������ ������ �������� �����\n");
		return 0;
	}
	if (b >= 300 && b <= 900) {
		printf("\n������ �������� �����: $%lg", b);
		printf("\n");
	}
	s = b * r;
	printf("\n�������� �������� �����: $%lg", s);
	printf("\n");
	const char* A = "��������� ������ ��������";
	const char* B = "������ ������ ��������";
	const char* C = "���������� ������ ��������";
	const char* D = "������ ����� �������������";
	const char* E = "�������� ������ �����������";
	const char* F = "��������� ���� ��������";
	const char* G = "����� ����� ����������";
	const char* H = "����� ������ �������������";
	const char* I = "���������� ����� ���������";
	const char* J = "��������� ����� ����������";
	const char* K = "�������� ���� ���������";
	const char* L = "����������� ������� ���'������";
	const char* M = "���������� ������� ��������";
	const char* N = "������� ���� ����������";
	const char* O = "˳����� ������ ���������";
	const char* P = "����������� ���� ���������";
	const char* R = "������ ����� ���������";
	const char* S = "����������� ������ ��������";
	const char* T = "����������� ������ ��������";
	const char* U = "������� ���� ��������";
	const char* V = "��������� ������ ��������";
	const char* W = "������� ���� ��������";
	const char* X = "��������� ����� ����������";
	const char* Y = "�������� ������ �������������";
	if (y == 2021) {
		if (m == 1) {
			printf("\n���������� ����������� ����\n");
			return 0;
		}
		if (m == 2) {
			if (s >= 90000 && s <= 270000) {
				printf("\nϲ� ���������� �����������:\n");
				printf(A);
				printf("\n");
				printf(B);
			}
		}
		if (m > 2 && m < 8) {
			printf("\n���������� ����������� ����\n");
			return 0;
		}
	}
	if (y == 2021) {
		if (m == 1) {
			printf("\n���������� ����������� ����\n");
			return 0;
		}
		if (m == 2) {
			if (s >= 270000 && s <= 540000) {
				printf("\nϲ� ���������� �����������:\n");
				printf(C);
				printf("\n");
				printf(D);
			}
		}
		if (m > 2 && m < 8) {
			printf("\n���������� ����������� ����\n");
			return 0;
		}
	}
	if (y == 2021) {
		if (m == 1) {
			printf("\n���������� ����������� ����\n");
			return 0;
		}
		if (m == 2) {
			if (s >= 540000 && s <= 810000) {
				printf("\nϲ� ���������� �����������:\n");
				printf(E);
				printf("\n");
				printf(F);
			}
		}
		if (m > 2 && m < 8) {
			printf("\n���������� ����������� ����\n");
			return 0;
		}
	}
	if (y == 2021) {
		if (m == 8) {
			if (s >= 90000 && s <= 270000) {
				printf("\nϲ� ���������� �����������:\n");
				printf(G);
				printf("\n");
				printf(H);
			}
		}
		if (m > 8 && m < 12) {
			printf("\n���������� ����������� ����\n");
			return 0;
		}
	}
	if (y == 2021) {
		if (m == 8) {
			if (s >= 270000 && s <= 540000) {
				printf("\nϲ� ���������� �����������:\n");
				printf(I);
				printf("\n");
				printf(J);
			}
		}
		if (m > 8 && m < 12) {
			printf("\n���������� ����������� ����\n");
			return 0;
		}
	}
	if (y == 2021) {
		if (m == 8) {
			if (s >= 540000 && s <= 810000) {
				printf("\nϲ� ���������� �����������:\n");
				printf(K);
				printf("\n");
				printf(L);
			}
		}
		if (m > 8 && m < 12) {
			printf("\n���������� ����������� ����\n");
			return 0;
		}
	}
	if (y == 2022) {
		if (m == 1) {
			printf("\n���������� ����������� ����\n");
			return 0;
		}
		if (m == 2) {
			if (s >= 90000 && s <= 270000) {
				printf("\nϲ� ���������� �����������:\n");
				printf(M);
				printf("\n");
				printf(N);
			}
		}
		if (m > 2 && m < 8) {
			printf("\n���������� ����������� ����\n");
			return 0;
		}
	}
	if (y == 2022) {
		if (m == 1) {
			printf("\n���������� ����������� ����\n");
			return 0;
		}
		if (m == 2) {
			if (s >= 270000 && s <= 540000) {
				printf("\nϲ� ���������� �����������:\n");
				printf(O);
				printf("\n");
				printf(P);
			}
		}
		if (m > 2 && m < 8) {
			printf("\n���������� ����������� ����\n");
			return 0;
		}
	}
	if (y == 2022) {
		if (m == 1) {
			printf("\n���������� ����������� ����\n");
			return 0;
		}
		if (m == 2) {
			if (s >= 540000 && s <= 810000) {
				printf("\nϲ� ���������� �����������:\n");
				printf(R);
				printf("\n");
				printf(S);
			}
		}
		if (m > 2 && m < 8) {
			printf("\n���������� ����������� ����\n");
			return 0;
		}
	}
	if (y == 2022) {
		if (m == 8) {
			if (s >= 90000 && s <= 270000) {
				printf("\nϲ� ���������� �����������:\n");
				printf(T);
				printf("\n");
				printf(U);
			}
		}
		if (m > 8 && m < 12) {
			printf("\n���������� ����������� ����\n");
			return 0;
		}
	}
	if (y == 2022) {
		if (m == 8) {
			if (s >= 270000 && s <= 540000) {
				printf("\nϲ� ���������� �����������:\n");
				printf(V);
				printf("\n");
				printf(W);
			}
		}
		if (m > 8 && m < 12) {
			printf("\n���������� ����������� ����\n");
			return 0;
		}
	}
	if (y == 2022) {
		if (m == 8) {
			if (s >= 540000 && s <= 810000) {
				printf("\nϲ� ���������� �����������:\n");
				printf(X);
				printf("\n");
				printf(Y);
			}
		}
		if (m > 8 && m < 12) {
			printf("\n���������� ����������� ����\n");
			return 0;
		}
	}
	printf("\n");
}