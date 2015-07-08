set datafile missing "na" 
set term windows
set pointsize 0.400000
set xlabel "a_1"
set ylabel "q_1_1"
set ticslevel 0.0
splot 'data.gp' using 1:2:3  t "Prob(1_1)"
pause -1 "Close graph 2)"
