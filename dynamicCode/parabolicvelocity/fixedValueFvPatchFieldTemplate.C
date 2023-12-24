/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | www.openfoam.com
     \\/     M anipulation  |
-------------------------------------------------------------------------------
    Copyright (C) 2019 OpenCFD Ltd.
    Copyright (C) YEAR AUTHOR, AFFILIATION
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

#include "fixedValueFvPatchFieldTemplate.H"
#include "addToRunTimeSelectionTable.H"
#include "fvPatchFieldMapper.H"
#include "volFields.H"
#include "surfaceFields.H"
#include "unitConversion.H"

//{{{ begin codeInclude
#line 49 "/home/jarvisopenfoam/2dsimulation/upgradedpizzarelli/0/U.boundaryField.inlet"
#include "fvCFD.H"
                 #include <cmath>
                 #include <iostream>
//}}} end codeInclude


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

// * * * * * * * * * * * * * * * Local Functions * * * * * * * * * * * * * * //

//{{{ begin localCode

//}}} end localCode


// * * * * * * * * * * * * * * * Global Functions  * * * * * * * * * * * * * //

// dynamicCode:
// SHA1 = 2af2c40cfea095c6cdbb205ed0167565d75ed309
//
// unique function name that can be checked if the correct library version
// has been loaded
extern "C" void parabolicvelocity_2af2c40cfea095c6cdbb205ed0167565d75ed309(bool load)
{
    if (load)
    {
        // Code that can be explicitly executed after loading
    }
    else
    {
        // Code that can be explicitly executed before unloading
    }
}

// * * * * * * * * * * * * * * Static Data Members * * * * * * * * * * * * * //

makeRemovablePatchTypeField
(
    fvPatchVectorField,
    parabolicvelocityFixedValueFvPatchVectorField
);


// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

parabolicvelocityFixedValueFvPatchVectorField::
parabolicvelocityFixedValueFvPatchVectorField
(
    const fvPatch& p,
    const DimensionedField<vector, volMesh>& iF
)
:
    fixedValueFvPatchField<vector>(p, iF)
{
    if (false)
    {
        printMessage("Construct parabolicvelocity : patch/DimensionedField");
    }
}


parabolicvelocityFixedValueFvPatchVectorField::
parabolicvelocityFixedValueFvPatchVectorField
(
    const parabolicvelocityFixedValueFvPatchVectorField& ptf,
    const fvPatch& p,
    const DimensionedField<vector, volMesh>& iF,
    const fvPatchFieldMapper& mapper
)
:
    fixedValueFvPatchField<vector>(ptf, p, iF, mapper)
{
    if (false)
    {
        printMessage("Construct parabolicvelocity : patch/DimensionedField/mapper");
    }
}


parabolicvelocityFixedValueFvPatchVectorField::
parabolicvelocityFixedValueFvPatchVectorField
(
    const fvPatch& p,
    const DimensionedField<vector, volMesh>& iF,
    const dictionary& dict
)
:
    fixedValueFvPatchField<vector>(p, iF, dict)
{
    if (false)
    {
        printMessage("Construct parabolicvelocity : patch/dictionary");
    }
}


parabolicvelocityFixedValueFvPatchVectorField::
parabolicvelocityFixedValueFvPatchVectorField
(
    const parabolicvelocityFixedValueFvPatchVectorField& ptf
)
:
    fixedValueFvPatchField<vector>(ptf)
{
    if (false)
    {
        printMessage("Copy construct parabolicvelocity");
    }
}


parabolicvelocityFixedValueFvPatchVectorField::
parabolicvelocityFixedValueFvPatchVectorField
(
    const parabolicvelocityFixedValueFvPatchVectorField& ptf,
    const DimensionedField<vector, volMesh>& iF
)
:
    fixedValueFvPatchField<vector>(ptf, iF)
{
    if (false)
    {
        printMessage("Construct parabolicvelocity : copy/DimensionedField");
    }
}


// * * * * * * * * * * * * * * * * Destructor  * * * * * * * * * * * * * * * //

parabolicvelocityFixedValueFvPatchVectorField::
~parabolicvelocityFixedValueFvPatchVectorField()
{
    if (false)
    {
        printMessage("Destroy parabolicvelocity");
    }
}


// * * * * * * * * * * * * * * * Member Functions  * * * * * * * * * * * * * //

void parabolicvelocityFixedValueFvPatchVectorField::updateCoeffs()
{
    if (this->updated())
    {
        return;
    }

    if (false)
    {
        printMessage("updateCoeffs parabolicvelocity");
    }

//{{{ begin code
    #line 32 "/home/jarvisopenfoam/2dsimulation/upgradedpizzarelli/0/U.boundaryField.inlet"
scalar Umax = 12, h = 0.00425;
           const fvPatch& boundaryPatch = patch();
           vectorField& field = *this;
           forAll(boundaryPatch, faceI)
           {
            field[faceI] = vector(1.5*Umax*(1 - Foam::pow(boundaryPatch.Cf()[faceI].y()/h,2)),0,0);
           }
//}}} end code

    this->fixedValueFvPatchField<vector>::updateCoeffs();
}


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// ************************************************************************* //

