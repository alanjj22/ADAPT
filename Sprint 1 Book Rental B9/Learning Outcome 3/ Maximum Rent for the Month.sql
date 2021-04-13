/* Display fist name , city , total rent amount of the month for the user whose rental amount is maximum for the month. */

select * 
from (select first_name, city, sum(total_amount) from book_rental r, user_details u
where (u.user_id=r.user_id) and (to_char(rental_start_date,'Mon')  = 'Dec')
group by first_name, city
order by sum(total_amount) desc)
where rownum=1;