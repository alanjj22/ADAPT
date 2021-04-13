/*  List the users who has availed the books current month */


 select * from user_details 
 where user_id in (
    select user_id from book_rental
    where to_char(rental_start_date, 'Mon') = 'Dec');