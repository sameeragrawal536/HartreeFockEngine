# HartreeFockEngine
A C++ implementation of the Hartree Fock algorithm for simulating quantum n-body systems, using the STO-6G basis set.

Currently, algorithm can accurately calculate ground-state energy and atomic radius for Hydrogen, Helium, and Beryllium.

**Calculated ground state energy values vs ground truth:**
|    | **Calculated Value** | **Ground Truth Value** |
| ------------- | ------------- | ------------- |
| Hydrogen | -0.499 Hartrees | -0.5 Hartrees |
| Helium | −2.860 Hartrees | -2.903 Hartrees |
| Beryllium | -14.566 Hartrees | -14.698 Hartrees |


**Calculated atomic radius values vs ground truth:**
|    | **Calculated Value** | **Ground Truth Value** |
| ------------- | ------------- | ------------- |
| Hydrogen | 52.8 picometers | 53 picometers |
| Helium | 30.5 picometers | 31 picometers |
| Beryllium | 129 picometers | 112 picometers |
