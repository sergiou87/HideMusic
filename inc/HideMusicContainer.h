/*
 * ============================================================================
 *  Name     : CHideMusicContainer from HideMusicContainer.h
 *  Part of  : HideMusic
 *  Created  : 04/04/2005 by Sergio Padrino Recio
 *  Description:
 *     Declares container control for application.
 *  Version  :
 *  Copyright: No hay xD
 * ============================================================================
 */

#ifndef HIDEMUSICCONTAINER_H
#define HIDEMUSICCONTAINER_H

// INCLUDES
#include <coecntrl.h>

// FORWARD DECLARATIONS

// CLASS DECLARATION
class CAknSingleGraphicStyleListBox;

/**
 *  CHideMusicContainer  container control class.
 *
 */
class CHideMusicContainer : public CCoeControl, MCoeControlObserver
{
public: // Constructors and destructor
    /**
     * EPOC default constructor.
     * @param aRect Frame rectangle for container.
     */
    void ConstructL(const TRect &aRect);

    /**
     * Destructor.
     */
    ~CHideMusicContainer();

public:  // New functions
public:  // Functions from base classes
private: // Functions from base classes
         /**
          * From CoeControl,SizeChanged.
          */
    void SizeChanged();

    /**
     * From CoeControl,CountComponentControls.
     */
    TInt CountComponentControls() const;

    /**
     * From CCoeControl,ComponentControl.
     */
    CCoeControl *ComponentControl(TInt aIndex) const;

    /**
     * From CCoeControl,Draw.
     */
    void Draw(const TRect &aRect) const;

    /**
     * From ?base_class ?member_description
     */
    // event handling section
    // e.g Listbox events
    void HandleControlEventL(CCoeControl *aControl, TCoeEvent aEventType);

public: // data
    CAknSingleGraphicStyleListBox *iDirList;

    void HideUnmarkedDirs();
    void MarkAllDirs();
    void UnmarkAllDirs();
    void InvertSelection();
};

#endif

// End of File
