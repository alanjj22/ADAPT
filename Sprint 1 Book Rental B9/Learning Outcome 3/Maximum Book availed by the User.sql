/*   Fetch the first_name of the user who has availed maximum number of books for rental during the current fiscal  */

  
 select first_name from user_details
 where user_details.user_id in (
    select * from (select user_id from book_rental
                    group by user_id 
                    order by count(*) desc)
           where  rownum<=1);