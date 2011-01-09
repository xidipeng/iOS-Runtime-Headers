/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIView, NSMutableArray, NSOperationQueue, CKConversation, UIToolbar, CKTranscriptBubbleData, CKMessageEntryView, ABPeoplePickerNavigationController, UIFrameAnimation, UIKeyboard, CKRecipientListView, UINavigationItem, CKRecipientGenerator, UINavigationController, CKRecipientSelectionView, PLPhotoScrollerViewController, CKMessage, NSArray, NSDictionary, CKService, CKLinksController, CKMessageComposition, CKContentOffsetAnimation, CKTranscriptTableView, CKTranscriptStatusController, UIBarButtonItem;



@interface CKTranscriptController : UIViewController <UIActionSheetDelegate, UIModalViewDelegate, UITableViewDataSource, UITableViewDelegate, ABPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABUnknownPersonViewControllerDelegate, ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate>
{
    CKConversation *_conversation;
    UINavigationController *_navigationController;
    UINavigationItem *_navItem;
    CKTranscriptStatusController *_statusBar;
    UIBarButtonItem *_actionItem;
    UIBarButtonItem *_clearAllItem;
    UIView *_backPlacard;
    CKTranscriptTableView *_transcriptTable;
    CKRecipientListView *_recipientListView;
    CKRecipientSelectionView *_recipientSelectionView;
    CKMessageEntryView *_entryView;
    PLPhotoScrollerViewController *_photoScrollerForActionSheet;
    CKTranscriptBubbleData *_bubbleInfo;
    id _lastMessage;
    id _composeDelegate;
    NSMutableArray *_outboundMessageLayers;
    NSMutableArray *_replacementMessageLayers;
    NSMutableArray *_throwAnimations;
    NSInteger _finishedThrows;
    NSMutableArray *_bubblizationAnimations;
    NSInteger _finishedBubbs;
    CKMessage *_messageToThrow;
    CKMessage *_smartForwardMessage;
    NSMutableArray *_recipients;
    NSArray *_newCompositionAddresses;
    CKMessageComposition *_newComposition;
    CKContentOffsetAnimation *_transcriptAnimation;
    UIFrameAnimation *_messageEntryViewAnimation;
    NSUInteger _rotationBlockingAnimationCount;
    unsigned int _needsSetupForNewRecipient : 1;
    unsigned int _dirty : 1;
    unsigned int _locked : 1;
    unsigned int _visible : 1;
    unsigned int _viewNeedsSetup : 1;
    unsigned int _newRecipient : 1;
    unsigned int _rescroll : 1;
    unsigned int _sending : 1;
    unsigned int _recipientListShouldBeExpanded : 1;
    unsigned int _transitioningToTranscript : 1;
    unsigned int _entryViewCanAcceptFocus : 1;
    unsigned int _keyboardLayerOnScreen : 1;
    unsigned int _willRotateView : 1;
    unsigned int _isAnimatingMessageSend : 1;
    unsigned int _isDeleting : 1;
    unsigned int _ignoresOverlayViewsForLayout : 1;
    unsigned int _didCancel : 1;
    CKService *_currentService;
    CKRecipientGenerator *_recipientGenerator;
    NSDictionary *_abPropertiesCache;
    ABPeoplePickerNavigationController *_peoplePickerController;
    CKLinksController *_linkViewController;
    UIToolbar *_actionsToolbar;
    NSOperationQueue *_mediaPreviewQueue;
    UIKeyboard *_keyboardLayer;
    float _transcriptTableBottomOffset;
}

@property id composeDelegate; /* unknown property attribute: V_composeDelegate */
@property(retain) CKMessage *smartForwardMessage; /* unknown property attribute: V_smartForwardMessage */
@property(retain) CKMessage *messageToThrow; /* unknown property attribute: V_messageToThrow */
@property CKService *currentService; /* unknown property attribute: V_currentService */

+ (id)tableColor;
+ (void)_sendDidStartSavingImageNotification;
+ (void)_sendDidFinishSavingImageNotificationWithImage:(id)arg1 error:(id)arg2 context:(void*)arg3;

