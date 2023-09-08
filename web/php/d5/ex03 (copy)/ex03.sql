INSERT INTO ft_table(login, creation_date, group)
  SELECT last_name as login, birthdate as creation_date, 'other' as group
  FROM user_card
  WHERE last_name LIKE '%a%' AND LENGTH(last_name) < 9
  ORDER BY ASC
  limit 0, 10;