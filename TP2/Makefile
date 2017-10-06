all: labo correction
	echo "done"


labo: *.tex
	pdflatex -shell-escape -jobname="elech305_tp2" elech305_tp2.tex
	pdflatex -shell-escape -jobname="elech305_tp2" elech305_tp2.tex


correction: *.tex
	pdflatex -shell-escape -jobname=elech305_tp2_correction "\def\correction{} \input{elech305_tp2.tex}"
	pdflatex -shell-escape -jobname=elech305_tp2_correction "\def\correction{} \input{elech305_tp2.tex}"

clean:
	rm -f elech305_tp2_correction.pdf rm elech305_tp2.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
