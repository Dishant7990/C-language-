// Neso video no. 145 C programming

#include<stdio.h>
void fun1(char *s1, char *s2){
    char *temp;
    temp = s1;
    s1 = s2;
    s2 = temp;
}
void fun2(char **s1, char **s2){
    char *temp;
    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int main(){
    char *str1 = "hi";
    char *str2 = "bye";
    fun1(str1, str2);
    printf("%s ,%s  ",str1,str2);
    fun2(&str1, &str2);
    printf("%s ,%s",str1,str2);
return 0;
}