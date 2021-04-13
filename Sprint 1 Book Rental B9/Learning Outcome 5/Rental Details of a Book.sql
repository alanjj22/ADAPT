/* Rental Details of Book Machine Learning */

select * from rental_details
where book_id = (
    select book_id from book
    where title like '%Machine Learning%'
);