all: labo correction
	echo "done"


labo: *.tex
	pdflatex -shell-escape -jobname="elech305_tp1" elech305_tp1.tex
	pdflatex -shell-escape -jobname="elech305_tp1" elech305_tp1.tex


correction: *.tex
	#cd Figures; ./crop.sh;cd ..
	# cd figures; make;cd ..
	# cd mesures; make;cd ..
	#cp ~/Documents/SIES2013add.bib .
	pdflatex -shell-escape -jobname=elech305_tp1_correction "\def\correction{} \input{elech305_tp1.tex}"
	#bibtex SIES_2013_YAllard.aux
	#pdflatex labo_diodes_corr.tex
	pdflatex -shell-escape -jobname=elech305_tp1_correction "\def\correction{} \input{elech305_tp1.tex}"

clean:
	rm -f elech305_tp1_correction.pdf rm elech305_tp1.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
