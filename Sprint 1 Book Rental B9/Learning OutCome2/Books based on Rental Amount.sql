/* Fetch books which having rental as less than 500 for a month*/

select * from book
where (rent_per_day * 30) < 500;