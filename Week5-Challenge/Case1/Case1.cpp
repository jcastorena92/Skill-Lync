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
    
    Info << " Current Time = " << runTime.timeName() << nl << endl;
    Info << " Start Time = " << runTime.startTime() << nl << endl;
    Info << " End Time = " << runTime.endTime() << nl << endl;

    return 0;
}