// 1.��J�@�ӵ{���A�i�p��d�����A�Ф��O�p�⦭�B���B�ߪ��d�����q(�ѱЮv���w)
// �p��d�������`�q�A�M���ܤU�C�B�ʶ��ءA�̫�p����ӥd�����q���ɶ��C
// ��a30��������518�d
// �]�B60��������352�d
#include <stdio.h>
int main()
{
    // swim 30min 518ca
    // run 60min 352ca
    int mor, lun, dinn, all;
    float swim, run;
    printf("�п�J���\�Y�F�h�֥d����\n");
    scanf("%d", &mor);
    printf("�п�J���\�Y�F�h�֥d����\n");
    scanf("%d", &lun);
    printf("�п�J���\�Y�F�h�֥d����\n");
    scanf("%d", &dinn);
    all = mor + lun + dinn;
    swim = all / 518.0 * 30.0;
    run = all / 352.0 * 60.0;
    printf("���\�Y�F%d�d�B���\�Y�F%d�d�B���\�Y�F%d�d�A�ҥH�d�����q=%d+%d+%d=%d�d�A��a�ݭn��%0.2f�����B�]�B�ݭn��%0.2f�����C\n", mor, lun, dinn, mor, lun, dinn, all, swim, run);
}