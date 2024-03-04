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
- ## 2024-02-29

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
## 2024-03-04
---
- 배열 초기화(initialization)
    - int len = 100; //초기화
    - int len;
    - len = 100;
    - int nums[5] = {1, 2, 3, 4, 5}; //초기화리스트
        - int nums[5];
        - nums[0]=1;
        - nums[1];
        - nums[2];
        - nums[3];
        - nums[4];
        - nums[5];
    -int nums[5] = {0};
        - nums: 0 0 0 0 0
- 배열초기화에대해서 좀더 알아보기.

```shell
sudo gpt-get install git
git clone https://github.com/kukusum/KUIoTBigdataClass.git
```
...