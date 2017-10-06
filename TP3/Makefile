all: labo correction
	echo "done"


labo: *.tex
	pdflatex -shell-escape -jobname="elech305_tp3" elech305_tp3.tex
	pdflatex -shell-escape -jobname="elech305_tp3" elech305_tp3.tex


correction: *.tex
	pdflatex -shell-escape -jobname=elech305_tp3_correction "\def\correction{} \input{elech305_tp3.tex}"
	pdflatex -shell-escape -jobname=elech305_tp3_correction "\def\correction{} \input{elech305_tp3.tex}"

clean:
	rm -f elech305_tp3_correction.pdf rm elech305_tp3.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
