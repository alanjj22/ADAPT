/*   Identify the users who have opted for book named ‘Neural Networks'’ */


select * from user_details
 where user_id in (
    select user_id from book_rental where book_id in(
        select book_id from book
        where title like '%Neural Networks%'));