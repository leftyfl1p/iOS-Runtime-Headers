/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSMutableArray;

@interface AWDPowerDisplayBacklightMetrics : PBCodable <NSCopying> {
    unsigned int _alsAutoBrightnessChangeCount;
    int _alsAutoBrightnessCurveE0A;
    int _alsAutoBrightnessCurveE0B;
    int _alsAutoBrightnessCurveE1;
    int _alsAutoBrightnessCurveE2;
    int _alsAutoBrightnessCurveEdynth;
    int _alsAutoBrightnessCurveL0A;
    int _alsAutoBrightnessCurveL0B;
    int _alsAutoBrightnessCurveL1;
    int _alsAutoBrightnessCurveL2;
    unsigned int _alsAutoBrightnessLux;
    unsigned int _alsAutoBrightnessSlider;
    unsigned int _alsBrightnessEnableCnt;
    NSMutableArray *_backlightBuckets;
    unsigned int _dispOnCount;
    unsigned int _displayIdlePercentage;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int alsAutoBrightnessChangeCount : 1; 
        unsigned int alsAutoBrightnessCurveE0A : 1; 
        unsigned int alsAutoBrightnessCurveE0B : 1; 
        unsigned int alsAutoBrightnessCurveE1 : 1; 
        unsigned int alsAutoBrightnessCurveE2 : 1; 
        unsigned int alsAutoBrightnessCurveEdynth : 1; 
        unsigned int alsAutoBrightnessCurveL0A : 1; 
        unsigned int alsAutoBrightnessCurveL0B : 1; 
        unsigned int alsAutoBrightnessCurveL1 : 1; 
        unsigned int alsAutoBrightnessCurveL2 : 1; 
        unsigned int alsAutoBrightnessLux : 1; 
        unsigned int alsAutoBrightnessSlider : 1; 
        unsigned int alsBrightnessEnableCnt : 1; 
        unsigned int dispOnCount : 1; 
        unsigned int displayIdlePercentage : 1; 
        unsigned int mieCount : 1; 
        unsigned int mieDuration : 1; 
        unsigned int pluggedDisplayOnDuration : 1; 
        unsigned int totalBacklightPower : 1; 
        unsigned int totalDisplayPower : 1; 
        unsigned int unpluggedDisplayOnDuration : 1; 
    } _has;
    unsigned int _mieCount;
    unsigned int _mieDuration;
    unsigned int _pluggedDisplayOnDuration;
    unsigned long long _timestamp;
    unsigned int _totalBacklightPower;
    unsigned int _totalDisplayPower;
    unsigned int _unpluggedDisplayOnDuration;
}

@property unsigned int alsAutoBrightnessChangeCount;
@property int alsAutoBrightnessCurveE0A;
@property int alsAutoBrightnessCurveE0B;
@property int alsAutoBrightnessCurveE1;
@property int alsAutoBrightnessCurveE2;
@property int alsAutoBrightnessCurveEdynth;
@property int alsAutoBrightnessCurveL0A;
@property int alsAutoBrightnessCurveL0B;
@property int alsAutoBrightnessCurveL1;
@property int alsAutoBrightnessCurveL2;
@property unsigned int alsAutoBrightnessLux;
@property unsigned int alsAutoBrightnessSlider;
@property unsigned int alsBrightnessEnableCnt;
@property(retain) NSMutableArray * backlightBuckets;
@property unsigned int dispOnCount;
@property unsigned int displayIdlePercentage;
@property BOOL hasAlsAutoBrightnessChangeCount;
@property BOOL hasAlsAutoBrightnessCurveE0A;
@property BOOL hasAlsAutoBrightnessCurveE0B;
@property BOOL hasAlsAutoBrightnessCurveE1;
@property BOOL hasAlsAutoBrightnessCurveE2;
@property BOOL hasAlsAutoBrightnessCurveEdynth;
@property BOOL hasAlsAutoBrightnessCurveL0A;
@property BOOL hasAlsAutoBrightnessCurveL0B;
@property BOOL hasAlsAutoBrightnessCurveL1;
@property BOOL hasAlsAutoBrightnessCurveL2;
@property BOOL hasAlsAutoBrightnessLux;
@property BOOL hasAlsAutoBrightnessSlider;
@property BOOL hasAlsBrightnessEnableCnt;
@property BOOL hasDispOnCount;
@property BOOL hasDisplayIdlePercentage;
@property BOOL hasMieCount;
@property BOOL hasMieDuration;
@property BOOL hasPluggedDisplayOnDuration;
@property BOOL hasTimestamp;
@property BOOL hasTotalBacklightPower;
@property BOOL hasTotalDisplayPower;
@property BOOL hasUnpluggedDisplayOnDuration;
@property unsigned int mieCount;
@property unsigned int mieDuration;
@property unsigned int pluggedDisplayOnDuration;
@property unsigned long long timestamp;
@property unsigned int totalBacklightPower;
@property unsigned int totalDisplayPower;
@property unsigned int unpluggedDisplayOnDuration;

