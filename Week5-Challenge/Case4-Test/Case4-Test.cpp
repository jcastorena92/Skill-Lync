#include "dimensionedScalar.H"
#include "dimensionSet.H"

int main() {
    // Define a dimensionSet representing the dimensions of the variable
    Foam::dimensionSet dimSet(0, 1, -2, 0, 0); // Example dimensions: [M L^-2 T^1]

    // Create a dimensionedScalar variable with a value of 5 and the specified dimensions
    Foam::dimensionedScalar myScalar(5.0, dimSet);

    // Access the value and dimensions of the dimensionedScalar
    Info << "Value: " << myScalar.value() << endl;
    Info << "Dimensions: " << myScalar.dimensions() << endl;

    return 0;
}
