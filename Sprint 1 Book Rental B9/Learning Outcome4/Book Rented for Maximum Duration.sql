/* Fetch the book's title which was on rent for maximum duration */

select * from (select book.title from book_rental, book
        where book_rental.book_id=book.book_id
        order by(rental_end_date-rental_start_date))
        where rownum=1;