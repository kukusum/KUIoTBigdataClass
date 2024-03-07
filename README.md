# KUIoTBigdataClass
C/C++, Database, Arduino, Raspberry Pi, IoT

---
## 2024-02-22
---

- 개요.
- github 가입, 저장소생성.
- git 설치 (sudo 권한 추가) 
- 우분투 한글설정
- vscode 설치
- github 스테이징과 커밋에대한 설명.
- mySQL 설치및 입력 따라해보기.
- 
- 2장 데이터베이스 모델 설명과 진행.
- 윈도우 DBMS에 우분투에서 접근.
    - 윈도우 DBMS에 외부 IP접근 가능한 USER 생성. 
    - 윈도우 방화벽에 3306포트 규칙생성.
    - 윈도우 DBMS에 데이터 저장하고 우분투에서 데이터 확인가능.
- 우분투 DBMS에 윈도우에서 접근.
    - 우분투 DBMS에 외부 IP접근 가능한 USER 생성.
    - 우분투 방화벽에 전체포트 열기.(개별포트 가능하지만 나중에 추가학습예정)
    - 우분투 DBMS에 데이터 저장하고 우분투에서 데이터 확인가능.

--- 
## 2024-02-29
---

set global validate_password.policy=LOW;
create user 'madang'@'%' identified by 'madang';
grant all privileges on *.* to 'madang'@'%';
flush privileges;
sudo nano /etc/mysql/mysql.conf.d/mysqld.cnf
sudo ufw allow mysql


- 빌드 과정 설명
    - make cmake for linux
    - 전처리, 어셈블리, 바이너리, 링크
    - make 실습해보기
    - 기본문법, 여러개명령어 등록, 연속실행, 생략가능명령어

    touch, make, make clean 명령어를 활용하여 실행하는방법 따라해보기
    github와 vscode 스테이징과 커밋하는방법 익히기
    - 작성
    - mysql 이용해서 order customer 검색순서 변경해보기 
    - mysql에서 join에 대한 정의 및 설명
        - A라는 테이블과 B라는 테이블이 연결되어있는것 Fk ?(?)
        - join 은 테이블과 테이블의 내용을 합쳐 하나의 컬럼을 만듬.
        - 동등조인?
        - 예를들면, from A, B where PK = FK full join
        - defualt는 outer join, inner join (아닐수도있음.)
        - 왼쪽에 붙이고싶으면 left join.
        - 오른쪽에 붙이고싶으면 right join.
    - null에 대한 설명
        - full join 은 전체열이 다나온다.
        - inner join 은 null 값이 다 사라진다.
        - A에만 null 값이 포함되지 않게 하는경우는 left outer join.
        - B에만 null 값을 포함하지 않게 하려면 right outer join
    - 코딩 작성 예시
    - 프로그래머스 연습 (과일로 만든 아이스크림 고르기)
    - SELECT FIRST_HALF.FLAVOR
        FROM FIRST_HALF
        LEFT JOIN ICECREAM_INFO ON FIRST_HALF.FLAVOR = ICECREAM_INFO.FLAVOR
        WHERE FIRST_HALF.TOTAL_ORDER > 3000 AND ICECREAM_INFO.INGREDIENT_TYPE = 'FRUIT_BASED'
        ORDER BY FIRST_HALF.TOTAL_ORDER DESC;

    - SELECT FIRST_HALF.FLAVOR
        FROM FIRST_HALF
        JOIN ICECREAM_INFO ON FIRST_HALF.FLAVOR = ICECREAM_INFO.FLAVOR
        WHERE FIRST_HALF.TOTAL_ORDER > 3000 
        AND ICECREAM_INFO.INGREDIENT_TYPE = 'fruit_based'
        ORDER BY FIRST_HALF.TOTAL_ORDER DESC;

    - mysql 숫자함수, 문자함수, 날짜 및 시간함수 활용해서 쿼리문작성해보기.

        - 숫자 함수:
            - ABS(): 절대값을 반환합니다.
            - ROUND(): 반올림한 값을 반환합니다.
            - CEILING(): 올림한 값을 반환합니다.
            - FLOOR(): 내림한 값을 반환합니다.
            - RAND(): 0과 1 사이의 무작위 숫자를 반환합니다.
        
        - 문자열 함수:
            - CONCAT(): 문자열을 연결합니다.
            - LENGTH(): 문자열의 길이를 반환합니다.
            - SUBSTRING(): 문자열의 일부분을 반환합니다.
            - UPPER(): 문자열을 대문자로 변환합니다.
            - LOWER(): 문자열을 소문자로 변환합니다.
            - TRIM(): 문자열의 앞뒤 공백을 제거합니다.

        - 날짜 및 시간 함수:
            - NOW(): 현재 날짜와 시간을 반환합니다.
            - DATE_FORMAT(): 날짜를 원하는 형식으로 변환합니다.
            - DATE_ADD(): 날짜에 일정 기간을 추가합니다.
            - DATEDIFF(): 두 날짜 간의 일 수 차이를 계산합니다.
            - DAYOFWEEK(): 주어진 날짜의 요일을 반환합니다.

            - 프로그래머스 C 언어: 3문제 풀기. 프로그래머스 SQL 언어: ‘인기 있는 아이스크림’ ‘3월에 태어난 여성 회원 목록’ ‘조건에 맞는 도서 리스트’ ‘흉부 외과 또는 일반외과’

