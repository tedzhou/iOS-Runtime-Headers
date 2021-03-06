/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class <PCInterfaceUsabilityMonitorDelegate>, CUTWeakReference, NSMutableArray, NSString;

@interface PCNonCellularUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate> {
    struct dispatch_queue_s { } *_delegateQueue;
    CUTWeakReference *_delegateReference;
    NSString *_demoOverrideInterface;
    NSMutableArray *_interfaceMonitors;
    struct dispatch_queue_s { } *_ivarQueue;
    struct dispatch_queue_s { } *_monitorDelegateQueue;
    int _previousLinkQuality;
    unsigned int _thresholdOffTransitionCount;
    BOOL _trackUsability;
    double _trackedTimeInterval;
}

@property(readonly) struct __CFString { }* currentRAT;
@property <PCInterfaceUsabilityMonitorDelegate> * delegate;
@property(readonly) int interfaceIdentifier;
@property(readonly) BOOL isInterfaceHistoricallyUsable;
@property(readonly) BOOL isInterfaceUsable;
@property(readonly) BOOL isInternetReachable;
@property(readonly) BOOL isLTEWithCDRX;
@property(readonly) BOOL isPoorLinkQuality;
@property(readonly) BOOL isRadioHot;
@property(readonly) int linkQuality;
@property(readonly) NSString * linkQualityString;

- (void)_addMonitorWithInterfaceName:(id)arg1;
- (void)_callDelegateOnIvarQueueWithBlock:(id)arg1;
- (void)_forwardConfigurationOnIvarQueue;
- (int)_linkQualityOnIvarQueue;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegateQueue:(struct dispatch_queue_s { }*)arg1;
- (int)interfaceIdentifier;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceReachabilityChanged:(id)arg1;
- (BOOL)isInterfaceHistoricallyUsable;
- (BOOL)isInterfaceUsable;
- (BOOL)isInternetReachable;
- (BOOL)isPoorLinkQuality;
- (BOOL)isRadioHot;
- (int)linkQuality;
- (id)linkQualityString;
- (void)setDelegate:(id)arg1;
- (void)setThresholdOffTransitionCount:(unsigned int)arg1;
- (void)setTrackUsability:(BOOL)arg1;
- (void)setTrackedTimeInterval:(double)arg1;

@end
