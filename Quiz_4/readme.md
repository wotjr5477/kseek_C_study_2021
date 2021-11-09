211104 THU

# intro
구조체(struct), 헤더(~.h), 파일 입출력(읽기/쓰기)

# Quiz 4 : 파일을 열어서 open


## Q4-1 : 파일 일기 > 쓰기모드로 열고(O_WRONLY) 없으면 생성(O_CREAT), 있으면 내용 삭제 후 생성(O_TRUNC)
struct 사용해서 
for loop 10번 - 나이 입력
저장된 파일을 open-read

211108 MON
## Q4-2 : 여러가지 정보 수정, 같은 항목
./fr2 0=15, 3=18
	> before : 나이
	> after : 나이

211109 TUE
## Q4-3 : 여러가지 정보 수정, 다른 항목
./fr3 "0a=대전시 동구 오정동" "15p=000-0000-0000" >>> 0번째 주소('a'ddress), 15번째 전화번호('p'hone_number)
./fr3 "4e=winter@naver.com" >>> 4번째 이메일('e'-mail)
	> before : 나이, 전화번호, e-mail, 주소
	> after : 나이, 전화번호, e-mail, 주소

## Q4-4 : 연락처 관리 프로그램
start open >> 리스트 : 번호, 이름, e-mail, phone_number, ... 
	ex)	
		> 0 반준석 aaa@bbb.com 123-4567
		> 1 정민지 bbb@ccc.com 456-7890
		> ...
		> 14 @@ @@ @@ // 한페이지 15명
		> ===================
		> command >_(입력*)
		(*: 엔터 = 다음 페이지, ls = 첫 페이지, 번호 = 해당 번호에 해당하는 사람 상세 정보, n = 새로운 정보 입력받기)
	
상세정보 페이지 >> 이름, 나이, 자산?, 메일, 장/단점, ...
	ex)
		> 이름: 반준석
		> 나이: 26
		> 자산: 1349억
		> e-mai: wotjr5477@naver.com
		> 장점(strength): @@
		> 단점(weakness): ##
		> =======================
		> command >_ (입력**)
		(**: ls = 첫 페이지, .. = 이전 페이지)
