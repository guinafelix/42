SELECT UPPER(user_card.last_name) as 'NAME', user_card.first_name, enrollment.price
FROM member
INNER JOIN enrollment ON enrollment.id_enroll = member.id_enroll
INNER JOIN user_card ON user_card.id_user = member.id_member
WHERE enrollment.price > 42
ORDER BY user_card.last_name ASC, user_card.first_name ASC;