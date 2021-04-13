/* Identify the top 3 users in descending order of maximum books rented  also sort the out put based on first_name if more than one user have the same number of books. */

 select * from 
 (select u.first_name, count(r.rental_id) as TOTAL
 from book_rental r inner join user_details u 
 on r.user_id=u.user_id
 group by u.first_name
 order by TOTAL desc)
 where rownum < 4;