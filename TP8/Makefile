all: labo correction
	echo "done"


labo: *.tex
	pdflatex -shell-escape -jobname="elech305_tp8" elech305_tp8.tex
	pdflatex -shell-escape -jobname="elech305_tp8" elech305_tp8.tex


correction: *.tex
	pdflatex -shell-escape -jobname=elech305_tp8_correction "\def\correction{} \input{elech305_tp8.tex}"
	pdflatex -shell-escape -jobname=elech305_tp8_correction "\def\correction{} \input{elech305_tp8.tex}"

clean:
	rm -f elech305_tp8_correction.pdf rm elech305_tp8.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
