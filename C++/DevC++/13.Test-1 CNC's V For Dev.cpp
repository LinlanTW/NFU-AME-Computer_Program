// �Ф��O��JA�BB�BC�T�Ӿ��x���D�b��t(N)�B�M�㪽�|(D)�ú�X���d�t��(V)�A�����X���Ӿ��x���d�t�׳̧֡A
// ���Ӥ��d�t�׳̺C�CV=(3.14*D*N)/1000 (��J�����ƭȥѱЮv���w)�C30%
#include <stdio.h>
int main()
{
    int an, ad, bn, bd, cn, cd; // �w�q�U�ؾ��x����tN ���|D �ĥ�abc�M�n�D���ܼƭȰ��O����
    float av, bv, cv;           // �w�qabc��v���p���I
    printf("�п�J���xA���D�b��t �M�㪽�|(�����)\n");
    scanf("%d %d", &an, &ad); // ����A����t�B���|
    printf("�п�J���xB���D�b��t �M�㪽�|(�����)\n");
    scanf("%d %d", &bn, &bd);
    printf("�п�J���xC���D�b��t �M�㪽�|(�����)\n");
    scanf("%d %d", &cn, &cd);
    // �p�⦡
    av = (3.14 * an * ad) / 1000; // �a�J�D�ش��Ѫ��B�⦡
    bv = (3.14 * bn * bd) / 1000;
    cv = (3.14 * cn * cd) / 1000;
    // �P�O��
    if (av > bv && bv > cv) // av>bv>cv
    {
        printf("�̧֬�A=%f�A�̺C��C=%f\n", av, cv); // ��XA�̧֩M��C�̺C�M��
    }
    else if (av > cv && cv > bv) // av>cv>bv
    {
        printf("�̧֬�A=%f�A�̺C��B=%f\n", av, bv); // ��XA�̧֩M��B�̺C�M��
    }
    else if (bv > av && av > cv) // bv>av>cv
    {
        printf("�̧֬�B=%f�A�̺C��C=%f\n", bv, cv); // ��XB�̧֩M��C�̺C�M��
    }
    else if (bv > cv && cv > av) // bv>cv>av
    {
        printf("�̧֬�B=%f�A�̺C��A=%f\n", bv, av); // ��XB�̧֩M��A�̺C�M��
    }
    else if (cv > av && av > bv) // cv>av>bv
    {
        printf("�̧֬�C=%f�A�̺C��B=%f\n", cv, bv); // ��XC�̧֩M��B�̺C�M��
    }
    else if (cv > bv && bv > av) // cv>bv>av
    {
        printf("�̧֬�C=%f�A�̺C��A=%f\n", cv, av); // ��XC�̧֩M��A�̺C�M��
    }
}