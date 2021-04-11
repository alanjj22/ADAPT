/* Display the total number of users based on the city */

select city, count(*) from user_details
group by city;