/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKGroupInfo, UIColor, EKCalendar;



@interface EKCalendarInfo : NSObject 
{
    EKCalendar *_calendar;
    UIColor *_color;
    BOOL _selected;
    EKGroupInfo *_group;
}

@property(retain) EKCalendar *calendar;
@property(copy,readonly) NSString *title;
@property(readonly) NSInteger displayOrder;
@property(readonly) BOOL isSubscribed;
@property EKGroupInfo *group;
@property BOOL selected;
@property(retain) UIColor *color;


- (void)setGroup:(id)arg1;
- (NSInteger)displayOrder;
- (BOOL)isSubscribed;
- (id)initWithCalendar:(id)arg1;
- (void)setCalendar:(id)arg1;
- (id)calendar;
- (BOOL)selected;
- (id)color;
- (id)group;
- (void)setColor:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (id)title;
- (void)dealloc;

@end