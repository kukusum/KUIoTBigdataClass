use madangdb;

-- 3-15 example
select sum(saleprice) 총판매액 from Orders;

-- 3-16 example
select sum(saleprice) 판매액 from Orders where Orders.custid=2;
select custid 김연아, saleprice 판매액 from Orders where Orders.custid=2;

-- 3-17 example
select sum(saleprice) Tatal, avg(saleprice) Average, min(saleprice) Min, max(saleprice) Max from Orders;
select count(*) from Orders;

-- 3-21, 3-22 example
select * from Customer, Orders;
select * from Customer, Orders where Customer.custid=Orders.custid;
select * from Customer, Orders where Customer.custid=Orders.custid order by Customer.custid;
select * from Orders, Customer where Customer.custid=Orders.custid order by Customer.custid;
select Customer.custid, name, saleprice from Orders, Customer where Customer.custid=Orders.custid order by Customer.custid;

-- 3-24 example
select name, SUM(saleprice) from Orders, Customer where Customer.custid=Orders.custid group by name order by name;

-- 3-25 example
select Customer.name, Book.bookname from Customer, Orders, Book where (Customer.custid=Orders.custid) and (Book.bookid= Orders.bookid);
select Customer.name, Book.bookname, Book.price from Customer, Orders, Book where (Customer.custid=Orders.custid) and (Book.bookid= Orders.bookid) and Book.price>=20000;

select Customer.name, Orders.saleprice from Customer left join Orders on Customer.custid=Orders.custid;
select Customer.name, Orders.saleprice from Customer left outer join Orders on Customer.custid=Orders.custid;
select Customer.name, Orders.saleprice from Customer, Orders where Customer.custid=Orders.custid;

-- 3-28 example
select bookname from Book where price = (select max(price) from Book);
select Book.bookname, Book.price from Book where price = (select max(price) from Book where price < 15000);
select bookname, price from Book where price = (select max(price) from Book where price < 15000);

select * from Book;

select max(price) from Book where price<15000;

-- 3-29 example
select name from Customer where custid in (select custid from Orders);
select * from Customer;

-- 3-30 example
select name from Customer where custid in(select custid from Orders where bookid in(select bookid from Book where publisher='대한미디어'));

-- 3-31 example
select bookname from Book where price > (select avg(price) from Book where publisher = publisher);
select b1.bookname, b1.publisher, b1.price from Book b1 where b1.price > (select avg(b2.price) from Book b2 where b2.publisher = b1.publisher);
select publisher, avg(price) from Book group by publisher;

-- 3-32 example
select name from Customer where address like '대한민국%';
union all
select orderdata from Orders where custid in (select custid from Orders);

select name from Customer where custid in (select custid from Orders) ;

-- 3-33 example
select name, address from Customer cs where exists (select * from Orders od where cs.custid=od.custid);



//delete from Book where bookid= 99999;

create table Mybook(bookid int primary key, price int);
insert into Mybook(bookid, price) value (1, 10000);
insert into Mybook(bookid, price) value (2, 20000);
insert into Mybook(bookid, price) value (3, null);

select * from Mybook;

select price + 100 from Mybook where bookid=3;
select sum(price), avg(price), count(*), count(price), count(bookid) from Mybook;

select name 이름, ifnull(phone, '연락처없음')전화번호 from Customer;
