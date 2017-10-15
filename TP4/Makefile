all: labo correction
	echo "done"


labo: *.tex
	pdflatex -shell-escape -jobname="elech305_tp4" elech305_tp4.tex
	pdflatex -shell-escape -jobname="elech305_tp4" elech305_tp4.tex


correction: *.tex
	pdflatex -shell-escape -jobname=elech305_tp4_correction "\def\correction{} \input{elech305_tp4.tex}"
	pdflatex -shell-escape -jobname=elech305_tp4_correction "\def\correction{} \input{elech305_tp4.tex}"

clean:
	rm -f elech305_tp4_correction.pdf rm elech305_tp4.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
