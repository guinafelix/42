SELECT REVERSE(SUBSTRING(phone_number, 2)) as rebmunenohp
FROM distributor
WHERE phone_number LIKE '05%';