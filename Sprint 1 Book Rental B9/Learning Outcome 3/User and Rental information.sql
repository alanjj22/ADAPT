/* Display the user’s first_name, book title and the rental end date of the book for the rental id/s which was rented on 25th of Nov 2020 */


select u.first_name, b.title, r.rental_end_date
from user_details u 
left join book_rental r on u.user_id = r.user_id 
left join book b on b.book_id=r.book_id
where to_char(r.rental_start_date,'dd-mm-yyyy')='25-11-2020';