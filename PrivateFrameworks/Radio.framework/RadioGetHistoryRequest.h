/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSString, RadioPlayEvents, SSURLConnectionRequest;

@interface RadioGetHistoryRequest : RadioRequest {
    BOOL _aggregateSessions;
    BOOL _fetchForAccount;
    unsigned int _maxNumberOfTracks;
    RadioPlayEvents *_playEvents;
    SSURLConnectionRequest *_request;
    NSString *_stationHash;
    long long _stationID;
}

@property BOOL aggregateSessions;
@property BOOL fetchForAccount;
@property unsigned int maxNumberOfTracks;
@property(retain) RadioPlayEvents * playEvents;
@property(copy) NSString * stationHash;
@property long long stationID;

- (void).cxx_destruct;
- (BOOL)aggregateSessions;
- (void)cancel;
- (BOOL)fetchForAccount;
- (id)init;
- (unsigned int)maxNumberOfTracks;
- (id)playEvents;
- (void)setAggregateSessions:(BOOL)arg1;
- (void)setFetchForAccount:(BOOL)arg1;
- (void)setMaxNumberOfTracks:(unsigned int)arg1;
- (void)setPlayEvents:(id)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (void)startWithCompletionHandler:(id)arg1;
- (void)startWithHistoryCompletionHandler:(id)arg1;
- (id)stationHash;
- (long long)stationID;

@end
