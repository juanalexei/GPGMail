/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSTextAttachmentCell.h"

@class AddressAttachment, NSMenu, NSMutableDictionary, NSUndoManager, NSView;

@interface AddressAttachmentCell : NSTextAttachmentCell
{
    AddressAttachment *_addressAttachment;
    struct CGRect _drawingRect;
    struct CGRect _hotSpot;
    struct CGRect _onlineHotSpot;
    NSMenu *_menu;
    unsigned long long _characterIndex;
    struct CGSize _cellSize;
    BOOL _isSpotlighted;
    BOOL _shouldTestForSpotlighting;
    BOOL _shouldShowComma;
    NSMutableDictionary *_textAttributesRegular;
    NSMutableDictionary *_textAttributesWhiteText;
    NSMutableDictionary *_textAttributesTruncatedRegular;
    NSMutableDictionary *_textAttributesTruncatedWhiteText;
    NSView *_containingView;
    NSUndoManager *_undoManager;
    double _maximumPosition;
    unsigned int _isSelected:1;
    unsigned int _leftSideHasSelection:1;
    unsigned int _rightSideHasSelectedText:1;
    unsigned int _rightSideHasSelectedAtom:1;
    unsigned int _overrideRightSideSelection:1;
    unsigned int _overrideLeftSideSelection:1;
    unsigned int _hideLeftSideMargin:1;
    unsigned int _subtractLeftSideMarginFromRightSide:1;
    unsigned int _menuIsVisible:1;
}

+ (void)initialize;
+ (void)_initOnlineIndicator;
+ (long long)sizeForCellOfType:(int)arg1 withAddress:(id)arg2;
+ (long long)sizeForCellOfType:(int)arg1 withAddress:(id)arg2 fontSize:(double)arg3;
+ (double)heightForAtomType:(int)arg1;
+ (BOOL)_isOnLineAddress:(id)arg1;
+ (void)_changePresenceImage;
- (id)initImageCell:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)addressAttachment;
- (void)setAttachment:(id)arg1;
- (void)dealloc;
@property double maximumPosition;
- (unsigned long long)characterIndex;
- (struct CGRect)drawingRect;
- (struct CGRect)visibleRect;
- (struct CGRect)_atomBoundsRectForCellFrame:(struct CGRect)arg1;
- (struct CGRect)atomBoundsRect;
- (id)dragImage;
- (id)_textAttributesWhiteText;
- (id)_textAttributesTruncatedWhiteText;
- (id)_textAttributesRegular;
- (id)_textAttributesTruncatedRegular;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)resetCursorAndToolTipRect:(struct CGRect)arg1 inView:(id)arg2;
- (id)menu;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)_isOnLine;
- (void)openChat:(id)arg1;
- (void)openNewMessage:(id)arg1;
- (void)addToAddressBook:(id)arg1;
- (void)_removeRecordFromAddressBook:(id)arg1 forRecent:(id)arg2;
- (void)openInAddressBook:(id)arg1;
- (void)openPersonCard:(id)arg1;
- (void)_createSmartMailbox:(id)arg1;
- (void)removeFromAddressHistory:(id)arg1;
- (void)changeAddress:(id)arg1;
- (void)copyAddressToClipboard:(id)arg1;
- (void)_searchInSpotlight:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (BOOL)rightSideHasSelectedText;
- (void)setRightSideHasSelectedText:(BOOL)arg1;
- (void)setRightSideHasSelectedAtom:(BOOL)arg1;
- (BOOL)leftSideHasSelection;
- (void)setLeftSideHasSelection:(BOOL)arg1;
- (void)setOverrideRightSideSelection:(BOOL)arg1;
- (void)setOverrideLeftSideSelection:(BOOL)arg1;
- (BOOL)isSpotlighted;
- (void)testSpotlighting;
- (void)setShouldShowComma:(BOOL)arg1;
- (BOOL)_shouldDrawCommaRightNow;
- (void)selectedAddressChanged;
- (void)_presenceImageChanged:(id)arg1;
- (void)fontChanged;
- (void)fontColorChanged;
- (void)sizeChanged;
- (void)addressBookRecordChanged;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (void)_drawAtomPartsWithRect:(struct CGRect)arg1 cellFrame:(struct CGRect)arg2;
- (void)_drawAtomWithRect:(struct CGRect)arg1 cellFrame:(struct CGRect)arg2 inView:(id)arg3;
- (struct CGPoint)_textDrawPointInRect:(struct CGRect)arg1 ofViewOrImage:(id)arg2;
- (struct CGSize)cellSize;
- (struct CGSize)_sizeOfString:(id)arg1;
- (struct CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (struct CGPoint)cellBaselineOffset;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4 untilMouseUp:(BOOL)arg5;
- (BOOL)wantsToTrackMouse;
- (BOOL)wantsToTrackMouseForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4;
- (BOOL)shouldBeSpotlightedInView:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_delayedMouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)_otherAtomBecameSpotlighted:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (void)_showMenu;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;

@end

