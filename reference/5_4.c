/* 외부 변수 count를 재 선언. 외부 변수 count를 참조한다는 의미 */
extern int count;
void func(void)
{
   /* 다른 파일에서 선언한 외부 변수 count 사용 */
   count++;
}