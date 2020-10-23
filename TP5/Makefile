all: labo correction
	echo "done"


labo: *.tex
	pdflatex -shell-escape -jobname="elech305_tp5" elech305_tp5.tex
	pdflatex -shell-escape -jobname="elech305_tp5" elech305_tp5.tex


correction: *.tex
	pdflatex -shell-escape -jobname=elech305_tp5_correction "\def\correction{} \input{elech305_tp5.tex}"
	pdflatex -shell-escape -jobname=elech305_tp5_correction "\def\correction{} \input{elech305_tp5.tex}"

clean:
	rm -f elech305_tp5_correction.pdf rm elech305_tp5.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