---
## 2024-03-04
---
- 배열 초기화(initialization)
    - int len = 100; //초기화
    - int len;
    - len = 100;
- 배열초기화에대해서 좀더 알아보기.
    - . 현재디렉토리
    - .. 상위디렉토리
    - | 의미?

- 라이브러리함수에대한 설명과 사용법
    - printf, scanf, srand, rand, time 등등
    - rand를 활용해서 주사위랜덤돌리기
    - time을 활용해서 시간에따른 랜덤성 부여하기

- 중첩 for 문 (nested for loop)
    - nested for loop 활용하기
    - selectionSorting, bubbleSorting 설명듣고 이해하기

- 지금까지 사용한 방법 (배열 변수)
    - 배열
    - 변수
- 유닉스, 리눅스 키워드 커맨드 및 프로그램:

--- 
ls: 디렉토리 내용을 나열하는 명령
cp: 파일 복사하는 명령
mv: 파일 이동하는 명령
rm: 파일이나 디렉토리를 삭제하는 명령
mkdir: 디렉토리를 생성하는 명령
man: 매뉴얼 페이지를 표시하는 명령
시스템 호출 및 함수:

open: 파일을 열거나 생성하는 시스템 호출
read: 파일에서 데이터를 읽는 시스템 호출
write: 데이터를 파일에 쓰는 시스템 호출
malloc: 동적 메모리 할당 함수
printf: 형식화된 출력을 수행하는 함수
scanf: 형식화된 입력을 수행하는 함수
파일 형식 및 설정 파일:

passwd: 사용자 계정 정보를 저장하는 파일
fstab: 파일 시스템 테이블 설정 파일
hosts: 호스트 이름과 IP 주소를 매핑하는 파일
crontab: cron 작업을 설정하는 파일
ssh_config: SSH 클라이언트 설정 파일
기타:

signal: 시그널에 대한 정보
regex: 정규 표현식에 대한 정보
terminfo: 터미널 정보에 대한 정보
---
- 표준라이브러리 헤더파일 종류
입출력 관련 헤더 파일:

<stdio.h>: 표준 입출력 함수와 관련된 함수들을 제공합니다. (printf(), scanf(), fopen(), 등)
<stdlib.h>: 일반적인 유틸리티 함수들을 제공합니다. (malloc(), free(), atoi(), 등)
문자 및 문자열 처리 헤더 파일:

