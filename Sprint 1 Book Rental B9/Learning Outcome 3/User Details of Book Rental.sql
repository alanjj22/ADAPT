/* Display all the users who have rented at least 1 book with details of book and rental return date.  */

select u.first_name as FIRST_NAME, 
b.title as TITLE, r.rental_end_date as RENTAL_END_DATE
from user_details u 
left join book_rental r on u.user_id = r.user_id 
left join book b on b.book_id=r.book_id
where rental_end_date is not null;