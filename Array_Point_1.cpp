#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct student//�����Ǹ�����
{
    int sid;
    char name[20];
    int age;
};
int main(void)
{
    struct student st={100,"zhang",20};
    printf("%d %s %d\n",st.sid,st.name,st.age);
    st.sid=00;
    //st.name="lisi";//error
    strcpy(st.name,"list");
    st.age=22;
    printf("%d %s %d\n",st.sid,st.name,st.age);
    return 0;
    system("pause");
}
