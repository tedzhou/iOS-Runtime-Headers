/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSObject<OS_dispatch_queue>, NSString, SSPersistentCache, SSSQLiteDatabase;

@interface SSDatabaseCache : NSObject {
    Class _cacheEntryClass;
    NSString *_cacheName;
    SSSQLiteDatabase *_database;
    NSString *_identifier;
    unsigned int _maximumInlineBlobSize;
    NSString *_path;
    SSPersistentCache *_persistentCache;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property unsigned int maximumInlineBlobSize;

- (BOOL)_setupDatabase;
- (id)cacheEntryForLookupKey:(id)arg1;
- (id)cacheEntryProperties:(id)arg1 forLookupKeys:(id)arg2;
- (void)clear;
- (void)clearCacheForLookupKey:(id)arg1;
- (int)clearRetiredData;
- (void)dealloc;
- (id)description;
- (id)initWithIdentifier:(id)arg1 cacheName:(id)arg2 database:(id)arg3 cacheEntryClass:(Class)arg4;
- (id)initWithIdentifier:(id)arg1 cacheName:(id)arg2;
- (unsigned int)maximumInlineBlobSize;
- (id)setData:(id)arg1 expiring:(double)arg2 retiring:(double)arg3 lookupKey:(id)arg4 userInfo:(id)arg5;
- (void)setMaximumInlineBlobSize:(unsigned int)arg1;
- (id)statistics;

@end
