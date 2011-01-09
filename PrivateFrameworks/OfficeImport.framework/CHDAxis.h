/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CHDTitle, OADGraphicProperties, EDResources;



@interface CHDAxis : NSObject <EDKeyedObject>
{

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mReverseOrder;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mSecondary;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mDateTimeFormattingFlag;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mLineVisible;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mDeleted;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mAutoMinimumValue;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mAutoMaximumValue;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mAutoCrossValue;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mContentFormatDerived;

    NSInteger mAxisId;
    NSUInteger mContentFormatId;
    NSInteger mFontIndex;
    double mScalingMaximum;
    double mScalingMinimum;
    NSInteger mOrientation;
    double mCrossAxisId;
    double mCrossesAt;
    NSInteger mMajorTickMark;
    NSInteger mMinorTickMark;
    NSInteger mAxisPosition;
    NSInteger mAxisType;
    NSInteger mTickLabelPosition;
    CHDTitle *mTitle;
    OADGraphicProperties *mMinorGridLinesGraphicProperties;
    OADGraphicProperties *mMajorGridLinesGraphicProperties;
    OADGraphicProperties *mAxisGraphicProperties;
    NSInteger mCrossBetween;
    NSInteger mCrosses;
    double mTickLabelRotation;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mIsAutoRotation;

    NSInteger mTickLabelColorIndex;
    EDResources *mResources;
}


- (NSUInteger)key;
- (void)setOrientation:(NSInteger)arg1;
- (id)font;
- (NSInteger)orientation;
- (id)title;
- (void)setFont:(id)arg1;
- (void)dealloc;
- (void)setTitle:(id)arg1;
- (void)setDeleted:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (NSInteger)axisType;
- (void)setReverseOrder:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isHorizontalPosition;
     /* Encoded args for previous method: B8@0:4 */

- (void)setAxisPosition:(NSInteger)arg1;
- (void)setIsContentFormatDerivedFromDataPoints:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (void)setMajorTickMark:(NSInteger)arg1;
- (void)setMinorTickMark:(NSInteger)arg1;
- (void)setTickLabelPosition:(NSInteger)arg1;
- (void)setCrossBetween:(NSInteger)arg1;
- (void)setCrosses:(NSInteger)arg1;
- (void)setCrossesAt:(double)arg1;
- (void)setTickLabelRotationAngle:(double)arg1;
- (void)setScalingMaximum:(double)arg1;
- (double)crossesAt;
- (NSInteger)crossBetween;
- (NSInteger)minorTickMark;
- (NSInteger)majorTickMark;
- (NSInteger)crosses;
- (void)setDateTimeFormattingFlag:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (void)setContentFormat:(id)arg1;
- (NSUInteger)contentFormatId;
- (NSInteger)axisId;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isReverseOrder;
     /* Encoded args for previous method: B8@0:4 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isLineVisible;
     /* Encoded args for previous method: B8@0:4 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isDeleted;
     /* Encoded args for previous method: B8@0:4 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isAutoMinimumValue;
     /* Encoded args for previous method: B8@0:4 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isAutoMaximumValue;
     /* Encoded args for previous method: B8@0:4 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isAutoCrossValue;
     /* Encoded args for previous method: B8@0:4 */

- (id)defaultDateTimeContentFormat;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isContentFormatDerivedFromDataPoints;
     /* Encoded args for previous method: B8@0:4 */

- (double)crossAxisId;
- (void)setCrossAxisId:(double)arg1;
- (NSInteger)tickLabelPosition;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isTickLabelVisible;
     /* Encoded args for previous method: B8@0:4 */

- (id)minorGridLinesGraphicProperties;
- (id)axisGraphicProperties;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isDate;
     /* Encoded args for previous method: B8@0:4 */

- (double)tickLabelRotationAngle;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isTickLabelAutoRotation;
     /* Encoded args for previous method: B8@0:4 */

- (NSInteger)tickLabelColorIndex;
- (void)adjustAxisPositionForHorizontalChart;
- (NSInteger)fontIndex;
- (void)setScalingMinimum:(double)arg1;
- (void)setSecondary:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (void)setAxisId:(NSInteger)arg1;
- (void)setAxisType:(NSInteger)arg1;
- (void)setLineVisible:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (void)setAxisGraphicProperties:(id)arg1;
- (void)setTickLabelAutoRotation:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (void)setTickLabelColorIndex:(NSInteger)arg1;
- (void)setMinorGridLinesGraphicProperties:(id)arg1;
- (void)setMajorGridLinesGraphicProperties:(id)arg1;
- (void)setFontIndex:(NSInteger)arg1;
- (id)initWithResources:(id)arg1;
- (void)setContentFormatId:(NSUInteger)arg1;
- (NSInteger)axisPosition;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isSecondary;
     /* Encoded args for previous method: B8@0:4 */

- (id)contentFormat;
- (id)majorGridLinesGraphicProperties;
- (double)scalingMinimum;
- (double)scalingMaximum;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isDateTimeFormattingFlag;
     /* Encoded args for previous method: B8@0:4 */


@end