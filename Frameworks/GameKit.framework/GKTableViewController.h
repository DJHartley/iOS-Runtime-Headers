/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImageView, GKTableView, UIView;

@interface GKTableViewController : GKViewController <UITableViewDelegate, UITableViewDataSource> {
    unsigned int _pendingReload : 1;
    unsigned int _pendingAnimation : 1;
    int _tableViewStyle;
    BOOL _shouldDelayTableReloadForDeselectAnimation;
    BOOL _clearsSelectionOnViewWillAppear;
    GKTableView *_tableView;
    GKTableView *_portraitTableView;
    GKTableView *_landscapeTableView;
    UIView *_overlayTouchView;
    UIImageView *_bottomShadowView;
    BOOL _isInFormSheet;
    struct CGPoint { 
        float x; 
        float y; 
    } _portraitContentOffset;
    struct CGPoint { 
        float x; 
        float y; 
    } _landscapeContentOffset;
    float _previousBottomContentInset;
}

@property(retain) GKTableView * tableView;
@property(retain) GKTableView * portraitTableView;
@property(retain) GKTableView * landscapeTableView;
@property BOOL shouldDelayTableReloadForDeselectAnimation;
@property(readonly) int tableViewStyle;
@property BOOL clearsSelectionOnViewWillAppear;
@property BOOL isInFormSheet;
@property(retain) UIView * overlayTouchView;
@property(retain) UIImageView * bottomShadowView;
@property struct CGPoint { float x1; float x2; } portraitContentOffset;
@property struct CGPoint { float x1; float x2; } landscapeContentOffset;
@property float previousBottomContentInset;


- (void)dealloc;
- (void)setBottomShadowView:(id)arg1;
- (void)setShouldDelayTableReloadForDeselectAnimation:(BOOL)arg1;
- (void)removeTouchCaptureOverlayView;
- (id)addTouchCaptureOverlayViewWithTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)indexPath:(id)arg1 isValidForTableView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectToKeepVisibleAboveKeyboardWithinView:(id)arg1;
- (id)rootNavigationItem;
- (id)searchTitle;
- (id)contentsAtIndexPaths:(id)arg1 inTableView:(id)arg2;
- (void)setOverlayTouchView:(id)arg1;
- (id)overlayTouchView;
- (void)updateTableInsetsForKeyboardHeight:(float)arg1;
- (float)previousBottomContentInset;
- (void)setPreviousBottomContentInset:(float)arg1;
- (void)setStatusViewVisible:(BOOL)arg1;
- (void)prepareExpensiveVisibleContents;
- (void)reloadAllTables;
- (void)keyboardWillHideShow:(id)arg1;
- (BOOL)shouldAdjustInsetsForKeyboard;
- (BOOL)shouldDelayTableReloadForDeselectAnimation;
- (void)localeDidChangeNotification:(id)arg1;
- (id)landscapeTableView;
- (id)portraitTableView;
- (void)setLandscapeTableView:(id)arg1;
- (void)setPortraitTableView:(id)arg1;
- (void)setupViewsWithOrientation:(int)arg1;
- (void)animateViewsToOrientation:(int)arg1;
- (void)setPortraitContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setLandscapeContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateBottomShadowFrame;
- (struct CGPoint { float x1; float x2; })landscapeContentOffset;
- (struct CGPoint { float x1; float x2; })portraitContentOffset;
- (void)updateTableViewFrame:(id)arg1;
- (BOOL)usesCrossfade;
- (id)bottomShadowView;
- (BOOL)isInFormSheet;
- (void)reloadTableData;
- (id)_gkTableView:(id)arg1 buttonCellWithTitle:(id)arg2 theme:(id)arg3;
- (void)setIsInFormSheet:(BOOL)arg1;
- (void)setClearsSelectionOnViewWillAppear:(BOOL)arg1;
- (BOOL)clearsSelectionOnViewWillAppear;
- (int)tableViewStyle;
- (id)tableView;
- (id)initWithStyle:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)setTableView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

@end