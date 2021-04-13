/*   Display the books which have a price more than $500 and the available quantity is 10 */

 select * from book 
 where (available_quantity = 10 ) and (price > 500);