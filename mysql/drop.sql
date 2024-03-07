show tables;
set sql_safe_updates=0;

delete from Customer;

set foreign_key_checks=0;
delete from Customer;
select * from Custmer;

select * from information_schema.table_constraints
where table_name like 'Orders';

alter table Orders drop foreign key Orders_ibfk_1;