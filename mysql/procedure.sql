use madangdb;

delimiter //;
-- ???

create procedure dorepeat(p1 int)
begin
	set @x=0;
    repeat
		set @x=@x+1;
	until @x>p1
	end repeat;
end;
//
delimiter;

-- dorepeat procedure registration
USE `madangdb`;
DROP procedure IF EXISTS `dorepeat1`;

USE `madangdb`;
DROP procedure IF EXISTS `madangdb`.`dorepeat1`;
;

DELIMITER $$
USE `madangdb`$$
CREATE DEFINER=`root`@`localhost` PROCEDURE `dorepeat1`(p1 int)
begin
	set @x= 0;
    repeat 
		set @x=@x+1;
	until @x > p1
    end repeat;
end$$

DELIMITER ;
;
-- dorepeat registraion end

call dorepeat(100);
select @x;


-- insertbook procedure registration
USE `madangdb`;
DROP procedure IF EXISTS `insertbook`;

DELIMITER $$
USE `madangdb`$$
CREATE PROCEDURE `insertbook` (
	in mybookid integer,
    in mybookname varchar(40),
    in mypublisher varchar(40),
    in myprice integer)
BEGIN
	insert into Book(bookid, bookname, publisher, price) 
		values(mybookid, mybookname, mypublisher, myprice);
END$$

DELIMITER ;

-- registraion end

call insertbook(13, '스포츠과학', '마당과학서적', 25000);
select * from Book;


call dorepeat(100);

select @x;

USE `madangdb`;
DROP procedure IF EXISTS `BookInsertOrUpdate`;

DELIMITER $$
USE `madangdb`$$
CREATE PROCEDURE BookInsertOrUpdate(
	mybookid integer, 
	mybookname varchar (40),
	mypublisher varchar(40),
	myprice integer)
BEGIN
	declare mycount integer;
    select count(*) into mycount from Book
		where bookname like mybookname;
	if mycount !=0 then
		set sql_safe_updates=0;
        update Book set price = myprice
			where bookname like mybookname;
	else
		insert into Book(bookid, bookname, publisher, price)
		values(mybookid, mybookname, mypublisher, myprice);
	end if;
END$$

DELIMITER ;
-- BookInsertOrUpdate procedure registration end
