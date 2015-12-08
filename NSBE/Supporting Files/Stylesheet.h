//
//  Stylesheet.h
//  NSBE
//
//  Created by Iulian Corcoja on 1/26/15.
//  Copyright (c) 2015 Adelante Consulting Inc. All rights reserved.
//

#ifndef NSBE_Stylesheet_h
#define NSBE_Stylesheet_h

#pragma mark - Picker view styles

#define PICKER_VIEW_BACKGROUND_COLOR [UIColor colorWithWhite:1.0f alpha:0.25f]
#define PICKER_VIEW_LABEL_TEXT_COLOR [UIColor colorWithWhite:1.0f alpha:1.0f]
#define PICKER_VIEW_LABEL_FONT [UIFont systemFontOfSize:24.0f]
#define PICKER_VIEW_LABEL_BACKGROUND_COLOR [UIColor clearColor]
#define PICKER_VIEW_LABEL_TEXT_ALIGNMENT NSTextAlignmentCenter
#define PICKER_VIEW_ROW_HEIGHT 32.0f

#define PICKER_VIEW_GENDER_LABEL_FONT [UIFont systemFontOfSize:24.0f]
#define PICKER_VIEW_GENDER_ROW_HEIGHT 48.0f

#define PICKER_VIEW_BIRTHDATE_MONTH_WIDTH_RATIO 0.4f
#define PICKER_VIEW_BIRTHDATE_DAY_WIDTH_RATIO 0.2f


#pragma mark - Color state button view styles

#define COLOR_STATE_BUTTON_HIGHLIGHTED_COLOR [UIColor colorWithWhite:1.0f alpha:0.5f]
#define COLOR_STATE_BUTTON_DISABLED_COLOR [UIColor colorWithWhite:1.0f alpha:0.5f]


#pragma mark - Text fields view styles

#define TEXT_FIELD_DISABLED_ALPHA 0.35f


#pragma mark - Activity indicator styles

#define ACTIVITY_INDICATOR_NOTIFICATION_PERIOD_SHORT 2000
#define ACTIVITY_INDICATOR_NOTIFICATION_PERIOD_LONG 4000

#pragma mark - Intro view controller styles

#define INTRO_VIEW_CONTROLLER_ANIMATION_DELAY 0.5f
#define INTRO_VIEW_CONTROLLER_ANIMATION_DURATION 0.75f
#define INTRO_VIEW_CONTROLLER_CUSTOM_SEGUE_ANIMATION_DURATION 0.75f

#define INTRO_VIEW_CONTROLLER_SLIDESHOW_BACKGROUND_IMAGE1 [UIImage imageNamed:@"SlideshowBackground1"]


#pragma mark - Welcome view controller styles

#define WELCOME_VIEW_CONTROLLER_WELCOME_ANIMATION_DELAY 1.5f
#define WELCOME_VIEW_CONTROLLER_WELCOME_ANIMATION_DURATION 1.25f
#define WELCOME_VIEW_CONTROLLER_BLINK_ANIMATION_DURATION 0.9f
#define WELCOME_VIEW_CONTROLLER_BLINK_ANIMATION_REPEAT_COUNT 2.5f


#pragma mark - Home view controller styles

#define HOME_VIEW_CONTROLLER_STEPS_COUNTER_ANIMATION_DURATION 0.6f
#define HOME_VIEW_CONTROLLER_PARTICIPANTS_COUNT_ANIMATION_DURATION 0.6f
#define HOME_VIEW_CONTROLLER_PARTICIPANT_THUMBNAIL_ANIMATION_DURATION 0.6f

#define HOME_VIEW_CONTROLLER_DEVICE_ICON_IMAGE_FITBIT [UIImage imageNamed:@"intro_s4_fitbit"]
#define HOME_VIEW_CONTROLLER_DEVICE_ICON_IMAGE_JAWBONE [UIImage imageNamed:@"intro_s4_up"]
#define HOME_VIEW_CONTROLLER_DEVICE_ICON_IMAGE_HEALTHKIT [UIImage imageNamed:@"intro_s4_health"]
#define HOME_VIEW_CONTROLLER_DEVICE_ICON_IMAGE_NO_DEVICE nil

#define HOME_VIEW_CONTROLLER_DEVICE_IMAGE_FITBIT [UIImage imageNamed:@"FitbitIcon"]
#define HOME_VIEW_CONTROLLER_DEVICE_IMAGE_JAWBONE [UIImage imageNamed:@"JawboneIcon"]
#define HOME_VIEW_CONTROLLER_DEVICE_IMAGE_HEALTHKIT [UIImage imageNamed:@"HealthKitIcon"]
#define HOME_VIEW_CONTROLLER_DEVICE_IMAGE_NO_DEVICE nil

#define HOME_VIEW_CONTROLLER_DEFAULT_PROFILE_PICTURE_ICON [UIImage imageNamed:@"NoPhotoIcon"]


#pragma mark - Leaderboard view controller styles

#define LEADERBOARD_VIEW_CONTROLLER_PARTICIPANT_THUMBNAIL_ANIMATION_DURATION 0.4f
#define LEADERBOARD_VIEW_CONTROLLER_USER_STATISTICS_ANIMATION_DURATION 0.6f
#define LEADERBOARD_VIEW_CONTROLLER_SHOW_HIDE_ACTIVITY_ANIMATION_DURATION 0.1f

#define LEADERBOARD_VIEW_CONTROLLER_DEFAULT_PARTICIPANT_PHOTO_ICON [UIImage imageNamed:@"NoPhotoIcon"]

//#define LEADERBOARD_VIEW_CONTROLLER_DAY_BUTTON_NORMAL_COLOR [UIColor colorWithRed:0.85 green:0.85 blue:0.85 alpha:1]
#define LEADERBOARD_VIEW_CONTROLLER_DAY_BUTTON_NORMAL_COLOR [UIColor colorWithRed:1 green:1 blue:1 alpha:0.5]
#define LEADERBOARD_VIEW_CONTROLLER_DAY_BUTTON_NORMAL_FONT [UIFont fontWithName:@"Avenir-Medium" size:12.0f]
//#define LEADERBOARD_VIEW_CONTROLLER_DAY_BUTTON_SELECTED_COLOR [UIColor colorWithRed:0.09 green:0.22 blue:0.36 alpha:1]
//#define LEADERBOARD_VIEW_CONTROLLER_DAY_BUTTON_SELECTED_FONT [UIFont fontWithName:@"Avenir-Medium" size:12.0f]
#define LEADERBOARD_VIEW_CONTROLLER_DAY_BUTTON_SELECTED_COLOR [UIColor colorWithRed:1 green:1 blue:1 alpha:1]
#define LEADERBOARD_VIEW_CONTROLLER_DAY_BUTTON_SELECTED_FONT [UIFont fontWithName:@"Avenir-Medium" size:12.0f]


#endif



