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

    IOdictionary ioDictObj // The object name "ioDictObj", whatever name we want to define 
    (
        IOobject
        (
            "myDictFile", // The dictionary file
            "", // The path, in this case, it is left in blank as there is no directory such as "0", "constant" or "system"
            runTime, // The time object
            IOobject::MUST_READ,// Read for constructor
            IOobject::NO_WRITE // Foam::Time writeControl    
        )
    );

    vector vec_in = vector( ioDictObj.lookup("vec_in"));

    Info << vec_in << "\n";
    
    return 0;
}