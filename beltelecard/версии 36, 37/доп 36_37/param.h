
���������� ���� ID 26 ������� 0..935
������������� �������� ���� � �������� -���� �����1.xlc
#define defSREZMON  13
// ��������� ������ ����� ��� ������
typedef struct{
		ulong		DATETIME;
		long double     Energy[6];   // ������� �� 6-�� ����������
		long double     Power[6];    // ������������ ������� �������� �� ����� ����������   
                uint        CRC;
} _srez;