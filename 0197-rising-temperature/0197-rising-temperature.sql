/* Write your T-SQL query statement below */
 SELECT b.id FROM WEATHER AS a JOIN WEATHER AS b ON (b.recordDate =  DATEADD(day, 1, a.recordDate)) WHERE b.temperature > a.temperature ;
-- # SELECT DATEADD(year, 1, '2017/08/25') AS DateAdd; DATEADD(day, 2, DepartureDate) AS ChangedDepartureDate
-- SELECT id , DATEADD(day, 2, recordDate) AS ChangedDepartureDate , temperature FROM Weather;
-- SELECT id , DATEADD(day, 2, recordDate) AS ChangedDepartureDate , temperature FROM Weather;