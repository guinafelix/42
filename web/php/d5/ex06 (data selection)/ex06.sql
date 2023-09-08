SELECT title, summary 
FROM movie
WHERE LOWER(resume) LIKE '%vincent%'
ORDER BY id_film ASC;
