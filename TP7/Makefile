all: labo correction
	echo "done"


labo: *.tex
	pdflatex -shell-escape -jobname="elech305_tp7" elech305_tp7.tex
	pdflatex -shell-escape -jobname="elech305_tp7" elech305_tp7.tex


correction: *.tex
	pdflatex -shell-escape -jobname=elech305_tp7_correction "\def\correction{} \input{elech305_tp7.tex}"
	pdflatex -shell-escape -jobname=elech305_tp7_correction "\def\correction{} \input{elech305_tp7.tex}"

clean:
	rm -f elech305_tp7_correction.pdf rm elech305_tp7.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
