E=100
Emin=10
Emax=150
nEvents=5

v=$(date +"%Y%m%d_%Hh%Mm%Ss")

fileName="single_e_$Emin""_$Emax""GeV_$v"
#fileName="single_e_$nEvents""evts_$var"
current_path="./runs/$fileName"
# current_path="./runs/$pathName"
# var=`date`

mkdir -p $current_path/HIT
mkdir -p $current_path/ESD
mkdir -p $current_path/EVT
mkdir -p $current_path/AOD

cd $current_path/EVT

#prun_events.py -c "gen_electron.py -e $E -s 0" -mt 40 --nov 1000 -o electrons.EVT.root -m
prun_events.py -c "gen_electron.py --energy_min $Emin --energy_max $Emax -s 0" -mt 40 --nov $nEvents -o electrons.EVT.root -m

cd ../HIT
simu_trf.py -i ../EVT/electrons.EVT.root -o electrons.HIT.root -nt 40 --enableMagneticField
# digitalization
cd ../ESD
prun_jobs.py -c "digit_trf.py" -i ../HIT/ -o electrons.ESD.root -mt 40
# reconstruction
cd ../AOD
prun_jobs.py -c "reco_trf.py" -i ../ESD -o electrons.AOD.root -mt 40 -m
cd ../..