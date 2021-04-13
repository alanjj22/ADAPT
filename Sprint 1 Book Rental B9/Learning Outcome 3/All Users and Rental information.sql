/* Display all the users first name, book title, rental start date, reantal end date for all users 
with the rental details even they dont avail any books for rental and sort the output based on first name
Note: use left join and subquery */

select u.first_name, b.title, r.rental_start_date,r.rental_end_date
from user_details u left join book_rental r on u.user_id in r.user_id
left join book b on r.book_id in b.book_id
order by u.first_name asc;