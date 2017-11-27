all: labo correction
	echo "done"


labo: *.tex
	pdflatex -shell-escape -jobname="elech305_tp9" elech305_tp9.tex
	pdflatex -shell-escape -jobname="elech305_tp9" elech305_tp9.tex


correction: *.tex
	pdflatex -shell-escape -jobname=elech305_tp9_correction "\def\correction{} \input{elech305_tp9.tex}"
	pdflatex -shell-escape -jobname=elech305_tp9_correction "\def\correction{} \input{elech305_tp9.tex}"

clean:
	rm -f elech305_tp9_correction.pdf rm elech305_tp9.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
