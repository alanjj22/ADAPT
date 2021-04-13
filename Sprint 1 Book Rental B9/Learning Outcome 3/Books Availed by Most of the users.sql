/* Fetch the book which was availed for rent by most users */

select * from book
 where book_id = (select book_id from book_rental 
                    group by book_id having count(*)=
                    (select * from (select count(*) 
                    from book_rental group by book_id 
                    order by count(*)desc)where rownum<=1));