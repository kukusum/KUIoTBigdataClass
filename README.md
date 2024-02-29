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
        - B에만 null 값을 포함하지 않게 하려면 right outer join.
        -
- ...
```shell
sudo gpt-get install git
git clone https://github.com/kukusum/KUIoTBigdataClass.git
```
...