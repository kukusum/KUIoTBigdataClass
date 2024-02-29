use madangdb;

-- 3-15 example
select sum(saleprice) 총판매액 from Orders;

-- 3-16 example
select sum(saleprice) 판매액 from Orders where Orders.custid=2;
select custid 김연아, saleprice 판매액 from Orders where Orders.custid=2;

-- 3-17 example
select sum(saleprice) Tatal, avg(saleprice) Average, min(saleprice) Min, max(saleprice) Max from Orders;
select count(*) from Orders;

-- 3-21 example
select * from Customer, Orders;
select * from Customer, Orders where Customer.custid=Orders.custid;
select * from Customer, Orders where Customer.custid=Orders.custid order by Customer.custid;
select * from Orders, Customer where Customer.custid=Orders.custid order by Customer.custid;