<ctype.h>: 문자의 종류에 관련된 함수들을 제공합니다. (isalpha(), isdigit(), 등)
<string.h>: 문자열 관련 함수들을 제공합니다. (strlen(), strcpy(), strcmp(), 등)
수학 관련 헤더 파일:

<math.h>: 수학 함수들을 제공합니다. (sin(), cos(), sqrt(), 등)
난수 생성 관련 헤더 파일:

<stdlib.h>: 난수 생성 함수인 rand()와 srand()를 제공합니다.
시간 관련 헤더 파일:

<time.h>: 시간과 관련된 함수들을 제공합니다. (time(), ctime(), 등)
시스템 및 환경 관련 헤더 파일:

<unistd.h>: 유닉스 시스템 콜과 관련된 함수들을 제공합니다. (fork(), exec(), 등)
<sys/types.h>: 시스템에 종속적인 데이터 타입들을 정의합니다.
<sys/stat.h>: 파일의 상태를 나타내는 매크로들을 정의합니다.
프로세스 제어 관련 헤더 파일:

<signal.h>: 시그널 처리 함수들을 정의합니다.
네트워킹 관련 헤더 파일:

<netinet/in.h>: 네트워크 프로그래밍에 사용되는 데이터 타입들을 정의합니다.
---

- <stdio.h> 헤더 파일에는 다양한 함수가 포함되어 있습니다. 일반적으로 이 헤더 파일에는 표준 입출력 함수와 관련된 함수들이 포함되어 있습니다. 아래는 <stdio.h>에 포함된 일부 함수들입니다:

입출력 함수:

printf(): 형식화된 출력을 수행합니다.
scanf(): 형식화된 입력을 수행합니다.
putchar(): 문자를 출력합니다.
getchar(): 문자를 입력 받습니다.
puts(): 문자열을 출력합니다.
gets(): 문자열을 입력 받습니다.
fopen(): 파일을 엽니다.
fclose(): 파일을 닫습니다.
fread(): 파일에서 데이터를 읽습니다.
fwrite(): 파일에 데이터를 씁니다.
fgets(): 파일에서 문자열을 읽습니다.
fputs(): 파일에 문자열을 씁니다.
버퍼 관련 함수:

setbuf(): 입출력 버퍼를 설정합니다.
setvbuf(): 입출력 버퍼를 설정합니다.
fflush(): 버퍼를 비웁니다.
기타 함수:

remove(): 파일을 삭제합니다.
rename(): 파일의 이름을 변경합니다.
tmpfile(): 임시 파일을 생성합니다.
tmpnam(): 임시 파일의 이름을 생성합니다.
이 외에도 <stdio.h>에는 파일 처리, 형식화된 입출력, 버퍼 관리, 파일 시스템 관련 함수 등 다양한 함수들이 정의되어 있습니다. 이 함수들은 C 프로그래밍에서 입출력 작업을 수행하는 데 사용됩니다.

- 반복문
    - for loop
    - while
    - do while

- 표준 라이브러리 헤더 파일 stdio, stdlib, time과 함수 for loop, do-while loop, if-else statement을 이용해서 간단한 숫자 야구 게임 코딩해보기(구글과 챗gpt 도움받음..)

- 로또 1~45 까지의 숫자에서 6자리 1~45에서 +1 추첨하는 프로그램 코딩해보기.... 위의 야구게임코딩 참조해서 로또자동추첨 코딩해보기


---
## 2024-03-05
---

- 다차원배열 (array of array)
    - int m[3][4];(3차원, 4차원...)
    - m배열 아래로 0, 1, 2 m[0], m[1], m[2]
    - m이라는 배열에 엘리먼트는 사이즈가 4인 인트형 배열??
    - 엘리먼트는 m[0][0]<-- 엘리먼트 배열 우측으로 0부터
    - ...
