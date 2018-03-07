// HMError.h
// HomeKit
//
// Copyright (c) 2014-2015 Apple Inc. All rights reserved.

#import <Foundation/Foundation.h>
#import <HomeKit/HMDefines.h>

NS_ASSUME_NONNULL_BEGIN

HM_EXTERN NSString * const HMErrorDomain NS_AVAILABLE_IOS(8_0);

/*!
 * @brief This enumeration describes the possible error constants that can be
 *        returned from the the HomeKit APIs.
 */
typedef NS_ENUM(NSInteger, HMErrorCode) {
    HMErrorCodeAlreadyExists                           = 1,
    HMErrorCodeNotFound                                = 2,
    HMErrorCodeInvalidParameter                        = 3,
    HMErrorCodeAccessoryNotReachable                   = 4,
    HMErrorCodeReadOnlyCharacteristic                  = 5,
    HMErrorCodeWriteOnlyCharacteristic                 = 6,
    HMErrorCodeNotificationNotSupported                = 7,
    HMErrorCodeOperationTimedOut                       = 8,
    HMErrorCodeAccessoryPoweredOff                     = 9,
    HMErrorCodeAccessDenied                            = 10,
    HMErrorCodeObjectAssociatedToAnotherHome           = 11,
    HMErrorCodeObjectNotAssociatedToAnyHome            = 12,
    HMErrorCodeObjectAlreadyAssociatedToHome           = 13,
    HMErrorCodeAccessoryIsBusy                         = 14,
    HMErrorCodeOperationInProgress                     = 15,
    HMErrorCodeAccessoryOutOfResources                 = 16,
    HMErrorCodeInsufficientPrivileges                  = 17,
    HMErrorCodeAccessoryPairingFailed                  = 18,
    HMErrorCodeInvalidDataFormatSpecified              = 19,
    HMErrorCodeNilParameter                            = 20,
    HMErrorCodeUnconfiguredParameter                   = 21,
    HMErrorCodeInvalidClass                            = 22,
    HMErrorCodeOperationCancelled                      = 23,
    HMErrorCodeRoomForHomeCannotBeInZone               = 24,
    HMErrorCodeNoActionsInActionSet                    = 25,
    HMErrorCodeNoRegisteredActionSets                  = 26,
    HMErrorCodeMissingParameter                        = 27,
    HMErrorCodeFireDateInPast                          = 28,
    HMErrorCodeRoomForHomeCannotBeUpdated              = 29,
    HMErrorCodeActionInAnotherActionSet                = 30,
    HMErrorCodeObjectWithSimilarNameExistsInHome       = 31,
    HMErrorCodeHomeWithSimilarNameExists               = 32,
    HMErrorCodeRenameWithSimilarName                   = 33,
    HMErrorCodeCannotRemoveNonBridgeAccessory          = 34,
    HMErrorCodeNameContainsProhibitedCharacters        = 35,
    HMErrorCodeNameDoesNotStartWithValidCharacters     = 36,
    HMErrorCodeUserIDNotEmailAddress                   = 37,
    HMErrorCodeUserDeclinedAddingUser                  = 38,
    HMErrorCodeUserDeclinedRemovingUser                = 39,
    HMErrorCodeUserDeclinedInvite                      = 40,
    HMErrorCodeUserManagementFailed                    = 41,
    HMErrorCodeRecurrenceTooSmall                      = 42,
    HMErrorCodeInvalidValueType                        = 43,
    HMErrorCodeValueLowerThanMinimum                   = 44,
    HMErrorCodeValueHigherThanMaximum                  = 45,
    HMErrorCodeStringLongerThanMaximum                 = 46,
    HMErrorCodeHomeAccessNotAuthorized                 = 47,
    HMErrorCodeOperationNotSupported                   = 48,
    HMErrorCodeMaximumObjectLimitReached               = 49,
    HMErrorCodeAccessorySentInvalidResponse            = 50,
    HMErrorCodeStringShorterThanMinimum                = 51,
    HMErrorCodeGenericError                            = 52,
    HMErrorCodeSecurityFailure                         = 53,
    HMErrorCodeCommunicationFailure                    = 54,
    HMErrorCodeMessageAuthenticationFailed             = 55,
    HMErrorCodeInvalidMessageSize                      = 56,
    HMErrorCodeAccessoryDiscoveryFailed                = 57,
    HMErrorCodeClientRequestError                      = 58,
    HMErrorCodeAccessoryResponseError                  = 59,
    HMErrorCodeNameDoesNotEndWithValidCharacters       = 60,
    HMErrorCodeAccessoryIsBlocked                      = 61,
    HMErrorCodeInvalidAssociatedServiceType            = 62,
    HMErrorCodeActionSetExecutionFailed                = 63,
    HMErrorCodeActionSetExecutionPartialSuccess        = 64,
    HMErrorCodeActionSetExecutionInProgress            = 65,
    HMErrorCodeAccessoryOutOfCompliance                = 66,
    HMErrorCodeDataResetFailure                        = 67,
    HMErrorCodeNotificationAlreadyEnabled              = 68,
    HMErrorCodeRecurrenceMustBeOnSpecifiedBoundaries   = 69,
    HMErrorCodeDateMustBeOnSpecifiedBoundaries         = 70,
    HMErrorCodeCannotActivateTriggerTooFarInFuture     = 71,
    HMErrorCodeRecurrenceTooLarge                      = 72,
    HMErrorCodeReadWritePartialSuccess                 = 73,
    HMErrorCodeReadWriteFailure                        = 74,
    HMErrorCodeNotSignedIntoiCloud                     = 75,
    HMErrorCodeKeychainSyncNotEnabled                  = 76,
    HMErrorCodeCloudDataSyncInProgress                 = 77,
    HMErrorCodeNetworkUnavailable                      = 78,
    HMErrorCodeAddAccessoryFailed                      = 79,
    HMErrorCodeMissingEntitlement                      = 80,
    HMErrorCodeCannotUnblockNonBridgeAccessory         = 81,
    HMErrorCodeDeviceLocked                            = 82,
    HMErrorCodeCannotRemoveBuiltinActionSet            NS_ENUM_AVAILABLE_IOS(9_0) = 83,
    HMErrorCodeLocationForHomeDisabled                 NS_ENUM_AVAILABLE_IOS(9_0) = 84,
    HMErrorCodeNotAuthorizedForLocationServices        NS_ENUM_AVAILABLE_IOS(9_0) = 85,
    HMErrorCodeReferToUserManual                       NS_ENUM_AVAILABLE_IOS(9_3) = 86,
    HMErrorCodeInvalidOrMissingAuthorizationData       NS_ENUM_AVAILABLE_IOS(10) = 87,
    HMErrorCodeBridgedAccessoryNotReachable            NS_ENUM_AVAILABLE_IOS(10) = 88,
    HMErrorCodeNotAuthorizedForMicrophoneAccess        NS_ENUM_AVAILABLE_IOS(10) = 89,
    HMErrorCodeIncompatibleNetwork                     NS_ENUM_AVAILABLE_IOS(10_2) = 90,
    HMErrorCodeNoHomeHub                               NS_ENUM_AVAILABLE_IOS(11_0) = 91,
    HMErrorCodeNoCompatibleHomeHub                     NS_ENUM_AVAILABLE_IOS(11_0) = 92,
    HMErrorCodeIncompatibleHomeHub                     API_DEPRECATED_WITH_REPLACEMENT("HMErrorCodeNoCompatibleHomeHub", ios(11.0, 11.0), watchos(4.0, 4.0), tvos(11.0, 11.0)) = HMErrorCodeNoCompatibleHomeHub,
} NS_AVAILABLE_IOS(8_0) __WATCHOS_AVAILABLE(2_0) __TVOS_AVAILABLE(10_0);

NS_ASSUME_NONNULL_END