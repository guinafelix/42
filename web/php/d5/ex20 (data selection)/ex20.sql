SELECT genre.id_genre AS 'id_genre',
  genre.name AS 'name_genre',
  distributor.id_distrib AS 'id_distrib',
  distributor.name AS 'name_distrib',
  movie.title AS 'title_film'
FROM film
LEFT JOIN genre ON genre.id_genre = movie.id_genre
LEFT JOIN distributor ON distributor.id_distrib = movie.id_distrib
WHERE movie.id_genre BETWEEN 4 AND 8