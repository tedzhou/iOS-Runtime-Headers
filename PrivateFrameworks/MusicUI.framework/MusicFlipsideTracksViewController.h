/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class MPAVItem, MPMediaItem, MusicFlipsideAlbumDetailHeaderView, UISegmentedControl, UIView;

@interface MusicFlipsideTracksViewController : UIViewController <MPURatingControlDelegate> {
    UIView *_container;
    MPAVItem *_currentAVItem;
    MPMediaItem *_currentMediaItem;
    BOOL _hasPlaylist;
    UISegmentedControl *_segmentedControl;
    BOOL _showingRating;
    MusicFlipsideAlbumDetailHeaderView *_trackInfoView;
}

@property BOOL hasPlaylist;

+ (BOOL)_shouldDisplayActions;

- (void).cxx_destruct;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_performDone:(id)arg1;
- (void)_performRating:(id)arg1;
- (void)_selectedSegmentDidChange:(id)arg1;
- (void)_setShowingRating:(BOOL)arg1;
- (void)_updateMediaItem;
- (id)contentScrollView;
- (void)dealloc;
- (BOOL)hasPlaylist;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)ratingDidChangeForRatingControl:(id)arg1;
- (void)setHasPlaylist:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end