/* Fetch the book's title which was availed for rent by most of the users. */


 select b.title from book b
 where b.book_id = (select r.book_id from book_rental r
                    group by r.book_id
                    having count(r.book_id)=(select max(count(r.book_id))
                    from book_rental r
                    group by r.book_id));