// Kozlovets Illia 123

#include <iostream>

int main()
{
    {
        const char CONST1 = '1';

        char chVar1;

        chVar1 = 'p';

        char chVar2 = '�';

        const char CONST2 = 0x7a;

        char chVar3;//9

        chVar3 = 0x3b;//1

        char chVar4 = 0x9;//z
    }

    {
        //����� ������ ���� int, float, unsigned short.

        int nA;

        float fltB;

        unsigned short wC;

        //���������� ������, �� ������� � �.1 ������ ��������

        nA = 381;

        fltB = 954.67;

        wC = 6429;

        //����� ������ ���� double, int, char.

        double dblD;

        int nE;

        char chF;

        //���������� ������ 
        // �� ��������� �������� ���������� ����

        dblD = nA;

        nE = fltB;

        chF = wC;

        //�� ��������� ������ ����������

        dblD = (double)nA;

        nE = (int)fltB;

        chF = (char)wC;

        //� ������� ������ ��������

        double* pdblD;

        void* pV;

        pV = &nA;

        pdblD = (double*)pV;

        dblD = *pdblD;

        int* pnE;

        pV = &fltB;

        pnE = (int*)pV;

        nE = *pnE;

        char* pchF;

        pV = &wC;

        pchF = (char*)pV;

        chF = *pchF;
    }
}