- (id)initWithNavigationController:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (BOOL)_canReloadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; float x5; NSInteger x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_8_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_8_1_2; } x8; }*)arg1;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (id)rotatingFooterView;
- (void)_screenLocked:(id)arg1;
- (void)_screenUnlocked:(id)arg1;
- (void)conversationUpdate:(id)arg1;
- (void)_stopEntryViewAnimation:(BOOL)arg1;
- (void)_stopTranscriptAnimation:(BOOL)arg1;
- (void)_stopThrowAnimations:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })bestVisibleOffsetForBubbleAtIndex:(NSInteger)arg1;
- (void)scrollBubbleIndexToVisible:(NSInteger)arg1;
- (void)setConversation:(id)arg1;
- (void)_reloadTranscriptLayer;
- (void)reload:(BOOL)arg1;
- (id)conversation;
- (void)_setupRecipientSelectionView;
- (void)updateEnablednessOfSendButton;
- (void)_adjustMessageEntryViewOriginDelta:(float)arg1 heightDelta:(float)arg2 animate:(BOOL)arg3 animationLength:(float)arg4 fastAnimate:(BOOL)arg5;
- (void)_adjustTranscriptContentOffset:(struct CGPoint { float x1; float x2; })arg1 animate:(BOOL)arg2 animationLength:(float)arg3 fastAnimate:(BOOL)arg4;
- (BOOL)isSendingMessage;
- (id)entryView;
- (void)_resetTranscriptAndKeyboard;
- (void)_cancelMessageSendAnimations;
- (void)_setupViewForConversation;
- (void)moveCursorToEnd;
- (void)updateTitle;
- (id)actionItem;
- (id)clearAllItem;
- (void)updateNavigationButtons;
- (void)cancelButtonClicked:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (struct CGPoint { float x1; float x2; })tableView:(id)arg1 newContentOffsetAfterUpdate:(struct CGPoint { float x1; float x2; })arg2 context:(id)arg3;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)_deleteSelectedMessages:(id)arg1;
- (void)_deleteMessagesAtIndexPaths:(id)arg1;
- (void)_forwardSelectedMessages:(id)arg1;
- (void)actionButtonClicked:(id)arg1;
- (void)clearButtonClicked:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)restoreEntryViewCursor;
- (void)_setupTranscriptHeader;
- (void)_clearExpandRecipientListFlag;
- (void)_loadMore;
- (void)_showTranscriptButtons;
- (void)_hideAccessoryView;
- (void)_hideTranscriptButtons;
- (id)bubbleData;
- (void)_computeBubbleData;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })addOutboundMessage:(id)arg1;
- (NSInteger)numberOfRows;
- (void)cleanUpAfterSendAttempt;
- (void)_incrementRotationBlockingAnimationCount;
- (void)_decrementRotationBlockingAnimationCount;
- (void)animator:(id)arg1 startAnimation:(id)arg2;
- (void)animator:(id)arg1 stopAnimation:(id)arg2;
- (struct CGPoint { float x1; float x2; })_transcriptScrollToBottomOffsetWithHeightDelta:(float)arg1;
- (void)transitionFromNewMessageToConversation;
- (void)throwOutboundMessageToTable:(id)arg1;
- (void)bubbilizationFinished:(id)arg1 forAnimation:(id)arg2;
- (float)_topPaddingForBubbleRow:(NSInteger)arg1;
- (float)_bottomPaddingForBubbleRow:(NSInteger)arg1;
- (float)_topPaddingForRow:(NSInteger)arg1 forEditing:(BOOL)arg2;
- (void)didBeginSendingComposition:(id)arg1 message:(id)arg2;
- (void)displayAlertSheet:(id)arg1;
- (void)dismissAlertSheet:(id)arg1;
- (void)clearCurrentMessageThread;
- (void)sendMessage:(id)arg1;
- (void)messageCellTappedBalloon:(id)arg1;
- (void)messageCellTappedFailureButton:(id)arg1;
- (void)_finishedCreatingNewMessageForSending:(id)arg1;
- (void)_startCreatingNewMessageForSending:(id)arg1;
- (void)send:(id)arg1;
- (void)_shrinkRecipientList;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })entryViewFinalFrame;
- (void)entryFieldDidBecomeActive:(id)arg1;
- (BOOL)entryFieldShouldBecomeActive:(id)arg1;
- (void)entryFieldAttachmentsChanged:(id)arg1;
- (void)entryFieldContentChanged:(id)arg1;
- (void)entryFieldSubjectChanged:(id)arg1;
- (BOOL)entryField:(id)arg1 shouldInsertMediaObject:(id)arg2;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (BOOL)messageEntryView:(id)arg1 contentSizeChanged:(struct CGSize { float x1; float x2; })arg2 animate:(BOOL)arg3;
- (id)composition;
- (void)clearComposition;
- (void)setMessageParts:(id)arg1;
- (void)setComposition:(id)arg1;
- (void)findConversationForRecipients:(id)arg1;
- (id)recipients;
- (id)proposedRecipients;
- (void)setNewComposition:(id)arg1 addresses:(id)arg2;
- (void)_setupNewComposition;
- (void)setupForNewRecipient;
- (BOOL)isNewRecipient;
- (void)addRecipient:(void*)arg1 identifier:(NSInteger)arg2 phoneNumber:(id)arg3 makingContentEntryViewActive:(BOOL)arg4;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)CKTranscriptHeaderView:(id)arg1 buttonClicked:(NSInteger)arg2;
- (void)_resendMessageAtIndexPath:(id)arg1;
- (void)alertSheet:(id)arg1 buttonClicked:(NSInteger)arg2;
- (void)_actuallyClearCurrentMessageThread;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (BOOL)_editableAtIndexPath:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)_disclosureSupportsMediaType:(NSInteger)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)_abPersonViewControllerForPerson:(void*)arg1 property:(NSInteger)arg2 withIdentifier:(NSInteger)arg3;
- (void)_displayABPersonViewController:(id)arg1;
- (void)showABCardForPerson:(void*)arg1 highlightedProperty:(NSInteger)arg2 identifier:(NSInteger)arg3;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;
- (void)_updateUI;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (id)_unknownPersonViewControllerForProps:(id)arg1;
- (id)_personViewControllerForProps:(id)arg1;
- (void)showABCardForLinkProperties:(id)arg1;
- (void)showURLsForMessage:(id)arg1;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(NSInteger*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldDismissAfterInsertEditorConfirmed:(BOOL)arg2 withPerson:(void*)arg3;
- (void)dismissPeoplePicker:(id)arg1;
- (void)dismissPeoplePicker;
- (void)showPeoplePickerWithDelegate:(id)arg1;
- (void)transcriptController:(id)arg1 showPeoplePickerWithDelegate:(id)arg2;
- (void)tearDownPeoplePicker;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationController:(id)arg1 displayedMembersOfGroup:(void*)arg2;
- (void)peoplePickerNavigationControllerDisplayedGroups:(id)arg1;
- (void*)_createPersonWithValue:(struct __CFString { }*)arg1 forMultiValueProperty:(NSInteger)arg2;
- (void)showNewContactViewForEntity:(id)arg1;
- (void)showAddToExistingContactViewForEntity:(id)arg1;
- (id)navigationItem;
- (void)_setEntryViewVisible:(BOOL)arg1;
- (id)transcriptTable;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clippedTargetRectForBalloon:(id)arg1;
- (void)linksController:(id)arg1 showABCardForLinkProperties:(id)arg2;
- (void)recipientListView:(id)arg1 addressAtomClicked:(id)arg2;
- (void)recipientListView:(id)arg1 contentSizeDidChange:(struct CGSize { float x1; float x2; })arg2;
- (void)recipientSelectionView:(id)arg1 contentSizeChanged:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)recipientSelectionView:(id)arg1 isValidAddress:(id)arg2;
- (void)recipientSelectionViewTextChanged:(id)arg1;
- (void)recipientSelectionViewRecipientListChanged:(id)arg1;
- (void)recipientSelectionView:(id)arg1 showPeoplePickerWithDelegate:(id)arg2;
- (void)recipientSelectionViewFinishedWithPeoplePicker:(id)arg1;
- (id)recipientSelectionView:(id)arg1 recipientForAddress:(id)arg2;
- (id)recipientSelectionView:(id)arg1 recipientForRecord:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (id)recipientSelectionView:(id)arg1 recipientsForText:(id)arg2;
- (void)transcriptStatusBar:(id)arg1 showNavBarTitle:(id)arg2;
- (void)transcriptStatusBar:(id)arg1 showNavBarCustomView:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)_recipientGenerator;
- (id)_actionsToolbar;
- (void)_updateActionsToolbarItems;
- (void)_updateActionsToolbarItemsForRotation:(NSInteger)arg1;
- (void)_makeContentEntryViewActive;
- (void)_makeRecipientEntryViewActive;
- (void)_makeFieldForFocusActive;
- (id)_fieldForFocus;
- (void)_deactivateContentEntryView;
- (void)_resetEntryViewSize;
- (void)_updatePhotoButtonEnabled;
- (void)_refreshKeyboardAndAdjustFocus:(BOOL)arg1;
- (void)_hideKeyboard;
- (void)_hideKeyboardAndDeactivateContent:(BOOL)arg1;
- (void)_showKeyboard:(BOOL)arg1;
- (void)_showKeyboard:(BOOL)arg1 activateContent:(BOOL)arg2;
- (float)_maxHeightForOverlayView:(id)arg1 entryViewResize:(NSInteger)arg2;
- (float)_overlayViewMinHeight;
- (id)_overlayView;
- (void)_showRecipientListView;
- (void)_hideRecipientListView;
- (void)_updateRecipientListView;
- (void)_synchronizeStatusBarStyle:(BOOL)arg1;
- (id)_statusBar;
- (void)_adjustCustomTitleViewFrame:(NSInteger)arg1;
- (void)_refreshTranscript;
- (void)_refreshTranscript:(BOOL)arg1;
- (void)_resetTranscriptInsets;
- (void)_calculateTopVisibleRow:(NSInteger*)arg1 andOffset:(float*)arg2 forTransitionToEditing:(BOOL)arg3;
- (struct CGPoint { float x1; float x2; })_offsetForRow:(NSInteger)arg1 withInternalOffset:(float)arg2;
- (float)_maximumContentOffset;
- (id)composeDelegate;
- (void)setComposeDelegate:(id)arg1;
- (id)smartForwardMessage;
- (void)setSmartForwardMessage:(id)arg1;
- (id)messageToThrow;
- (void)setMessageToThrow:(id)arg1;
- (id)currentService;
- (void)setCurrentService:(id)arg1;
- (void)_setupMediaEntryViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)addMedia:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)_showMediaSourceSelectionSheet;
- (void)_showPhotoPickerWithSourceType:(NSUInteger)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)_addPreviewGeneratorObject:(id)arg1;
- (void)_generatePreviewsForMediaObject:(id)arg1;
- (void)_addPart:(id)arg1;
- (void)ckMediaPreviewGeneratorFinished:(id)arg1;
- (void)_showPhotoScrollerForTranscriptStartingAtRow:(NSInteger)arg1;
- (BOOL)photoScrollerShouldShowActionItem:(id)arg1;
- (void)photoScroller:(id)arg1 showActionSheetInView:(id)arg2;
- (void)_showMediaForTranscriptStartingAtRow:(NSInteger)arg1;
- (void)_showVCardViewerForRow:(NSInteger)arg1;
- (void)_showVCalViewerForRow:(NSInteger)arg1;
- (id)_supportedMediaTypesForPhotoPicker;
- (void)entryDebugClear;
- (void)entryDebugSliderChange:(id)arg1;
- (void)_entryDebugShowEntryHUD;

@end