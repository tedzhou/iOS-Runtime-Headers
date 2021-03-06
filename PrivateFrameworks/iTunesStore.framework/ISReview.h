/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString, NSURL;

@interface ISReview : NSObject <NSCoding, NSCopying> {
    int _assetType;
    NSString *_body;
    unsigned int _bodyMaxLength;
    NSURL *_infoURL;
    unsigned long long _itemIdentifier;
    NSString *_nickname;
    BOOL _nicknameIsConfirmed;
    unsigned int _nicknameMaxLength;
    float _rating;
    NSURL *_submitURL;
    NSString *_title;
    unsigned int _titleMaxLength;
}

@property int assetType;
@property(retain) NSString * body;
@property unsigned int bodyMaxLength;
@property(readonly) BOOL hasSavedDraft;
@property(retain) NSURL * infoURL;
@property unsigned long long itemIdentifier;
@property(retain) NSString * nickname;
@property BOOL nicknameIsConfirmed;
@property unsigned int nicknameMaxLength;
@property float rating;
@property(retain) NSURL * submitURL;
@property(retain) NSString * title;
@property unsigned int titleMaxLength;

- (id)_draftFileName;
- (id)_draftsDirectoryPath;
- (int)assetType;
- (id)body;
- (unsigned int)bodyMaxLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasSavedDraft;
- (id)infoURL;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)itemIdentifier;
- (void)loadFromDictionary:(id)arg1;
- (void)mergeWithReview:(id)arg1 preferLocalValues:(BOOL)arg2;
- (id)nickname;
- (BOOL)nicknameIsConfirmed;
- (unsigned int)nicknameMaxLength;
- (float)rating;
- (BOOL)removeDraft;
- (BOOL)restoreFromDraft;
- (BOOL)saveAsDraft;
- (void)setAssetType:(int)arg1;
- (void)setBody:(id)arg1;
- (void)setBodyMaxLength:(unsigned int)arg1;
- (void)setInfoURL:(id)arg1;
- (void)setItemIdentifier:(unsigned long long)arg1;
- (void)setNickname:(id)arg1;
- (void)setNicknameIsConfirmed:(BOOL)arg1;
- (void)setNicknameMaxLength:(unsigned int)arg1;
- (void)setRating:(float)arg1;
- (void)setSubmitURL:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleMaxLength:(unsigned int)arg1;
- (id)submitURL;
- (id)title;
- (unsigned int)titleMaxLength;

@end
