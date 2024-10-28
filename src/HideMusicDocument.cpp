/*
 * ============================================================================
 *  Name     : CHideMusicDocument from HideMusicDocument.h
 *  Part of  : HideMusic
 *  Created  : 04/04/2005 by Sergio Padrino Recio
 *  Implementation notes:
 *     Initial content was generated by Series 60 AppWizard.
 *  Version  :
 *  Copyright: No hay xD
 * ============================================================================
 */

// INCLUDE FILES
#include "HideMusicDocument.h"
#include "HideMusicAppUi.h"

// ================= MEMBER FUNCTIONS =======================

// constructor
CHideMusicDocument::CHideMusicDocument(CEikApplication &aApp)
    : CAknDocument(aApp)
{
}

// destructor
CHideMusicDocument::~CHideMusicDocument()
{
}

// EPOC default constructor can leave.
void CHideMusicDocument::ConstructL()
{
}

// Two-phased constructor.
CHideMusicDocument *CHideMusicDocument::NewL(
    CEikApplication &aApp) // CHideMusicApp reference
{
    CHideMusicDocument *self = new (ELeave) CHideMusicDocument(aApp);
    CleanupStack::PushL(self);
    self->ConstructL();
    CleanupStack::Pop();

    return self;
}

// ----------------------------------------------------
// CHideMusicDocument::CreateAppUiL()
// constructs CHideMusicAppUi
// ----------------------------------------------------
//
CEikAppUi *CHideMusicDocument::CreateAppUiL()
{
    return new (ELeave) CHideMusicAppUi;
}

// End of File
