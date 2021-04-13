/* Display the books title which was not at all rented out  */

 select title from book 
 where book_id not in (
    select book_id from book_rental);