- (void)addBacklightBucket:(id)arg1;
- (unsigned int)alsAutoBrightnessChangeCount;
- (int)alsAutoBrightnessCurveE0A;
- (int)alsAutoBrightnessCurveE0B;
- (int)alsAutoBrightnessCurveE1;
- (int)alsAutoBrightnessCurveE2;
- (int)alsAutoBrightnessCurveEdynth;
- (int)alsAutoBrightnessCurveL0A;
- (int)alsAutoBrightnessCurveL0B;
- (int)alsAutoBrightnessCurveL1;
- (int)alsAutoBrightnessCurveL2;
- (unsigned int)alsAutoBrightnessLux;
- (unsigned int)alsAutoBrightnessSlider;
- (unsigned int)alsBrightnessEnableCnt;
- (id)backlightBucketAtIndex:(unsigned int)arg1;
- (id)backlightBuckets;
- (unsigned int)backlightBucketsCount;
- (void)clearBacklightBuckets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)dispOnCount;
- (unsigned int)displayIdlePercentage;
- (BOOL)hasAlsAutoBrightnessChangeCount;
- (BOOL)hasAlsAutoBrightnessCurveE0A;
- (BOOL)hasAlsAutoBrightnessCurveE0B;
- (BOOL)hasAlsAutoBrightnessCurveE1;
- (BOOL)hasAlsAutoBrightnessCurveE2;
- (BOOL)hasAlsAutoBrightnessCurveEdynth;
- (BOOL)hasAlsAutoBrightnessCurveL0A;
- (BOOL)hasAlsAutoBrightnessCurveL0B;
- (BOOL)hasAlsAutoBrightnessCurveL1;
- (BOOL)hasAlsAutoBrightnessCurveL2;
- (BOOL)hasAlsAutoBrightnessLux;
- (BOOL)hasAlsAutoBrightnessSlider;
- (BOOL)hasAlsBrightnessEnableCnt;
- (BOOL)hasDispOnCount;
- (BOOL)hasDisplayIdlePercentage;
- (BOOL)hasMieCount;
- (BOOL)hasMieDuration;
- (BOOL)hasPluggedDisplayOnDuration;
- (BOOL)hasTimestamp;
- (BOOL)hasTotalBacklightPower;
- (BOOL)hasTotalDisplayPower;
- (BOOL)hasUnpluggedDisplayOnDuration;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)mieCount;
- (unsigned int)mieDuration;
- (unsigned int)pluggedDisplayOnDuration;
- (BOOL)readFrom:(id)arg1;
- (void)setAlsAutoBrightnessChangeCount:(unsigned int)arg1;
- (void)setAlsAutoBrightnessCurveE0A:(int)arg1;
- (void)setAlsAutoBrightnessCurveE0B:(int)arg1;
- (void)setAlsAutoBrightnessCurveE1:(int)arg1;
- (void)setAlsAutoBrightnessCurveE2:(int)arg1;
- (void)setAlsAutoBrightnessCurveEdynth:(int)arg1;
- (void)setAlsAutoBrightnessCurveL0A:(int)arg1;
- (void)setAlsAutoBrightnessCurveL0B:(int)arg1;
- (void)setAlsAutoBrightnessCurveL1:(int)arg1;
- (void)setAlsAutoBrightnessCurveL2:(int)arg1;
- (void)setAlsAutoBrightnessLux:(unsigned int)arg1;
- (void)setAlsAutoBrightnessSlider:(unsigned int)arg1;
- (void)setAlsBrightnessEnableCnt:(unsigned int)arg1;
- (void)setBacklightBuckets:(id)arg1;
- (void)setDispOnCount:(unsigned int)arg1;
- (void)setDisplayIdlePercentage:(unsigned int)arg1;
- (void)setHasAlsAutoBrightnessChangeCount:(BOOL)arg1;
- (void)setHasAlsAutoBrightnessCurveE0A:(BOOL)arg1;
- (void)setHasAlsAutoBrightnessCurveE0B:(BOOL)arg1;
- (void)setHasAlsAutoBrightnessCurveE1:(BOOL)arg1;
- (void)setHasAlsAutoBrightnessCurveE2:(BOOL)arg1;
- (void)setHasAlsAutoBrightnessCurveEdynth:(BOOL)arg1;
- (void)setHasAlsAutoBrightnessCurveL0A:(BOOL)arg1;
- (void)setHasAlsAutoBrightnessCurveL0B:(BOOL)arg1;
- (void)setHasAlsAutoBrightnessCurveL1:(BOOL)arg1;
- (void)setHasAlsAutoBrightnessCurveL2:(BOOL)arg1;
- (void)setHasAlsAutoBrightnessLux:(BOOL)arg1;
- (void)setHasAlsAutoBrightnessSlider:(BOOL)arg1;
- (void)setHasAlsBrightnessEnableCnt:(BOOL)arg1;
- (void)setHasDispOnCount:(BOOL)arg1;
- (void)setHasDisplayIdlePercentage:(BOOL)arg1;
- (void)setHasMieCount:(BOOL)arg1;
- (void)setHasMieDuration:(BOOL)arg1;
- (void)setHasPluggedDisplayOnDuration:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTotalBacklightPower:(BOOL)arg1;
- (void)setHasTotalDisplayPower:(BOOL)arg1;
- (void)setHasUnpluggedDisplayOnDuration:(BOOL)arg1;
- (void)setMieCount:(unsigned int)arg1;
- (void)setMieDuration:(unsigned int)arg1;
- (void)setPluggedDisplayOnDuration:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalBacklightPower:(unsigned int)arg1;
- (void)setTotalDisplayPower:(unsigned int)arg1;
- (void)setUnpluggedDisplayOnDuration:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)totalBacklightPower;
- (unsigned int)totalDisplayPower;
- (unsigned int)unpluggedDisplayOnDuration;
- (void)writeTo:(id)arg1;

@end