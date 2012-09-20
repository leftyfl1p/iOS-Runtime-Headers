/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface VKAnimation : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _stepHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _timingFunction;

    double _duration;
    double _startTimestamp;
    double _pauseTimestamp;
    struct { 
        unsigned int runsForever : 1; 
        unsigned int startTimestampSet : 1; 
        unsigned int pauseTimestampSet : 1; 
        unsigned int completed : 1; 
        unsigned int state : 2; 
    } _flags;
    NSString *_name;
    int _priority;
}

@property double duration;
@property(copy) id timingFunction;
@property(readonly) BOOL running;
@property BOOL runsForever;
@property(readonly) int priority;


- (void)resume;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)pause;
- (void)stop;
- (id)initWithPriority:(int)arg1;
- (int)priority;
- (void)setTimingFunction:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id)initWithName:(id)arg1;
- (id)timingFunction;
- (id)initWithPriority:(int)arg1 name:(id)arg2;
- (id)initWithDuration:(double)arg1 priority:(int)arg2 name:(id)arg3;
- (BOOL)runsForever;
- (void)setRunsForever:(BOOL)arg1;
- (void)_stopAnimation:(BOOL)arg1;
- (id)initWithDuration:(double)arg1 name:(id)arg2;
- (void)startWithStepHandler:(id)arg1 completionHandler:(id)arg2;
- (BOOL)running;
- (void)onTimerFired:(double)arg1;
- (id)initWithDuration:(double)arg1;

@end