- 포인터 (pointer)
    - 포인터는 변수이다.
    - 포인터는 주소값 저장 용도로 쓰이는 변수이다.
    - 포인터상수는 주소값이다.
    - 포인터변수는 잘못된 뜻임(포인터자체가 변수임)
    - 포인터와 관련된 연산자
    - 포인터는 반드시 대상을 가르키고, (애스터리스크 연산)역참조 해야한다.
        - * asterisk(애스터리스크)
            - * 뒤에는 포인터가 온다.
            - 포인터가 가르키는 대상을 구해주세요
            - 다항연산

        - &(앰퍼샌드)
            - & 뒤에는 변수를 사용한다.
            - 변수의 시작 주소값을 구해주세요
            - 단항연산 
            - 왜 scanf 에서 변수의 주소값을 저장했을까?

    - int * (포인터) vs char * (포인터)
        - int a = 0x12345678; (16진수)
        - char *p;
        - p = &a; (&앞에 (char)입력 해줘야한다.)
        - printf("%?", *p);
            - 위값은 int형쓰면 12345678 char쓰면 12
            - int형 포인터는 int형자료 char형 포인터는 char형자료
            - 왜 포인트 앞에 타입을 쓰는지 이유...?

        - int a; 변수
        - int *p; 변수
        - a = 100; 상수
        - p = &a;
        - *p = 200; 변수
        - printf("%d\n", a);상수

        - 변수의 뜻
            - 프로그램의 시작과 끝에서 변하는 수
            - 메모리공간 추가로 필요
            - 할당된 공간의 주소값으로저장
        - 상수의 뜻
            - 프로그램 시작과 끝에서 변하지 않는 수
            - 메모리공간 필요 없음
            - ...?
    - 주소저장할때 용랑
        - 32 주소체계와 8 주소체계가 있음.
        - char 포인터는(32bit) 4바이트와 리눅스(64bit)는 8바이트

- 단일포인터
- 다중포인터
- 이중포인터 (단일포인터를 가르키는 용도로 사용한다.)
    - 단일포인터를 엘리먼트로 가지는 배열을 가르킬때 이중포인터를 사용한다.
        - int a;
        - int *pa;
        - int **ppa;
        - a = 100;
        - pa = &a;
        - ppa = &pa;
        - **ppa = 200;
        - printf("%d", a);
            
            - pp == &pa (int **)
            - *ppa == pa == &a (int *)
            - *(*ppa) == *pa == a (int)
            - 
            - 
- 삼중포인터
- ...백중포인터..

- 함수포인터
    - 함수를 가르킬때 사용한다..?
    
    int add(int a, int b)
    {
        return a + b;
    }
    
    int substract(int a, int b)
    {
        return a - b;

    }
        int (*fp)(int, int); // 함수포인터
        fp = &add;
        int re = (*fp)(4, 3); // 7
        fp = &substract;
        re = (*fp)(4, 3); // 1

- void* (보이드포인터)
    - 포괄형포인터 (generic point)
    - 순수하게 주소값을 저장하는 용도로 사용한다.
        - int a = 100;      double & = 3, 4;
        - void *p;          void *p;
        - p = &a;           p = &d;
    - 모든 주소값 타입을 다 받을수 있다.
    - 역참조 불가능하다.
    - 가르키는 대상의 포인트타입으로 타입캐스팅하고 역참조...?

