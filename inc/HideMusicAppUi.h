/*
 * ============================================================================
 *  Name     : CHideMusicAppUi from HideMusicAppUi.h
 *  Part of  : HideMusic
 *  Created  : 04/04/2005 by Sergio Padrino Recio
 *  Description:
 *     Declares UI class for application.
 *  Version  :
 *  Copyright: No hay xD
 * ============================================================================
 */

#ifndef HIDEMUSICAPPUI_H
#define HIDEMUSICAPPUI_H

// INCLUDES
#include <eikapp.h>
#include <eikdoc.h>
#include <e32std.h>
#include <coeccntx.h>
#include <aknappui.h>

// FORWARD DECLARATIONS
class CHideMusicContainer;

// CONSTANTS
// const ?type ?constant_var = ?constant;

// CLASS DECLARATION

/**
 * Application UI class.
 * Provides support for the following features:
 * - EIKON control architecture
 *
 */
class CHideMusicAppUi : public CAknAppUi
{
public: // // Constructors and destructor
    /**
     * EPOC default constructor.
     */
    void ConstructL();

    /**
     * Destructor.
     */
    ~CHideMusicAppUi();

public: // New functions
public: // Functions from base classes
private:
    // From MEikMenuObserver
    void DynInitMenuPaneL(TInt aResourceId, CEikMenuPane *aMenuPane);

private:
    /**
     * From CEikAppUi, takes care of command handling.
     * @param aCommand command to be handled
     */
    void HandleCommandL(TInt aCommand);

    /**
     * From CEikAppUi, handles key events.
     * @param aKeyEvent Event to handled.
     * @param aType Type of the key event.
     * @return Response code (EKeyWasConsumed, EKeyWasNotConsumed).
     */
    virtual TKeyResponse HandleKeyEventL(
        const TKeyEvent &aKeyEvent, TEventCode aType);

private: // Data
    CHideMusicContainer *iAppContainer;
};

#endif

// End of File
