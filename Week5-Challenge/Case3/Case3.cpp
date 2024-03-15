#include "fvCFD.H"

int main( int argc, char *argv[] ) 
{

    Foam::argList::noBanner();
    Foam::argList args(argc, argv);

    Foam::Time runTime
    (
        Foam::Time::controlDictName, // Dictionary file
        args.rootPath(), // Case root
        args.caseName() // Case name
    );


    // Copied from the dictionary 
    //  'transportProperties'
    IOdictionary thermalProperties
    (
        IOobject
        (
            "thermalProperties",
            "",
            runTime,
            IOobject::MUST_READ_IF_MODIFIED,
            IOobject::NO_WRITE
        )
    );
    dimensionedScalar nu
    (
        "nu",
        dimViscosity,
        thermalProperties
    );
    dimensionedScalar T
    (
        "T",
        dimTemperature,
        thermalProperties
    );

    Info << nu << "\n";
    Info << T << "\n";
    return 0;
}