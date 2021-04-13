/*  List the users who has availed the books current month */


 select * from user_details 
 where user_id in (
    select user_id from book_rental
    where rental_start_date between '01/Dec/2020' and '31/Dec/2020');