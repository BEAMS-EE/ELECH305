all: labo correction
	echo "done"


labo: *.tex
	pdflatex -shell-escape -jobname="elech305_tp6" elech305_tp6.tex
	pdflatex -shell-escape -jobname="elech305_tp6" elech305_tp6.tex


correction: *.tex
	pdflatex -shell-escape -jobname=elech305_tp6_correction "\def\correction{} \input{elech305_tp6.tex}"
	pdflatex -shell-escape -jobname=elech305_tp6_correction "\def\correction{} \input{elech305_tp6.tex}"

clean:
	rm -f elech305_tp6_correction.pdf rm elech305_tp6.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
