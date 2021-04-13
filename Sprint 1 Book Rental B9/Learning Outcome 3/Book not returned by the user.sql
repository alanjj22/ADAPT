/*  Fetch the user information who has not returned the books after the rental period */

 select * from user_details
 where user_id in (
    select user_id from book_rental
    where isreturned = 'no');