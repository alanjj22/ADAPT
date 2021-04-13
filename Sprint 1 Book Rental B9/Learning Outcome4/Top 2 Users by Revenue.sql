/* Identify the top 2 preferred users in descending order of max revenue generated. */

 select * from (select u.first_name from user_details u,
                (select b.user_id,sum(b.total_amount) as TOTAL_COST
                from book_rental b
                group by b.user_id
                order by TOTAL_COST desc) R
 where u.user_id= R.user_id
 order by TOTAL_COST desc)
 where rownum < 3;