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
