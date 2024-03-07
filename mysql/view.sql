use madangdb;

create view vw_Book
as select * from Book where bookname like '%축구%';

select * from vw_Book;

-- 4-20 example
create view vw_Customer
as select * from Customer where address like '%대한민국%';


-- 4-21 example
create view vw_Orders(orderid, custid, name, bookid, bookname, saleprice, orderdate)
as select od.orderid, cs.custid, cs.name, bk.bookid, bk.bookname, od.saleprice, od.orderdate
from Orders od, Customer cs, Book bk
where od.custid = cs.custid and od.bookid = bk.bookid;

select orderid, bookname, saleprice
from vw_Orders
where name like '김연아';

INSERT INTO Customer VALUES (1, '박지성', '영국 맨체스타', '000-5000-0001');
INSERT INTO Customer VALUES (2, '김연아', '대한민국 서울', '000-6000-0001'); 
INSERT INTO Customer VALUES (3, '김연경', '대한민국 경기도', '000-7000-0001');
INSERT INTO Customer VALUES (4, '추신수', '미국 클리블랜드', '000-8000-0001');
INSERT INTO Customer VALUES (5, '박세리', '대한민국 대전',  NULL);

-- 4-22 example
select * from vw_Customer;

create or replace view vw_Customer(custid, name, addresss)
as select custid, name, address
from Customer
where address like '%영국%';

select * from vw_Customer;
drop view vw_Customer;

insert into vw_Customer value(6, '최수길', '영국 계룡');
insert into Customer value(7, "박정석", "영국 대전", "010-0000-0101");

select * from Customer;

show variables like 'datadir';

-- 4-? example

-- 4-? example

-- 4-? example

