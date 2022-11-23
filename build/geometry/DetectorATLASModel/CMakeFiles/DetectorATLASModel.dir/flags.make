# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# compile CXX with /usr/bin/c++
CXX_DEFINES = -DG4MULTITHREADED -DG4UI_USE -DG4UI_USE_TCSH -DG4VERBOSE -DG4VIS_USE -DG4_STORE_TRAJECTORY

CXX_INCLUDES = -I/opt/root/buildthis/include -I/home/marton.sandes/lzt/lorenzetti -I/home/marton.sandes/lzt/lorenzetti/geometry/DetectorATLASModel -I/home/marton.sandes/lzt/lorenzetti/geometry/DetectorATLASModel/../../core/GaugiKernel -I/home/marton.sandes/lzt/lorenzetti/geometry/DetectorATLASModel/../../core/G4Kernel -isystem /opt/geant4/source/analysis/g4tools/include -isystem /opt/geant4/source/analysis/accumulables/include -isystem /opt/geant4/source/analysis/csv/include -isystem /opt/geant4/source/analysis/hntools/include -isystem /opt/geant4/source/analysis/management/include -isystem /opt/geant4/source/analysis/root/include -isystem /opt/geant4/source/analysis/xml/include -isystem /opt/geant4/source/digits_hits/detector/include -isystem /opt/geant4/source/digits_hits/digits/include -isystem /opt/geant4/source/digits_hits/hits/include -isystem /opt/geant4/source/digits_hits/scorer/include -isystem /opt/geant4/source/digits_hits/utils/include -isystem /opt/geant4/source/error_propagation/include -isystem /opt/geant4/source/event/include -isystem /opt/geant4/source/externals/clhep/include -isystem /opt/geant4/source/geometry/biasing/include -isystem /opt/geant4/source/geometry/divisions/include -isystem /opt/geant4/source/geometry/magneticfield/include -isystem /opt/geant4/source/geometry/management/include -isystem /opt/geant4/source/geometry/navigation/include -isystem /opt/geant4/source/geometry/solids/Boolean/include -isystem /opt/geant4/source/geometry/solids/CSG/include -isystem /opt/geant4/source/geometry/solids/specific/include -isystem /opt/geant4/source/geometry/volumes/include -isystem /opt/geant4/source/global/HEPGeometry/include -isystem /opt/geant4/source/global/HEPNumerics/include -isystem /opt/geant4/source/global/HEPRandom/include -isystem /opt/geant4/source/global/management/include -isystem /opt/geant4/source/graphics_reps/include -isystem /opt/geant4/source/intercoms/include -isystem /opt/geant4/source/interfaces/GAG/include -isystem /opt/geant4/source/interfaces/basic/include -isystem /opt/geant4/source/interfaces/common/include -isystem /opt/geant4/source/materials/include -isystem /opt/geant4/source/parameterisations/gflash/include -isystem /opt/geant4/source/particles/adjoint/include -isystem /opt/geant4/source/particles/bosons/include -isystem /opt/geant4/source/particles/hadrons/barions/include -isystem /opt/geant4/source/particles/hadrons/ions/include -isystem /opt/geant4/source/particles/hadrons/mesons/include -isystem /opt/geant4/source/particles/leptons/include -isystem /opt/geant4/source/particles/management/include -isystem /opt/geant4/source/particles/shortlived/include -isystem /opt/geant4/source/particles/utils/include -isystem /opt/geant4/source/persistency/ascii/include -isystem /opt/geant4/source/persistency/gdml/include -isystem /opt/geant4/source/persistency/mctruth/include -isystem /opt/geant4/source/physics_lists/builders/include -isystem /opt/geant4/source/physics_lists/constructors/decay/include -isystem /opt/geant4/source/physics_lists/constructors/electromagnetic/include -isystem /opt/geant4/source/physics_lists/constructors/factory/include -isystem /opt/geant4/source/physics_lists/constructors/gamma_lepto_nuclear/include -isystem /opt/geant4/source/physics_lists/constructors/hadron_elastic/include -isystem /opt/geant4/source/physics_lists/constructors/hadron_inelastic/include -isystem /opt/geant4/source/physics_lists/constructors/ions/include -isystem /opt/geant4/source/physics_lists/constructors/limiters/include -isystem /opt/geant4/source/physics_lists/constructors/stopping/include -isystem /opt/geant4/source/physics_lists/lists/include -isystem /opt/geant4/source/physics_lists/util/include -isystem /opt/geant4/source/processes/biasing/management/include -isystem /opt/geant4/source/processes/biasing/generic/include -isystem /opt/geant4/source/processes/biasing/importance/include -isystem /opt/geant4/source/processes/cuts/include -isystem /opt/geant4/source/processes/decay/include -isystem /opt/geant4/source/processes/electromagnetic/adjoint/include -isystem /opt/geant4/source/processes/electromagnetic/dna/processes/include -isystem /opt/geant4/source/processes/electromagnetic/dna/models/include -isystem /opt/geant4/source/processes/electromagnetic/dna/utils/include -isystem /opt/geant4/source/processes/electromagnetic/dna/management/include -isystem /opt/geant4/source/processes/electromagnetic/dna/molecules/management/include -isystem /opt/geant4/source/processes/electromagnetic/dna/molecules/types/include -isystem /opt/geant4/source/processes/electromagnetic/highenergy/include -isystem /opt/geant4/source/processes/electromagnetic/lowenergy/include -isystem /opt/geant4/source/processes/electromagnetic/muons/include -isystem /opt/geant4/source/processes/electromagnetic/pii/include -isystem /opt/geant4/source/processes/electromagnetic/polarisation/include -isystem /opt/geant4/source/processes/electromagnetic/standard/include -isystem /opt/geant4/source/processes/electromagnetic/utils/include -isystem /opt/geant4/source/processes/electromagnetic/xrays/include -isystem /opt/geant4/source/processes/hadronic/cross_sections/include -isystem /opt/geant4/source/processes/hadronic/management/include -isystem /opt/geant4/source/processes/hadronic/models/abla/include -isystem /opt/geant4/source/processes/hadronic/models/abrasion/include -isystem /opt/geant4/source/processes/hadronic/models/binary_cascade/include -isystem /opt/geant4/source/processes/hadronic/models/cascade/cascade/include -isystem /opt/geant4/source/processes/hadronic/models/coherent_elastic/include -isystem /opt/geant4/source/processes/hadronic/models/de_excitation/ablation/include -isystem /opt/geant4/source/processes/hadronic/models/de_excitation/evaporation/include -isystem /opt/geant4/source/processes/hadronic/models/de_excitation/fermi_breakup/include -isystem /opt/geant4/source/processes/hadronic/models/de_excitation/fission/include -isystem /opt/geant4/source/processes/hadronic/models/de_excitation/gem_evaporation/include -isystem /opt/geant4/source/processes/hadronic/models/de_excitation/handler/include -isystem /opt/geant4/source/processes/hadronic/models/de_excitation/management/include -isystem /opt/geant4/source/processes/hadronic/models/de_excitation/multifragmentation/include -isystem /opt/geant4/source/processes/hadronic/models/de_excitation/photon_evaporation/include -isystem /opt/geant4/source/processes/hadronic/models/de_excitation/util/include -isystem /opt/geant4/source/processes/hadronic/models/em_dissociation/include -isystem /opt/geant4/source/processes/hadronic/models/fission/include -isystem /opt/geant4/source/processes/hadronic/models/im_r_matrix/include -isystem /opt/geant4/source/processes/hadronic/models/inclxx/utils/include -isystem /opt/geant4/source/processes/hadronic/models/inclxx/incl_physics/include -isystem /opt/geant4/source/processes/hadronic/models/inclxx/interface/include -isystem /opt/geant4/source/processes/hadronic/models/gamma_nuclear/include -isystem /opt/geant4/source/processes/hadronic/models/lend/include -isystem /opt/geant4/source/processes/hadronic/models/lepto_nuclear/include -isystem /opt/geant4/source/processes/hadronic/models/management/include -isystem /opt/geant4/source/processes/hadronic/models/particle_hp/include -isystem /opt/geant4/source/processes/hadronic/models/parton_string/diffraction/include -isystem /opt/geant4/source/processes/hadronic/models/parton_string/hadronization/include -isystem /opt/geant4/source/processes/hadronic/models/parton_string/management/include -isystem /opt/geant4/source/processes/hadronic/models/parton_string/qgsm/include -isystem /opt/geant4/source/processes/hadronic/models/pre_equilibrium/exciton_model/include -isystem /opt/geant4/source/processes/hadronic/models/qmd/include -isystem /opt/geant4/source/processes/hadronic/models/quasi_elastic/include -isystem /opt/geant4/source/processes/hadronic/models/radioactive_decay/include -isystem /opt/geant4/source/processes/hadronic/models/rpg/include -isystem /opt/geant4/source/processes/hadronic/models/theo_high_energy/include -isystem /opt/geant4/source/processes/hadronic/models/util/include -isystem /opt/geant4/source/processes/hadronic/processes/include -isystem /opt/geant4/source/processes/hadronic/stopping/include -isystem /opt/geant4/source/processes/hadronic/util/include -isystem /opt/geant4/source/processes/management/include -isystem /opt/geant4/source/processes/optical/include -isystem /opt/geant4/source/processes/solidstate/phonon/include -isystem /opt/geant4/source/processes/solidstate/channeling/include -isystem /opt/geant4/source/processes/parameterisation/include -isystem /opt/geant4/source/processes/scoring/include -isystem /opt/geant4/source/processes/transportation/include -isystem /opt/geant4/source/readout/include -isystem /opt/geant4/source/run/include -isystem /opt/geant4/source/track/include -isystem /opt/geant4/source/tracking/include -isystem /opt/geant4/source/visualization/FukuiRenderer/include -isystem /opt/geant4/source/visualization/HepRep/include -isystem /opt/geant4/source/visualization/RayTracer/include -isystem /opt/geant4/source/visualization/Tree/include -isystem /opt/geant4/source/visualization/VRML/include -isystem /opt/geant4/source/visualization/XXX/include -isystem /opt/geant4/source/visualization/gMocren/include -isystem /opt/geant4/source/visualization/management/include -isystem /opt/geant4/source/visualization/modeling/include

CXX_FLAGS = -W -Wall -pedantic -Wno-non-virtual-dtor -Wno-long-long -Wwrite-strings -Wpointer-arith -Woverloaded-virtual -Wno-variadic-macros -Wshadow -pipe -DG4USE_STD11 -pthread -ftls-model=initial-exec -std=c++11  -pipe -m64 -fsigned-char -pthread -std=c++11 -O3 -DNDEBUG -fno-trapping-math -ftree-vectorize -fno-math-errno -fPIC

