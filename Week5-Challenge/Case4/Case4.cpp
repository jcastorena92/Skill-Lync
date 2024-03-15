#include "fvCFD.H"
#include "dimensionedScalar.H"
#include "dimensionSet.H"

int main(int argc, char *argv[] ){
    
    dimensionedScalar inputPressure = 
    dimensionedScalar
    (
        "pressure", // A name field
        dimensionSet(1, -1, -2, 0, 0, 0, 0),
        1.0 // Value to initialize
    );
    Info << inputPressure << "\n";

    dimensionedScalar Mach = 
    dimensionedScalar
    (
        "mach number", // A name field
        dimless,
        1.0 // Value to initialize
    );
    Info << Mach << "\n";   

    inputPressure = Mach;
    scalar M;

    Foam::argList::validOptions.set("mach","Mach");
    Foam::argList::validOptions.set("boolean","");
    Foam::argList::noBanner();
    Foam::argList args(argc, argv); 
    args.optionReadIfPresent("mach",M);
    Info << "mach " << M << "\n";

    return 0;
}