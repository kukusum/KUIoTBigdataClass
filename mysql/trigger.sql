use madangdb;

set global log_bin_trust_function_creators=on;

create table Book_log(
	bookid integer primary key,
    bookname varchar(40), 
    publisher varchar(40), 
    price integer);

-- book_after_insert trigger registration end    
DROP TRIGGER IF EXISTS `madangdb`.`Book_AFTER_INSERT`;

DELIMITER $$
USE `madangdb`$$
CREATE DEFINER = CURRENT_USER TRIGGER `madangdb`.`Book_AFTER_INSERT` AFTER INSERT ON `Book` FOR EACH ROW
BEGIN
	insert into Book_log values (new.bookid, new.bookname, new.publisher, new.price);
END$$
DELIMITER ;
-- book_after_insert trigger registration end

select * from Book;
select * from Book_log;
insert into Book values (14, '스포츠 과학1', '이상미디어', 25000);


-- fnc_interest registration end
USE `madangdb`;
DROP function IF EXISTS `fnc_interest`;

DELIMITER $$
USE `madangdb`$$
CREATE FUNCTION fnc_interest(price integer)
RETURNS INTEGER
BEGIN
	declare myInterest integer;
    if price >= 10000 then
		set myInterest = price * 0.1;
	else
		set myInterest = price *0.05;
	end if;
RETURN myInterest;
END$$

DELIMITER ;
-- fnc_interest registration end
select custid, orderid, saleprice, fnc_interest(saleprice) 'interest' from Orders;