- pointer & array

    - int nums[5] = {1, 2, 3, 4, 5};
    - int *p;
    - p = nums; (?)
    - 포인터와 배열의 관계
        1. 배열이름이 식에서 사용되면 첫번째 엘리먼트의 시작주소를 의미한다
        2. 배열은 포인터식으로 포인터는 배열식으로 (반대도 가능)
            - . //한 주소당 4바이트씩 사용한다. (???)
            - . p = p + 1; == ++p;
        4. 포인터의 더하기1은 1바이트값을 더함?
        5. char형 포인터 double형 포인터에 +1은 각각 값이 다름
        6. 포인터의 +1은 다음 엘리먼트를 가르킨다. ***
        7. 포인터에 더하는 값은 배열에서 사용하는 INDEX !!
        8. +1은 주소값에 1을 더하는게 아니고 다음 엘리먼트
            
            int nums[5] = {1, 2, 3, 4, 5};
            int nums2[5];

            nums2 = nums; (x)
            &nums2[0] &nums[0] (x)

            for(i = 0; i < s; ++i>) {
                nums2[i] = nums[i];
            }
            
            ---
            int nums1[5] = {1, 2, 3, 4, 5};
            int nums2[5] = {1, 2, 3, 4, 5};
                if(nums1 = nums2) {
                    &nums[0] &nums2[0]
                }
                for(i = 0; i < 5; ++i>) {
                    if(nums[j] != nums[i])
                        break (?)
                }

               1. 포인터와 배열의 관계
                  
                    p == nums
                    p + 0 == &nums[0]
                    p + 1 == &nums[1]
                    p + 2 == &nums[2]
                    ...
                    p + i == &nums[i]
                    
                    *(p+0) == nums[0]
                    *(p+1) == nums[1]
                    ...
                    *(p+i) == nums[i]

                2. 배열은 포인터식으로, 포인터는 배열식으로
                
                    *(p+i) == nums[i]
                    
                    *(nums + i) == nums[i]
                    *(p+i) == p[i]

- 함수 (function)

    - 궁극적으로 반복되는 코드를 줄이기 위해서.
    - 프로시저 서브루틴 + 인자전달과 결과값이 추가된것을 함수라고한다.
    - 사용자 정의 연산(필요한 연산은 만들어서 사용한다)
    - (유저 디파인드 오퍼레이터)라이브러리함수
    - ex) power(2, 3) == 2^3, Factorial(5) == 5! ??

- 데니스리치의 그림..??
- 주소값 NULL 은 0이라는 의미, 아무것도 가르키지 않는다.
- 시스템 종류 Big-endian, Little-endian 으로 나뉜다.

---
## 2024-03-06
---
- 프로세스
    1. code 영역 : 프로그램 시작과 끝까지
    2. data 영역 : 프로그램 시작과 끝까지.
    3. stack 영역
        - 함수와 관련됨.
        - 마지막에 stack 된 함수부터 순서대로 사라진다.
        - 변수값복사와 주소값복사에 따른 사용방법
        - 지역변수 지역배열, 전역변수 전역배열
        - 스태틱지역, 스태틱전역...
    4. heap 영역
        - size5 pArr....???
        - free 하면 할당공간 사라짐....
        - malloc과 free를 사용...
        - 사용자정의함수 ? 
        
- 인자전달
    - 
    - 
        - 
        - 

- 변수
    - 전역변수(global)함수 블록 밖에선언해주고 모든함수가 접근할 수 있다.
        - life cycle 프로그램 시작과 끝까지 프로그램이 종료되면 없어짐.
        - 접근성 : 모든함수
        - 초기화 가능...
        - 장점 : 함수 인자전달에 오버헤드를 줄일수있다
        - 단점 : 스파게티코드
        - 스태틱지역 :
        - 스태틱전역 : 
    - 지역변수(local)함수 블록 안에서 사용하는 변수
        - life cycle 함수안에서 시작과 끝까지..
        - 접근성 : 함수만
        - 초기화 불가능... 
        - 장점 : 
        - 단점 : 
    - 스태틱전역변수
        - .c타입안에 함수만...
        - 초기화가능..
    - 스태틱지역변수
        - 특정함수만쓰는 전역변수...
        - 초기화불가능
    - 전역변수는 왠만하면 사용하지않는다(...)
    - 인자전달하는것을 잘 할줄 알면 지역변수를 쓰면된다.

- 스왑(swap)
    - 함수의 인자로 포인터를 쓰는 경우
        1. 호출하는 쪽에있는 변수값을 호출당하는 쪽에서 바꾸어주어야할때 사용한다.
        2. 배열을 인자로 전달할때 첫번째 엘리먼트의 시작 주소와 사이즈를 전달한다.
        3. 
        4. 
        5. 

