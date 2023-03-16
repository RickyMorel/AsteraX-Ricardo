#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[81] = 
{
	{ 0, 0 } /* 0x06000001 System.Void UnityEngine.Analytics.AnalyticsEvent::Register(System.Action`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>) */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngine.Analytics.AnalyticsEvent::Unregister(System.Action`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>) */,
	{ 0, 0 } /* 0x06000003 System.String UnityEngine.Analytics.AnalyticsEvent::get_sdkVersion() */,
	{ 0, 0 } /* 0x06000004 System.Boolean UnityEngine.Analytics.AnalyticsEvent::get_debugMode() */,
	{ 0, 0 } /* 0x06000005 System.Void UnityEngine.Analytics.AnalyticsEvent::set_debugMode(System.Boolean) */,
	{ 0, 0 } /* 0x06000006 System.Void UnityEngine.Analytics.AnalyticsEvent::OnValidationFailed(System.String) */,
	{ 0, 0 } /* 0x06000007 System.Void UnityEngine.Analytics.AnalyticsEvent::AddCustomEventData(System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000008 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::Custom(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000009 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::AchievementStep(System.Int32,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600000A UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::AchievementUnlocked(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600000B UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::AdComplete(System.Boolean,UnityEngine.Analytics.AdvertisingNetwork,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600000C UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::AdComplete(System.Boolean,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600000D UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::AdOffer(System.Boolean,UnityEngine.Analytics.AdvertisingNetwork,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600000E UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::AdOffer(System.Boolean,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600000F UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::AdSkip(System.Boolean,UnityEngine.Analytics.AdvertisingNetwork,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000010 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::AdSkip(System.Boolean,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000011 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::AdStart(System.Boolean,UnityEngine.Analytics.AdvertisingNetwork,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000012 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::AdStart(System.Boolean,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000013 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::ChatMessageSent(System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000014 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::CustomEvent(System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000015 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::CutsceneSkip(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000016 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::CutsceneStart(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000017 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::FirstInteraction(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000018 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::GameOver(System.Int32,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000019 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::GameOver(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600001A UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::GameStart(System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600001B UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::IAPTransaction(System.String,System.Single,System.String,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600001C UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::ItemAcquired(UnityEngine.Analytics.AcquisitionType,System.String,System.Single,System.String,System.Single,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600001D UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::ItemAcquired(UnityEngine.Analytics.AcquisitionType,System.String,System.Single,System.String,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600001E UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::ItemSpent(UnityEngine.Analytics.AcquisitionType,System.String,System.Single,System.String,System.Single,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600001F UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::ItemSpent(UnityEngine.Analytics.AcquisitionType,System.String,System.Single,System.String,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000020 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelComplete(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000021 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelComplete(System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000022 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelComplete(System.String,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000023 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelFail(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000024 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelFail(System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000025 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelFail(System.String,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000026 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelQuit(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000027 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelQuit(System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000028 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelQuit(System.String,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000029 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelSkip(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600002A UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelSkip(System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600002B UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelSkip(System.String,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600002C UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelStart(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600002D UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelStart(System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600002E UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelStart(System.String,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600002F UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelUp(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000030 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelUp(System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000031 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelUp(System.String,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000032 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::PostAdAction(System.Boolean,UnityEngine.Analytics.AdvertisingNetwork,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000033 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::PostAdAction(System.Boolean,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000034 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::PushNotificationClick(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000035 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::PushNotificationEnable(System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000036 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::ScreenVisit(UnityEngine.Analytics.ScreenName,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000037 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::ScreenVisit(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000038 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::SocialShare(UnityEngine.Analytics.ShareType,UnityEngine.Analytics.SocialNetwork,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000039 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::SocialShare(UnityEngine.Analytics.ShareType,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600003A UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::SocialShare(System.String,UnityEngine.Analytics.SocialNetwork,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600003B UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::SocialShare(System.String,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600003C UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::SocialShareAccept(UnityEngine.Analytics.ShareType,UnityEngine.Analytics.SocialNetwork,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600003D UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::SocialShareAccept(UnityEngine.Analytics.ShareType,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600003E UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::SocialShareAccept(System.String,UnityEngine.Analytics.SocialNetwork,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600003F UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::SocialShareAccept(System.String,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000040 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::StoreItemClick(UnityEngine.Analytics.StoreType,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000041 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::StoreOpened(UnityEngine.Analytics.StoreType,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000042 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::TutorialComplete(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000043 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::TutorialSkip(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000044 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::TutorialStart(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000045 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::TutorialStep(System.Int32,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000046 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::UserSignup(UnityEngine.Analytics.AuthorizationNetwork,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000047 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::UserSignup(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x06000048 System.String UnityEngine.Analytics.AnalyticsEvent::RenameEnum(System.String) */,
	{ 0, 0 } /* 0x06000049 System.Void UnityEngine.Analytics.AnalyticsEvent::.cctor() */,
	{ 0, 0 } /* 0x0600004A System.Void UnityEngine.Analytics.AnalyticsEvent::<.cctor>b__1(System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0 } /* 0x0600004B System.Void UnityEngine.Analytics.AnalyticsEventAttribute::.ctor() */,
	{ 0, 0 } /* 0x0600004C System.Void UnityEngine.Analytics.StandardEventName::.ctor(System.String,System.String,System.String) */,
	{ 0, 0 } /* 0x0600004D System.Void UnityEngine.Analytics.AnalyticsEventParameter::.ctor(System.String,System.String,System.String) */,
	{ 0, 0 } /* 0x0600004E System.Void UnityEngine.Analytics.RequiredParameter::.ctor(System.String,System.String,System.String) */,
	{ 0, 0 } /* 0x0600004F System.Void UnityEngine.Analytics.OptionalParameter::.ctor(System.String,System.String) */,
	{ 0, 0 } /* 0x06000050 System.Void UnityEngine.Analytics.CustomizableEnum::.ctor(System.Boolean) */,
	{ 0, 0 } /* 0x06000051 System.Void UnityEngine.Analytics.EnumCase::.ctor(UnityEngine.Analytics.EnumCase/Styles) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
extern Il2CppSequencePoint g_sequencePointsUnity_Analytics_StandardEvents[];
Il2CppSequencePoint g_sequencePointsUnity_Analytics_StandardEvents[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#else
extern Il2CppSequencePoint g_sequencePointsUnity_Analytics_StandardEvents[];
Il2CppSequencePoint g_sequencePointsUnity_Analytics_StandardEvents[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[81] = 
{
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsEvent::Register(System.Action`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsEvent::Unregister(System.Action`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>) */,
	{ 0, 0, 0 } /* System.String UnityEngine.Analytics.AnalyticsEvent::get_sdkVersion() */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Analytics.AnalyticsEvent::get_debugMode() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsEvent::set_debugMode(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsEvent::OnValidationFailed(System.String) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsEvent::AddCustomEventData(System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::Custom(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::AchievementStep(System.Int32,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::AchievementUnlocked(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::AdComplete(System.Boolean,UnityEngine.Analytics.AdvertisingNetwork,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::AdComplete(System.Boolean,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::AdOffer(System.Boolean,UnityEngine.Analytics.AdvertisingNetwork,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::AdOffer(System.Boolean,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::AdSkip(System.Boolean,UnityEngine.Analytics.AdvertisingNetwork,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::AdSkip(System.Boolean,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::AdStart(System.Boolean,UnityEngine.Analytics.AdvertisingNetwork,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::AdStart(System.Boolean,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::ChatMessageSent(System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::CustomEvent(System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::CutsceneSkip(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::CutsceneStart(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::FirstInteraction(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::GameOver(System.Int32,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::GameOver(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::GameStart(System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::IAPTransaction(System.String,System.Single,System.String,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::ItemAcquired(UnityEngine.Analytics.AcquisitionType,System.String,System.Single,System.String,System.Single,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::ItemAcquired(UnityEngine.Analytics.AcquisitionType,System.String,System.Single,System.String,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::ItemSpent(UnityEngine.Analytics.AcquisitionType,System.String,System.Single,System.String,System.Single,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::ItemSpent(UnityEngine.Analytics.AcquisitionType,System.String,System.Single,System.String,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelComplete(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelComplete(System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelComplete(System.String,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelFail(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelFail(System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelFail(System.String,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelQuit(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelQuit(System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelQuit(System.String,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelSkip(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelSkip(System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelSkip(System.String,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelStart(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelStart(System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelStart(System.String,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelUp(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelUp(System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::LevelUp(System.String,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::PostAdAction(System.Boolean,UnityEngine.Analytics.AdvertisingNetwork,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::PostAdAction(System.Boolean,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::PushNotificationClick(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::PushNotificationEnable(System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::ScreenVisit(UnityEngine.Analytics.ScreenName,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::ScreenVisit(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::SocialShare(UnityEngine.Analytics.ShareType,UnityEngine.Analytics.SocialNetwork,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::SocialShare(UnityEngine.Analytics.ShareType,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::SocialShare(System.String,UnityEngine.Analytics.SocialNetwork,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::SocialShare(System.String,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::SocialShareAccept(UnityEngine.Analytics.ShareType,UnityEngine.Analytics.SocialNetwork,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::SocialShareAccept(UnityEngine.Analytics.ShareType,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::SocialShareAccept(System.String,UnityEngine.Analytics.SocialNetwork,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::SocialShareAccept(System.String,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::StoreItemClick(UnityEngine.Analytics.StoreType,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::StoreOpened(UnityEngine.Analytics.StoreType,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::TutorialComplete(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::TutorialSkip(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::TutorialStart(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::TutorialStep(System.Int32,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::UserSignup(UnityEngine.Analytics.AuthorizationNetwork,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::UserSignup(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* System.String UnityEngine.Analytics.AnalyticsEvent::RenameEnum(System.String) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsEvent::.cctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsEvent::<.cctor>b__1(System.Collections.Generic.IDictionary`2<System.String,System.Object>) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsEventAttribute::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.StandardEventName::.ctor(System.String,System.String,System.String) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsEventParameter::.ctor(System.String,System.String,System.String) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.RequiredParameter::.ctor(System.String,System.String,System.String) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.OptionalParameter::.ctor(System.String,System.String) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.CustomizableEnum::.ctor(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.EnumCase::.ctor(UnityEngine.Analytics.EnumCase/Styles) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_Analytics_StandardEvents;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_Analytics_StandardEvents = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	0,
	(Il2CppSequencePoint*)g_sequencePointsUnity_Analytics_StandardEvents,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	0,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
