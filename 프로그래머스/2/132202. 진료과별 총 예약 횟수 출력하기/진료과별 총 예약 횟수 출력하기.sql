select MCDP_CD '진료과코드', count(MCDP_CD) '5월예약건수' from APPOINTMENT
where YEAR(APNT_YMD) = 2022 and MONTH(APNT_YMD) = 5
group by MCDP_CD
order by count(MCDP_CD) asc, MCDP_CD asc;