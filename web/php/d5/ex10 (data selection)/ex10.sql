SELECT title as 'Title', summary as 'Summary', prod_year
from movie 
INNER JOIN genre 
ON id_genre = movie.id_genre
WHERE genre.name = 'erotic'
ORDER BY prod_year DESC;