#if defined(DM_PLATFORM_ANDROID) || defined(DM_PLATFORM_IOS)

#pragma once

namespace dmIronSource {


// The same constants/enums are in IronSourceJNI.java
// If you change enums here, pls make sure you update the constants there as well

// enum 
// {
// };

void Initialize_Ext();

void Init(const char* appKey);
void OnPause();
void OnResume();
void ValidateIntegration();
void SetConsent(bool isConsentProvided);
void SetMetaData(const char* key, const char* value);
void SetUserId(const char* userId);

void ShouldTrackNetworkState(bool shouldTrackNetworkState);
bool IsRewardedVideoAvailable();
void ShowRewardedVideo(const char* placementName);

} //namespace dmIronSource

#endif
