SELECT DATEDIFF(MAX(date), MIN(date)) as 'uptime'
FROM user_history
GROUP BY id_movie;