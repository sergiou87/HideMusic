/*
 * ============================================================================
 *  Name     : CHideMusicDocument from HideMusicDocument.h
 *  Part of  : HideMusic
 *  Created  : 04/04/2005 by Sergio Padrino Recio
 *  Description:
 *     Declares document for application.
 *  Version  :
 *  Copyright: No hay xD
 * ============================================================================
 */

#ifndef HIDEMUSICDOCUMENT_H
#define HIDEMUSICDOCUMENT_H

// INCLUDES
#include <akndoc.h>

// CONSTANTS

// FORWARD DECLARATIONS
class CEikAppUi;

// CLASS DECLARATION

/**
 *  CHideMusicDocument application class.
 */
class CHideMusicDocument : public CAknDocument
{
public: // Constructors and destructor
    /**
     * Two-phased constructor.
     */
    static CHideMusicDocument *NewL(CEikApplication &aApp);

    /**
     * Destructor.
     */
    virtual ~CHideMusicDocument();

public:    // New functions
protected: // New functions
protected: // Functions from base classes
private:
    /**
     * EPOC default constructor.
     */
    CHideMusicDocument(CEikApplication &aApp);
    void ConstructL();

private:
    /**
     * From CEikDocument, create CHideMusicAppUi "App UI" object.
     */
    CEikAppUi *CreateAppUiL();
};

#endif

// End of File
