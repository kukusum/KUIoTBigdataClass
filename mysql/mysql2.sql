use madangdb;

-- 3-34 example
create table NewBook (bookid integer, bookname varchar(20), publisher varchar(20), price integer);

drop table NewBook;

create table NewBook (bookid integer primary key, bookname varchar(20), publisher varchar(20), price integer);
create table NewBook (bookid integer, bookname varchar(20), publisher varchar(20), price integer, primary key(bookid));
create table NewBook (bookid integer primary key, bookname varchar(20) not null, publisher varchar(20) unique, price integer default 10000 check (price >= 10000));
create table NewBook (bookid integer, bookname varchar(20) not null, publisher varchar(20) unique, price integer default 10000 check (price >= 10000), primary key(bookname, publisher));

-- 3-35 example
create table NewCustomer(custid integer primary key, name varchar(40), address varchar(40), phone varchar(30));

-- 3-36 example
create table NewOrders(orderid integer, custid integer not null, bookid integer not null, saleprice integer, orderdate date, primary key(orderid), foreign key(custid)references NewCustomer(custid)on delete cascade);

-- 3-37 example
alter table NewBook add isbn varchar(13);

-- 3-38 example
alter table NewBook modify isbn integer;

-- 3-39 example
alter table NewBook drop column isbn;

-- 3-40 example
alter table NewBook modify bookname varchar(20) not null;

-- 3-41 example
alter table NewBook add primary key(bookid);




