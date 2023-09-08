SELECT name
  FROM distributor
  WHERE id_distributor = 42
     OR id_distributor BETWEEN 62 AND 69
     OR id_distributor = 71
     OR id_distributor BETWEEN 88 AND 90
     OR LOWER(name) LIKE '%y%y%'
     LIMIT 2, 5;