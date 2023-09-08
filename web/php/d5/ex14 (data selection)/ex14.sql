SELECT floor_number as 'floor', SUM(nb_seats) as 'seats'
FROM floor
GROUP BY floor_number
ORDER BY seats DESC;