- 함수
    - 함수를 호출하려면 함수룰 선언 또는 정의가 있어야한다.
    - 같은파일 혹은 다른파일에 있을수도 있다.
    - 내가만든헤더파일을 사용할때는 ""를사용하고 라이브러리는 <>를 사용한다
    - 함수 정의
        - 
        - 
    - 함수 선언
        - 
        - 

- 구조체

- 문자열

- 빌드과정
    1. 전처리(Preprocessing):
        소스 코드에 있는 전처리 지시문(Preprocessor Directives)을 처리합니다. 주로 #include, #define, #ifdef 등의 지시문을 처리합니다.
        전처리 단계는 컴파일러 이전에 이루어집니다.
        전처리된 코드는 일반적으로 .i 확장자를 가진 파일에 저장됩니다.
    2. 컴파일(Compilation):
        전처리된 소스 코드를 기계어로 번역합니다.
        이 단계에서는 소스 코드의 문법을 검사하고 기계어로 번역합니다.
        컴파일된 코드는 일반적으로 .o 또는 .obj 확장자를 가진 오브젝트 파일에 저장됩니다.
    3. 링킹(Linking):
        오브젝트 파일과 필요한 라이브러리 파일들을 결합하여 실행 파일을 생성합니다.
        여러 오브젝트 파일과 라이브러리 파일이 상호 의존하는 경우, 링커는 이러한 의존성을 해결하고 실행 파일을 생성합니다.
        실행 파일은 일반적으로 .exe 또는 실행 가능한 형식의 다른 확장자를 가집니다.
        일반적으로 컴파일러는 위의 과정을 자동으로 수행합니다. 예를 들어 GCC(GNU Compiler Collection)를 사용하는 경우, 다음과 같은 명령어를 사용하여 전체 프로세스를 실행할 수 있습니다:

- etc...
    - call-by-value, call-by-referance (??) 각각언어마다 다르다.
    - int sumArray(const int*pArr, int size) *pArr은 포인터이다..
    - ...


---
## 2024-03-07
---

- NULL
    - ??
    - ??

- 부속질의
    - where의 부속질의 (중첩질의)
        1. 비교연산자(컬람1개, 로우1개) =, >, <, >=, <=, <>
        2. 집합
        3. 한정
        4. 존재
        - ALL, SUME/ANY (한정연산자)
    - select 부속질의 (스칼라 부속질의)
    - from 부속질의 (인라인 뷰)
- 뷰
    - 장점 : 관리성, 보안성, 독립성
    - 특징 : 원본데이터에 따라 변함, 인덱스생성 어려움, 연산에 제약이 따름
    - ...
- 요청사항
    1. select 문법...?
    2. database 운영(mySQL)
    3. webDB 중요하다.(종류)aws, 구글GCP, 개인서버..

- 인덱스와 B-tree
    - 인덱스 (MySQL인덱스 ?)
        - 인덱스의 종류는 2종류있음. (클러스터인덱스, 보조인덱스)
        1. 테이블 한개 이상의 속성을 이용하여 생성함
        2. 빠른검색과 함깨 효율적인 레코드 접근가능
        3. 수정 삭제등 변경이 발생하면 인덱스를 재구성해야함
    - B-tree
        1. 인덱스 타입 디폴트값이 B-tree이다
        2. 루트노드, 내부노드 리프노드로 구성된 트리자료구조이다.
        3. 리프노드가 모두 같은 레벨에 존재하는 균형 트리다.
    - 

- etc..
    - 
    - 

---
## 2024-03-07
---
note/20240307.md
---

---
## 20yy-mm-dd
---

- 
    - 
    - 
        - 
        - 

- 
    - 
    - 
        - 
        - 

- 

- etc..
    - 
    - 

```shell
sudo gpt-get install git
git clone https://github.com/kukusum/KUIoTBigdataClass.git
```
...