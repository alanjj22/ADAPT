/* Display month and the number of books when the maximum number of books were rented */


select * from 
 (select to_char(rental_start_date,'Month'), count(book_id) as TOTAL_BOOKS
    from book_rental
    group by to_char(rental_start_date,'Month')
    order by TOTAL_BOOKS desc)
    where rownum=1;