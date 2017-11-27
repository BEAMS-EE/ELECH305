all: labo correction
	echo "done"


labo: *.tex
	pdflatex -shell-escape -jobname="elech305_tp10" elech305_tp10.tex
	pdflatex -shell-escape -jobname="elech305_tp10" elech305_tp10.tex


correction: *.tex
	pdflatex -shell-escape -jobname=elech305_tp10_correction "\def\correction{} \input{elech305_tp10.tex}"
	pdflatex -shell-escape -jobname=elech305_tp10_correction "\def\correction{} \input{elech305_tp10.tex}"

clean:
	rm -f elech305_tp10_correction.pdf rm elech305_tp10.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
