SELECT last_name, first_name,
FROM user_card
WHERE last_name = '%-%' OR first_name = '%-%'
ORDER BY last_name ASC, first_name ASC;