SELECT COUNT(*) as 'nb_susc', FLOOR(AVG(price)) as 'av_susc', MOD(SUM(len_sub), 42) as 'ft'
FROM subscription