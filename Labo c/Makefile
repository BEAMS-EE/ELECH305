all: labo correction
#	labo
#	correction
	echo "done"


labo: *.tex
	#cd Figures; ./crop.sh;cd ..
	# cd figures; make;cd ..
	# cd mesures; make;cd ..
	#cp ~/Documents/SIES2013add.bib .
	pdflatex -shell-escape -jobname="elech305_laboc" elech305_laboc.tex
	#bibtex SIES_2013_YAllard.aux
	#pdflatex labo_diodes_corr.tex
	pdflatex -shell-escape -jobname="elech305_laboc" elech305_laboc.tex


correction: *.tex
	#cd Figures; ./crop.sh;cd ..
	# cd figures; make;cd ..
	# cd mesures; make;cd ..
	#cp ~/Documents/SIES2013add.bib .
	pdflatex -shell-escape -jobname=elech305_laboc_correction "\def\correction{} \input{elech305_laboc.tex}"
	#bibtex SIES_2013_YAllard.aux
	#pdflatex labo_diodes_corr.tex
	pdflatex -shell-escape -jobname=elech305_laboc_correction "\def\correction{} \input{elech305_laboc.tex}"

clean:
	rm -f elech305_laboc_correction.pdf rm elech305_laboc.pdf
	rm -f *.idx *.aux *.log *.nav *.out *.snm *.toc
