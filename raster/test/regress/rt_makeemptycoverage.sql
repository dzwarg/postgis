-- make an empty coverage with equal tiles (all 5x5)
select st_metadata(st_makeemptycoverage(5, 5, 10, 10, 0, 0, 1, 1, 0, 0, 0));
-- make an empty coverage with unequal coverage (4x4, 3x4, 4x3, 3x3)
select st_metadata(st_makeemptycoverage(4, 4, 7, 7, 0, 0, 1, 1, 0, 0, 0));
