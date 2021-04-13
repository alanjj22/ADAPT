/* Display the Rental details of a user “Chandrav” */

select * from book_rental
where user_id = (
                select user_id from user_details
                where first_name = 'Chandrav');