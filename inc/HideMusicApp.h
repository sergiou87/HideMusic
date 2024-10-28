/*
 * ============================================================================
 *  Name     : CHideMusicApp from HideMusicApp.h
 *  Part of  : HideMusic
 *  Created  : 04/04/2005 by Sergio Padrino Recio
 *  Description:
 *     Declares main application class.
 *  Version  :
 *  Copyright: No hay xD
 * ============================================================================
 */

#ifndef HIDEMUSICAPP_H
#define HIDEMUSICAPP_H

// INCLUDES
#include <aknapp.h>

// CONSTANTS
// UID of the application
const TUid KUidHideMusic = {0x0481A49D};

// CLASS DECLARATION

/**
 * CHideMusicApp application class.
 * Provides factory to create concrete document object.
 *
 */
class CHideMusicApp : public CAknApplication
{

public: // Functions from base classes
private:
    /**
     * From CApaApplication, creates CHideMusicDocument document object.
     * @return A pointer to the created document object.
     */
    CApaDocument *CreateDocumentL();

    /**
     * From CApaApplication, returns application's UID (KUidHideMusic).
     * @return The value of KUidHideMusic.
     */
    TUid AppDllUid() const;
};

#endif

// End of File
