/* Display details of book rentedout on 20/11/2020 */

select * from book
where book_id in (
    select book_id from book_rental
    where rental_start_date = '20/Nov/2020');
)