#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SystemSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SystemSetting"));
	}

	template <typename T = bool> T& m_HasPendingSettingToApply() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_bIsLowPerfGPUDevices() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_LowPerfGPUDefines() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> static T& PREF_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_UserSettingLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_ActingUserSettingLevel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_DeviceDefaultLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_DeviceCapacityLevel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> static T& kInitSettingLevelConfigPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& UseOnePassWithHigh() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_DefaultFrameRateLevel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_MaxFrameRateLevelLowQ() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_CapacityFrameRateLevel() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_CurFrameRateLevel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_EnableHigherFrameRate() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_HigherFrameRate() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_AdjustFixedDeltaTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> static T& CommonMaxFPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_ResolutionDirty() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> static T& kDefaultKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& mEnableMSAA() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = int32_t> static T& kMSAA_Unknown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kMSAA_Disabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kMSAA_None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kMSAA_2x() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kMSAA_4x() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kMSAA_8x() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_MSAA() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> static T& DebugAALevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& mDeviceFullName() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& mModelName() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& mVendorName() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& mGPUName() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> static T& E_ANDROID_OS_UNKNOWN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& E_ANDROID_OS_DANGEROUS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& E_ANDROID_OS_FINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_IsAndroidDangerousOS() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _dangerous_android_os() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _dangerous_manufacturer() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _dangerous_models() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> static T& TickDebugHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& EnablePVPSignsSystem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5);
	}
	template <typename T = bool> static T& ShowDebugInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6);
	}
	template <typename T = bool> static T& mShowDof() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7);
	}
	template <typename T = bool> static T& mEnableBloom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& mShowFPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9);
	}
	template <typename T = bool> static T& mEnableShadow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA);
	}
	template <typename T = bool> static T& mEnableHDR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB);
	}
	template <typename T = Il2CppString*> static T& kDisableMTRKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mBrGraphicStyleValue() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& mPvpGraphicStyleValue() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& UIPanelLateUpdateFrameGap() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& AcceptAutoAdjustGraphicsSettings() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> static T& MIN_SHADERLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_SHADERLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MAX_DECALACTIVETIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_NGUI_SHADER_LOD_GAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> T& EvaluatedHardwareLevel() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& DebugFillrateLevel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& DebugCPULevel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& bEnableNetPriority() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& bEnableNetReport() {
		return *(T*)((uintptr_t)this + 0x85);
	}
	template <typename T = bool> T& bDisableARGroupPhoto() {
		return *(T*)((uintptr_t)this + 0x86);
	}
	template <typename T = bool> T& bEnableHttp() {
		return *(T*)((uintptr_t)this + 0x87);
	}
	template <typename T = bool> T& bEnableResRepair() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& bEnableDelayInsApk() {
		return *(T*)((uintptr_t)this + 0x89);
	}
	template <typename T = bool> T& bEnableResRepairCheckMd5() {
		return *(T*)((uintptr_t)this + 0x8A);
	}
	template <typename T = bool> T& bEnableIIPSNoticeResExtract() {
		return *(T*)((uintptr_t)this + 0x8B);
	}
	template <typename T = bool> T& bEnableDSPing() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& ActiveGCInterval() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& MinGCInterval() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& bEnableAOI() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uint64_t> T& FtueFlags() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& EnableTAPM() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& bHealthDebugTool() {
		return *(T*)((uintptr_t)this + 0xA9);
	}
	template <typename T = Il2CppString*> T& QAMonitorURL() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& bEnableCODMUnloadAB() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& bEnableABLoadAssetLog() {
		return *(T*)((uintptr_t)this + 0xB1);
	}
	template <typename T = bool> T& bEnablexLua() {
		return *(T*)((uintptr_t)this + 0xB2);
	}
	template <typename T = Il2CppString*> T& HotFixURL() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> T& HotFixMD5() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HotFixVersions() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& EnablePandora() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& QuitWhenDeviceCheckFail() {
		return *(T*)((uintptr_t)this + 0xC1);
	}
	template <typename T = bool> T& CrashOnException() {
		return *(T*)((uintptr_t)this + 0xC2);
	}
	template <typename T = bool> T& EnableExtreme() {
		return *(T*)((uintptr_t)this + 0xC3);
	}
	template <typename T = bool> T& EnableHigherFrameRate() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppString*> T& HigherFrameRateDevices_iOS_Models() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& HigherFrameRateDevices_Android_Models() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppString*> T& HigherFrameRateDevices_Android_GPUs() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& EnableRagDollOnLowEndDevice() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& EnableRagDoll() {
		return *(T*)((uintptr_t)this + 0xD5);
	}
	template <typename T = bool> T& EnableAdaptiveAGC() {
		return *(T*)((uintptr_t)this + 0xD6);
	}
	template <typename T = bool> T& IsGovReview() {
		return *(T*)((uintptr_t)this + 0xD7);
	}
	template <typename T = bool> T& bEnableGSDK() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& PVP_AutoFire() {
		return *(T*)((uintptr_t)this + 0xD9);
	}
	template <typename T = bool> T& TSSDiableSend() {
		return *(T*)((uintptr_t)this + 0xDA);
	}
	template <typename T = int32_t> T& SVCCache() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& UnloadMeshOnVeryLow() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& DisableSOC() {
		return *(T*)((uintptr_t)this + 0xE1);
	}
	template <typename T = bool> T& ConservativeSOC() {
		return *(T*)((uintptr_t)this + 0xE2);
	}
	template <typename T = bool> T& ForceSyncLoadAB() {
		return *(T*)((uintptr_t)this + 0xE3);
	}
	template <typename T = bool> T& ConfiguableResolution() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& ForceDestroyVehicleWhenDespawn() {
		return *(T*)((uintptr_t)this + 0xE5);
	}
	template <typename T = bool> T& EnableUnloadRawAssets() {
		return *(T*)((uintptr_t)this + 0xE6);
	}
	template <typename T = bool> T& ReportShaderCompile() {
		return *(T*)((uintptr_t)this + 0xE7);
	}
	template <typename T = int32_t> T& MaxLoadABAsyncCount() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& MaxLoadAssetAsyncFromABCount() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& EnableBackupLowMemStrategy() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& EnableWarmUpSVC() {
		return *(T*)((uintptr_t)this + 0xF1);
	}
	template <typename T = int32_t> T& WarmUpSVCImp() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& m_Dpi() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& mOriginalWidth() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& mOriginalHeigh() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> T& InputSettingVersion() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = bool> T& EnableGamePad() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& AsyncLoadMuzzleFlash() {
		return *(T*)((uintptr_t)this + 0x109);
	}
	template <typename T = bool> T& UseWeaponAssetGroupConfig() {
		return *(T*)((uintptr_t)this + 0x10A);
	}
	template <typename T = bool> T& EnableWeaponStripLOD() {
		return *(T*)((uintptr_t)this + 0x10B);
	}
	template <typename T = bool> T& EnableShaderCompileSharedBuf() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = bool> T& EnableUnsafeBundleLoading() {
		return *(T*)((uintptr_t)this + 0x10D);
	}
	template <typename T = bool> T& EnableAssetPreloader() {
		return *(T*)((uintptr_t)this + 0x10E);
	}
	template <typename T = bool> T& EnableAssetPreloaderForVeryHigh() {
		return *(T*)((uintptr_t)this + 0x10F);
	}
	template <typename T = bool> T& UseCorrectAssetList() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& EnableSceneReferenceCounter() {
		return *(T*)((uintptr_t)this + 0x111);
	}
	template <typename T = bool> T& EnableSceneReferenceCounterDelayedUnload() {
		return *(T*)((uintptr_t)this + 0x112);
	}
	template <typename T = bool> T& EnableCustomAllocator() {
		return *(T*)((uintptr_t)this + 0x113);
	}
	template <typename T = bool> T& EnableCustomAllocatorLogs() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = bool> T& EnableIL2CPPReflectionOpt() {
		return *(T*)((uintptr_t)this + 0x115);
	}
	template <typename T = bool> T& EnableRemapperDenseForAndroid() {
		return *(T*)((uintptr_t)this + 0x116);
	}
	template <typename T = bool> T& CacheWeaponCameraAimingRotation() {
		return *(T*)((uintptr_t)this + 0x117);
	}
	template <typename T = bool> T& ShiftWeaponAimingRotation() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& EnablePredictAttachmentChange() {
		return *(T*)((uintptr_t)this + 0x119);
	}
	template <typename T = Il2CppString*> T& m_VulkanWhiteList() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppString*> T& m_ADPWhiteList() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = int32_t> T& m_ShaderLOD() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = int32_t> T& m_AudioMaxCount() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& m_DecalAlivetime() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = int32_t> T& m_UnityQualityLevel() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = int32_t> T& m_ParticleLODBias() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = float> T& m_SAMediumLayerDistBias() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& m_SASmallLayerDistBias() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = float> T& m_AudioQuality() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = bool> T& m_DisableSceneGONotImportant() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = float> T& m_BRfixedDeltaTime() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& m_PVPfixedDeltaTime() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> T& m_PVEfixedDeltaTime() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = float> T& m_VehiclefixedDeltaTime() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = int32_t> T& m_LimitMinFps() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = float> T& m_MaxParticleDeltaTime() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = bool> T& m_FireImpactEffectOnlyForFirstHit() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = float> T& m_TimeForDakenScreenBrightness() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = int32_t> T& m_BrightnessForDakenScreen() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = int32_t> T& m_RuntimeMaxLOD() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = int32_t> T& m_TextureMasterLimit() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = float> T& m_FoliageLODBias() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = float> T& m_SceneStreamingDistBias() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> T& m_LowestSceneStreamingDistBias() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = Il2CppString*> static T& CUSTOM_ANCHOR_DELTA_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& customAnchorDelta() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& Y_CUSTOM_ANCHOR_DELTA_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& y_CustomAnchorDelta() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> T& _settingsChatDataMgr() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& m_CullingMethod() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = bool> static T& DisableWeaponFireMuzzleEffectForLowQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = bool> static T& DisableWeaponFireShellDropEffectForLowQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19);
	}
	template <typename T = bool> static T& DisableWeaponBulletLineEffectForLowQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A);
	}
	template <typename T = bool> static T& DisableWeaponImpactEffectForLowQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B);
	}
	template <typename T = int32_t> static T& MaxWeaponImpactEffectForLowQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = bool> static T& DisableWeaponImpactDecalForLowQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mCurrentProfilers() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = float> T& mOverrideFarClipPlane() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& currentTempOverrideProfile() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUserSettingLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsVeryLowQualitySetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLowQualitySetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMidQualitySetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHighQualitySetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsVeryHighQualitySetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsExtremeQualitySetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestGraphicsDeviceName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBRQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBRTDMQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOtherQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLobbyQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUnloadCollisionOnlyMeshData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshFixedDeltaTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SupportExtremeQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateSystemSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyTextureGroupSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateDeviceLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateScreenResolutionLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateMSAA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateFrameRateLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyCurrentSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplySetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HotFixApplySetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalApplySetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareQualitySettingSpecificConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareQualitySettingValuesInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareQualitySettingValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupMetalMultisampleOverrideStoreAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupMetalMultisampleOverrideStoreActionForClearCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyGameModeSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoubleCheckTextureStreamingStrategy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyStreamingSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyUIStreamingSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGraphicsCapacityLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGraphicsDefaultLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDeviceLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDeviceSettingLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoValidateGraphicsLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoValidateRAM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClampProperSettingLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChooseProperSettingLevel_Android_Local() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChooseMaxSettingLevel_Android() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChooseProperSettingLevel_Android() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChooseMaxSettingLevel_iOS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChooseProperSettingLevel_iOS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShouldUseHDR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHigherFrameRateDeviceInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveFrameRateLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCanEnableMaxFrameRateForCurrentQualitySetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxSupportedFrameRateLevelForActiveQualitySetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxSupportedFrameRateLevelInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClampFrameRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFrameRateValueFromFrameRateLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoAdjustFrameRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFrameRateWhitelist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFrameRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoAdjustResolution() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAndroidResolutionHeight_Fallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryFetchDeviceCapacityConfig_Android() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryFetchGPUCapacityConfig_Android() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryFetchDeviceCapacityConfig_iOS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAndroidResolutionHeightAndMSAA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetiOSResolutionHeightAndMSAA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetiOSScreenResolution_Fallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDesignHeightAndMSAA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpecialHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanExceedOriginResolution() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultEnableMSAA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetApplyMSAALevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDeviceMSAA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDeviceFullName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDeviceModelName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVendorName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGPUName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NewThread() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseMinStackSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLowMidMemoryDevice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLowMemoryDevice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMidMemoryDevice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMemoryCritical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLowPerfGPUDevices() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DefineLowPerfGPUDevices() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGPUName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryParseStringToListContainer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseVSSDangerousConfigurations() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckModelName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckOSAndManufacturer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JudgeAndroidDangerousOS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleAndroidDangerousOS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAndroidDangerousOS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateAndroidDangerousOS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostCheckGraphicsSetting_AndroidVSS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCurrentPlayerSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyCurrentAudioQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyAudioQualitySetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetEnableHDR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLowFPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetListWithoutZero() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDisableWeaponFireMuzzleEffectForLowQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDisableWeaponFireMuzzleEffectForLowQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDisableWeaponFireShellDropEffectForLowQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDisableWeaponFireShellDropEffectForLowQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDisableWeaponBulletLineEffectForLowQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDisableWeaponBulletLineEffectForLowQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDisableWeaponImpactEffectForLowQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDisableWeaponImpactEffectForLowQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxWeaponImpactEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMaxWeaponImpactEffectForLowQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDisableWeaponImpactDecalForLowQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDisableWeaponImpactDecalForLowQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeGraphicsStyles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearGraphicsStyles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyGraphicsStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyTemporaryOverridePostProfile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}

	template <typename T = uintptr_t> T get_UserLevel() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3419650))(this);
	}
	template <typename T = bool> T get_HasPendingSettingToApply() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3419658))(this);
	}
	template <typename T = bool> T get_BIsLowPerfGPUDevices() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3419670))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3419678))(this);
	}
	template <typename T = bool> T SetUserSettingLevel(uintptr_t level, bool bIsInit) {
		return ((T (*)(SystemSetting*, uintptr_t, bool))(Il2CppBase() + 0x3419EA4))(this, level, bIsInit);
	}
	template <typename T = void> T SaveSetting() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341A9B8))(this);
	}
	template <typename T = uintptr_t> T get_SettingLevel() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x33E956C))(this);
	}
	template <typename T = uintptr_t> T get_ActiveSettingLevel() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341AD28))(this);
	}
	template <typename T = uintptr_t> T get_DeviceDefaultLevel() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341AD30))(this);
	}
	template <typename T = uintptr_t> T get_DeviceCapacityLevel() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341AD38))(this);
	}
	template <typename T = bool> T IsVeryLowQualitySetting() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x340F338))(this);
	}
	template <typename T = bool> T IsLowQualitySetting() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341AD40))(this);
	}
	template <typename T = bool> T IsMidQualitySetting() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341AE1C))(this);
	}
	template <typename T = bool> T IsHighQualitySetting() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341AEF8))(this);
	}
	template <typename T = bool> T IsVeryHighQualitySetting() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341AFD4))(this);
	}
	template <typename T = bool> T IsExtremeQualitySetting() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341B0B0))(this);
	}
	template <typename T = bool> static T TestGraphicsDeviceName(uintptr_t Cfg, uintptr_t GraphicDevice, bool bIsLessthan) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x341B18C))(0, Cfg, GraphicDevice, bIsLessthan);
	}
	template <typename T = void> T SetBRQuality() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341B3E4))(this);
	}
	template <typename T = void> T SetBRTDMQuality() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341B9D8))(this);
	}
	template <typename T = void> T SetOtherQuality(uintptr_t gameMode) {
		return ((T (*)(SystemSetting*, uintptr_t))(Il2CppBase() + 0x341BE0C))(this, gameMode);
	}
	template <typename T = void> T SetLobbyQuality() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341C278))(this);
	}
	template <typename T = void> static T SetUnloadCollisionOnlyMeshData(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x341B7F0))(0, enable);
	}
	template <typename T = void> T RefreshFixedDeltaTime(bool isLerpTime) {
		return ((T (*)(SystemSetting*, bool))(Il2CppBase() + 0x341C44C))(this, isLerpTime);
	}
	template <typename T = bool> T SupportExtremeQuality() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341C888))(this);
	}
	template <typename T = void> T ValidateSystemSettings() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341C9A4))(this);
	}
	template <typename T = void> T ApplyTextureGroupSetting() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341CFEC))(this);
	}
	template <typename T = void> T ValidateDeviceLevel() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341CC98))(this);
	}
	template <typename T = void> T ValidateScreenResolutionLevel() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341CE50))(this);
	}
	template <typename T = void> T ValidateMSAA() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341CF24))(this);
	}
	template <typename T = void> T ValidateFrameRateLevel() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341D178))(this);
	}
	template <typename T = void> T ApplyCurrentSetting(bool SafeApply) {
		return ((T (*)(SystemSetting*, bool))(Il2CppBase() + 0x341ABA8))(this, SafeApply);
	}
	template <typename T = void> T ApplySetting(bool SafeApply) {
		return ((T (*)(SystemSetting*, bool))(Il2CppBase() + 0x341D240))(this, SafeApply);
	}
	template <typename T = void> T HotFixApplySetting() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341D86C))(this);
	}
	template <typename T = void> T InternalApplySetting(bool SafeApply) {
		return ((T (*)(SystemSetting*, bool))(Il2CppBase() + 0x341D934))(this, SafeApply);
	}
	template <typename T = void> T PrepareQualitySettingSpecificConfig(uintptr_t* isInWhiteList, uintptr_t* deviceWhiteList_iOS, uintptr_t* deviceWhiteList_Android, uintptr_t* gpuWhiteList_Android) {
		return ((T (*)(SystemSetting*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x341DE94))(this, isInWhiteList, deviceWhiteList_iOS, deviceWhiteList_Android, gpuWhiteList_Android);
	}
	template <typename T = void> T PrepareQualitySettingValuesInternal(uintptr_t level, bool isInWhiteList, uintptr_t deviceWhiteList_iOS, uintptr_t deviceWhiteList_Android, uintptr_t gpuWhiteList_Android) {
		return ((T (*)(SystemSetting*, uintptr_t, bool, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x341E820))(this, level, isInWhiteList, deviceWhiteList_iOS, deviceWhiteList_Android, gpuWhiteList_Android);
	}
	template <typename T = void> T PrepareQualitySettingValues() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341D4E0))(this);
	}
	template <typename T = void> T SetupMetalMultisampleOverrideStoreAction(int32_t pendingMapID) {
		return ((T (*)(SystemSetting*, int32_t))(Il2CppBase() + 0x341EE44))(this, pendingMapID);
	}
	template <typename T = void> T SetupMetalMultisampleOverrideStoreActionForClearCamera(bool clearCameraEnabled) {
		return ((T (*)(SystemSetting*, bool))(Il2CppBase() + 0x341EF14))(this, clearCameraEnabled);
	}
	template <typename T = void> T ApplyGameModeSettings(int32_t pendingMapID) {
		return ((T (*)(SystemSetting*, int32_t))(Il2CppBase() + 0x341EFE4))(this, pendingMapID);
	}
	template <typename T = void> T DoubleCheckTextureStreamingStrategy(uintptr_t gameMode) {
		return ((T (*)(SystemSetting*, uintptr_t))(Il2CppBase() + 0x341F4B0))(this, gameMode);
	}
	template <typename T = void> T ApplyStreamingSettings() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341DD70))(this);
	}
	template <typename T = void> T ApplyUIStreamingSetting(bool enableUIStreaming) {
		return ((T (*)(SystemSetting*, bool))(Il2CppBase() + 0x341F348))(this, enableUIStreaming);
	}
	template <typename T = uintptr_t> T GetGraphicsCapacityLevel() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341FB20))(this);
	}
	template <typename T = uintptr_t> T GetGraphicsDefaultLevel() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34202C0))(this);
	}
	template <typename T = void> T CheckDeviceLevel() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34206A4))(this);
	}
	template <typename T = void> T CheckDeviceSettingLevel(uintptr_t CurrentUserSettingLevel) {
		return ((T (*)(SystemSetting*, uintptr_t))(Il2CppBase() + 0x3419C38))(this, CurrentUserSettingLevel);
	}
	template <typename T = uintptr_t> T DoValidateGraphicsLevel(uintptr_t level) {
		return ((T (*)(SystemSetting*, uintptr_t))(Il2CppBase() + 0x341FED8))(this, level);
	}
	template <typename T = uintptr_t> static T DoValidateRAM(uintptr_t level) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3420100))(0, level);
	}
	template <typename T = uintptr_t> T ClampProperSettingLevel(uintptr_t level) {
		return ((T (*)(SystemSetting*, uintptr_t))(Il2CppBase() + 0x3420EE8))(this, level);
	}
	template <typename T = uintptr_t> T ChooseProperSettingLevel_Android_Local() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342103C))(this);
	}
	template <typename T = uintptr_t> T ChooseMaxSettingLevel_Android() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341FCD4))(this);
	}
	template <typename T = uintptr_t> T ChooseProperSettingLevel_Android() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3420474))(this);
	}
	template <typename T = uintptr_t> T ChooseMaxSettingLevel_iOS() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34213EC))(this);
	}
	template <typename T = uintptr_t> T ChooseProperSettingLevel_iOS() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34214BC))(this);
	}
	template <typename T = bool> T CheckShouldUseHDR(bool lobby) {
		return ((T (*)(SystemSetting*, bool))(Il2CppBase() + 0x342158C))(this, lobby);
	}
	template <typename T = uintptr_t> T get_DefaultFrameRateLevel() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3421690))(this);
	}
	template <typename T = uintptr_t> T get_MaxFrameRateLevelWhenLowQuality() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3421698))(this);
	}
	template <typename T = uintptr_t> T get_CapacityFrameRateLevel() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34216A0))(this);
	}
	template <typename T = uintptr_t> T get_CurFrameRateLevel() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341F32C))(this);
	}
	template <typename T = void> T set_CurFrameRateLevel(uintptr_t value) {
		return ((T (*)(SystemSetting*, uintptr_t))(Il2CppBase() + 0x3421938))(this, value);
	}
	template <typename T = void> T SetHigherFrameRateDeviceInfo(bool enableHigherFrameRate, int32_t higherFrameRate) {
		return ((T (*)(SystemSetting*, bool, int32_t))(Il2CppBase() + 0x3422060))(this, enableHigherFrameRate, higherFrameRate);
	}
	template <typename T = void> T SaveFrameRateLevel() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3421A70))(this);
	}
	template <typename T = uintptr_t> T GetCanEnableMaxFrameRateForCurrentQualitySetting() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342239C))(this);
	}
	template <typename T = uintptr_t> T GetMaxSupportedFrameRateLevelForActiveQualitySetting() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3422568))(this);
	}
	template <typename T = uintptr_t> T GetMaxSupportedFrameRateLevelInternal(uintptr_t level) {
		return ((T (*)(SystemSetting*, uintptr_t))(Il2CppBase() + 0x3422474))(this, level);
	}
	template <typename T = uintptr_t> T ClampFrameRate(uintptr_t frl) {
		return ((T (*)(SystemSetting*, uintptr_t))(Il2CppBase() + 0x34216A8))(this, frl);
	}
	template <typename T = int32_t> T GetFrameRateValueFromFrameRateLevel(uintptr_t fl, uintptr_t mode) {
		return ((T (*)(SystemSetting*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3422640))(this, fl, mode);
	}
	template <typename T = void> T AutoAdjustFrameRate() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3421CD8))(this);
	}
	template <typename T = bool> T CheckFrameRateWhitelist(uintptr_t frameRate) {
		return ((T (*)(SystemSetting*, uintptr_t))(Il2CppBase() + 0x34227D4))(this, frameRate);
	}
	template <typename T = void> T SetFrameRate(int32_t target) {
		return ((T (*)(SystemSetting*, int32_t))(Il2CppBase() + 0x3422904))(this, target);
	}
	template <typename T = bool> T get_HasPendingResolutionChange() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3422D0C))(this);
	}
	template <typename T = void> T AutoAdjustResolution() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341A2C8))(this);
	}
	template <typename T = int32_t> T GetAndroidResolutionHeight_Fallback() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342306C))(this);
	}
	template <typename T = uintptr_t> T TryFetchDeviceCapacityConfig_Android() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341E070))(this);
	}
	template <typename T = uintptr_t> T TryFetchGPUCapacityConfig_Android() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341E234))(this);
	}
	template <typename T = uintptr_t> T TryFetchDeviceCapacityConfig_iOS() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341E5F4))(this);
	}
	template <typename T = int32_t> T GetAndroidResolutionHeightAndMSAA() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3423630))(this);
	}
	template <typename T = int32_t> T GetiOSResolutionHeightAndMSAA() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34239DC))(this);
	}
	template <typename T = int32_t> T GetiOSScreenResolution_Fallback() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3423C68))(this);
	}
	template <typename T = void> T GetDesignHeightAndMSAA(uintptr_t designWidth, uintptr_t designHeight) {
		return ((T (*)(SystemSetting*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3422D14))(this, designWidth, designHeight);
	}
	template <typename T = bool> T CheckSpecialHeight(uintptr_t designHeight) {
		return ((T (*)(SystemSetting*, uintptr_t))(Il2CppBase() + 0x3423D58))(this, designHeight);
	}
	template <typename T = bool> T CanExceedOriginResolution() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3422F60))(this);
	}
	template <typename T = bool> T GetDefaultEnableMSAA() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3423E30))(this);
	}
	template <typename T = bool> T get_EnableMSAA() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3423F00))(this);
	}
	template <typename T = void> T set_EnableMSAA(bool value) {
		return ((T (*)(SystemSetting*, bool))(Il2CppBase() + 0x3424080))(this, value);
	}
	template <typename T = int32_t> T GetApplyMSAALevel() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34242DC))(this);
	}
	template <typename T = bool> T CheckDeviceMSAA() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34244C0))(this);
	}
	template <typename T = Il2CppString*> T GetDeviceFullName() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34247B4))(this);
	}
	template <typename T = Il2CppString*> T GetDeviceModelName() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3422A30))(this);
	}
	template <typename T = Il2CppString*> T GetVendorName() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3423164))(this);
	}
	template <typename T = Il2CppString*> T GetGPUName() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342338C))(this);
	}
	template <typename T = uintptr_t> static T NewThread(uintptr_t start) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3424908))(0, start);
	}
	template <typename T = bool> static T UseMinStackSize() {
		return ((T (*)(void *))(Il2CppBase() + 0x3424AA8))(0);
	}
	template <typename T = bool> static T IsLowMidMemoryDevice() {
		return ((T (*)(void *))(Il2CppBase() + 0x341F860))(0);
	}
	template <typename T = bool> static T IsLowMemoryDevice() {
		return ((T (*)(void *))(Il2CppBase() + 0x341F6EC))(0);
	}
	template <typename T = bool> static T IsMidMemoryDevice() {
		return ((T (*)(void *))(Il2CppBase() + 0x3424B70))(0);
	}
	template <typename T = bool> static T IsMemoryCritical() {
		return ((T (*)(void *))(Il2CppBase() + 0x3424D7C))(0);
	}
	template <typename T = void> T CheckLowPerfGPUDevices() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341A8DC))(this);
	}
	template <typename T = void> T DefineLowPerfGPUDevices() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3424FD4))(this);
	}
	template <typename T = void> T CheckGPUName() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3425148))(this);
	}
	template <typename T = void> T TryParseStringToListContainer(Il2CppString* s, Il2CppList<Il2CppString*>* c) {
		return ((T (*)(SystemSetting*, Il2CppString*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x34252E8))(this, s, c);
	}
	template <typename T = void> T ParseVSSDangerousConfigurations(Il2CppString* os, Il2CppString* manufacturer, Il2CppString* models) {
		return ((T (*)(SystemSetting*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3425554))(this, os, manufacturer, models);
	}
	template <typename T = bool> T CheckModelName() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3425678))(this);
	}
	template <typename T = bool> T CheckOSAndManufacturer() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3425804))(this);
	}
	template <typename T = bool> T JudgeAndroidDangerousOS() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3425B74))(this);
	}
	template <typename T = void> T ToggleAndroidDangerousOS(bool val) {
		return ((T (*)(SystemSetting*, bool))(Il2CppBase() + 0x3425CB8))(this, val);
	}
	template <typename T = bool> T IsAndroidDangerousOS() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341F9D4))(this);
	}
	template <typename T = void> T ValidateAndroidDangerousOS() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341CAA0))(this);
	}
	template <typename T = void> T PostCheckGraphicsSetting_AndroidVSS() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3420BE8))(this);
	}
	template <typename T = void> T InitCurrentPlayerSettings() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34199CC))(this);
	}
	template <typename T = void> T InitAudio() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341A7B0))(this);
	}
	template <typename T = void> T ApplyCurrentAudioQuality() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34260A0))(this);
	}
	template <typename T = void> T ApplyAudioQualitySetting(uintptr_t level) {
		return ((T (*)(SystemSetting*, uintptr_t))(Il2CppBase() + 0x341D330))(this, level);
	}
	template <typename T = bool> static T get_ShowDof() {
		return ((T (*)(void *))(Il2CppBase() + 0x3426178))(0);
	}
	template <typename T = void> static T set_ShowDof(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3425D88))(0, value);
	}
	template <typename T = bool> static T get_EnableBloom() {
		return ((T (*)(void *))(Il2CppBase() + 0x3426228))(0);
	}
	template <typename T = void> static T set_EnableBloom(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x34262D8))(0, value);
	}
	template <typename T = bool> static T get_ShowFPS() {
		return ((T (*)(void *))(Il2CppBase() + 0x3426548))(0);
	}
	template <typename T = void> static T set_ShowFPS(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3425F14))(0, value);
	}
	template <typename T = bool> static T get_EnableShadow() {
		return ((T (*)(void *))(Il2CppBase() + 0x341B920))(0);
	}
	template <typename T = void> static T set_EnableShadow(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x34265F8))(0, value);
	}
	template <typename T = bool> static T get_EnableHDR() {
		return ((T (*)(void *))(Il2CppBase() + 0x3426784))(0);
	}
	template <typename T = void> static T set_EnableHDR(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3426834))(0, value);
	}
	template <typename T = void> T ResetEnableHDR(uintptr_t newLevel) {
		return ((T (*)(SystemSetting*, uintptr_t))(Il2CppBase() + 0x34269C0))(this, newLevel);
	}
	template <typename T = bool> T get_ForceDisableMTR() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3426AC4))(this);
	}
	template <typename T = void> T set_ForceDisableMTR(bool value) {
		return ((T (*)(SystemSetting*, bool))(Il2CppBase() + 0x3420DDC))(this, value);
	}
	template <typename T = uintptr_t> T get_BrGraphicStyleValue() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3426B54))(this);
	}
	template <typename T = void> T set_BrGraphicStyleValue(uintptr_t value) {
		return ((T (*)(SystemSetting*, uintptr_t))(Il2CppBase() + 0x3426B5C))(this, value);
	}
	template <typename T = uintptr_t> T get_PvpGraphicStyleValue() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3427018))(this);
	}
	template <typename T = void> T set_PvpGraphicStyleValue(uintptr_t value) {
		return ((T (*)(SystemSetting*, uintptr_t))(Il2CppBase() + 0x3427020))(this, value);
	}
	template <typename T = float> T get_Dpi() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3427120))(this);
	}
	template <typename T = void> T set_VulkanWhiteList(Il2CppString* value) {
		return ((T (*)(SystemSetting*, Il2CppString*))(Il2CppBase() + 0x3427128))(this, value);
	}
	template <typename T = void> T set_ADPWhiteList(Il2CppString* value) {
		return ((T (*)(SystemSetting*, Il2CppString*))(Il2CppBase() + 0x3427394))(this, value);
	}
	template <typename T = void> T set_CDN_Timeout(int32_t value) {
		return ((T (*)(SystemSetting*, int32_t))(Il2CppBase() + 0x34275C4))(this, value);
	}
	template <typename T = int32_t> T get_ShaderLOD() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3427650))(this);
	}
	template <typename T = void> T set_ShaderLOD(int32_t value) {
		return ((T (*)(SystemSetting*, int32_t))(Il2CppBase() + 0x3427658))(this, value);
	}
	template <typename T = int32_t> T get_AudioMaxCount() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3427660))(this);
	}
	template <typename T = float> T get_DecalAlivetime() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3427668))(this);
	}
	template <typename T = void> T set_DecalAlivetime(float value) {
		return ((T (*)(SystemSetting*, float))(Il2CppBase() + 0x3427670))(this, value);
	}
	template <typename T = int32_t> T get_UnityQualityLevel() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3427678))(this);
	}
	template <typename T = int32_t> T get_ParticleLODBias() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3427680))(this);
	}
	template <typename T = void> T set_ParticleLODBias(int32_t value) {
		return ((T (*)(SystemSetting*, int32_t))(Il2CppBase() + 0x3427688))(this, value);
	}
	template <typename T = float> T get_SAMediumLayerDistBias() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3427690))(this);
	}
	template <typename T = void> T set_SAMediumLayerDistBias(float value) {
		return ((T (*)(SystemSetting*, float))(Il2CppBase() + 0x3427698))(this, value);
	}
	template <typename T = float> T get_SASmallLayerDistBias() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34276A0))(this);
	}
	template <typename T = void> T set_SASmallLayerDistBias(float value) {
		return ((T (*)(SystemSetting*, float))(Il2CppBase() + 0x34276A8))(this, value);
	}
	template <typename T = bool> T get_DisableSceneGONotImportant() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34276B0))(this);
	}
	template <typename T = void> T set_DisableSceneGONotImportant(bool value) {
		return ((T (*)(SystemSetting*, bool))(Il2CppBase() + 0x34276B8))(this, value);
	}
	template <typename T = float> T get_BRfixedDeltaTime() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341B9D0))(this);
	}
	template <typename T = float> T get_PVPfixedDeltaTime() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341C270))(this);
	}
	template <typename T = float> T get_PVEfixedDeltaTime() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341C268))(this);
	}
	template <typename T = float> T get_VehiclefixedDeltaTime() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x341C880))(this);
	}
	template <typename T = int32_t> T get_LimitMinFps() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34276C0))(this);
	}
	template <typename T = float> T get_MaxParticleDeltaTime() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34276C8))(this);
	}
	template <typename T = bool> T get_FireImpactEffectOnlyForFirstHit() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34276D0))(this);
	}
	template <typename T = float> T get_TimeForDakenScreenBrightness() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34277B0))(this);
	}
	template <typename T = int32_t> T get_BrightnessForDakenScreen() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34277B8))(this);
	}
	template <typename T = int32_t> T get_RuntimeMaxLODLevel() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34277C0))(this);
	}
	template <typename T = int32_t> T get_TextureMasterLimit() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34277C8))(this);
	}
	template <typename T = float> T get_FoliageLODBias() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34277D0))(this);
	}
	template <typename T = float> T get_SceneStreamingDistBias() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34277D8))(this);
	}
	template <typename T = float> T get_LowestSceneStreamingDistBias() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34277E0))(this);
	}
	template <typename T = int32_t> static T get_CustomAnchorDelta() {
		return ((T (*)(void *))(Il2CppBase() + 0x34277E8))(0);
	}
	template <typename T = void> static T set_CustomAnchorDelta(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3427898))(0, value);
	}
	template <typename T = int32_t> static T get_Y_CustomAnchorDelta() {
		return ((T (*)(void *))(Il2CppBase() + 0x3427978))(0);
	}
	template <typename T = void> static T set_Y_CustomAnchorDelta(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3427A28))(0, value);
	}
	template <typename T = bool> T get_TacticalMap() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3427B08))(this);
	}
	template <typename T = void> T set_TacticalMap(bool value) {
		return ((T (*)(SystemSetting*, bool))(Il2CppBase() + 0x3427BE4))(this, value);
	}
	template <typename T = bool> T get_TacticalVoice() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3427CD4))(this);
	}
	template <typename T = void> T set_TacticalVoice(bool value) {
		return ((T (*)(SystemSetting*, bool))(Il2CppBase() + 0x3427DB0))(this, value);
	}
	template <typename T = float> T get_TacticalMapOpacity() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3427EA0))(this);
	}
	template <typename T = void> T set_TacticalMapOpacity(float value) {
		return ((T (*)(SystemSetting*, float))(Il2CppBase() + 0x3427FCC))(this, value);
	}
	template <typename T = bool> static T IsLowFPS() {
		return ((T (*)(void *))(Il2CppBase() + 0x34280BC))(0);
	}
	template <typename T = bool> static T CanPlaySound() {
		return ((T (*)(void *))(Il2CppBase() + 0x34281E0))(0);
	}
	template <typename T = uintptr_t> T get_SettingsChatDataMgr() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342832C))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T GetListWithoutZero(Il2CppList<int32_t>* originalList) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x34283DC))(this, originalList);
	}
	template <typename T = Il2CppList<int32_t>*> T get_BRChatShortcutWholeList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34285CC))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_BRChatShortcutList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3428784))(this);
	}
	template <typename T = void> T set_BRChatShortcutList(Il2CppList<int32_t>* value) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x34287A4))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVEClassicChatShortcutWholeList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3428894))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVEClassicChatShortcutList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3428A4C))(this);
	}
	template <typename T = void> T set_PVEClassicChatShortcutList(Il2CppList<int32_t>* value) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x3428A6C))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVERaidChatShortcutWholeList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3428B5C))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVERaidChatShortcutList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3428D14))(this);
	}
	template <typename T = void> T set_PVERaidChatShortcutList(Il2CppList<int32_t>* value) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x3428D34))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVPChatShortcutList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3428E24))(this);
	}
	template <typename T = void> T set_PVPChatShortcutList(Il2CppList<int32_t>* value) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x342905C))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVP_TDM_ChatShortcutWholeList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342914C))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVP_TDM_ChatShortcutList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3429304))(this);
	}
	template <typename T = void> T set_PVP_TDM_ChatShortcutList(Il2CppList<int32_t>* value) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x3429324))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVP_FL_ChatShortcutWholeList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3429414))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVP_FL_ChatShortcutList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3429418))(this);
	}
	template <typename T = void> T set_PVP_FL_ChatShortcutList(Il2CppList<int32_t>* value) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x3429438))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVP_DOM_ChatShortcutWholeList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3429528))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVP_DOM_ChatShortcutList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34296E0))(this);
	}
	template <typename T = void> T set_PVP_DOM_ChatShortcutList(Il2CppList<int32_t>* value) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x3429700))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVP_SD_A_ChatShortcutWholeList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34297F0))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVP_SD_A_ChatShortcutList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x34299A8))(this);
	}
	template <typename T = void> T set_PVP_SD_A_ChatShortcutList(Il2CppList<int32_t>* value) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x34299C8))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVP_SD_D_ChatShortcutWholeList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3429AB8))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVP_SD_D_ChatShortcutList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3429C70))(this);
	}
	template <typename T = void> T set_PVP_SD_D_ChatShortcutList(Il2CppList<int32_t>* value) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x3429C90))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVP_HP_ChatShortcutWholeList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3429D80))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVP_HP_ChatShortcutList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3429F38))(this);
	}
	template <typename T = void> T set_PVP_HP_ChatShortcutList(Il2CppList<int32_t>* value) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x3429F58))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVPSniperOnlyChatShortcutWholeList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342A048))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVPSniperOnlyChatShortcutList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342A200))(this);
	}
	template <typename T = void> T set_PVPSniperOnlyChatShortcutList(Il2CppList<int32_t>* value) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x342A220))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVPBoomChatShortcutWholeList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342A310))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVPBoomChatShortcutList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342A4C8))(this);
	}
	template <typename T = void> T set_PVPBoomChatShortcutList(Il2CppList<int32_t>* value) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x342A4E8))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVPPracticeVSAIChatShortcutWholeList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342A5D8))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVPPracticeVSAIChatShortcutList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342A790))(this);
	}
	template <typename T = void> T set_PVPPracticeVSAIChatShortcutList(Il2CppList<int32_t>* value) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x342A7B0))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVPFFAChatShortcutWholeList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342A8A0))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVPFFAChatShortcutList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342AA58))(this);
	}
	template <typename T = void> T set_PVPFFAChatShortcutList(Il2CppList<int32_t>* value) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x342AA78))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVPGunGameChatShortcutWholeList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342AB68))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVPGunGameChatShortcutList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342AD20))(this);
	}
	template <typename T = void> T set_PVPGunGameChatShortcutList(Il2CppList<int32_t>* value) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x342AD40))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVPOneShotOneKillChatShortcutWholeList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342AE30))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVPOneShotOneKillChatShortcutList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342AFE8))(this);
	}
	template <typename T = void> T set_PVPOneShotOneKillChatShortcutList(Il2CppList<int32_t>* value) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x342B008))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVPSticksAndStonesChatShortcutWholeList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342B0F8))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVPSticksAndStonesChatShortcutList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342B2B0))(this);
	}
	template <typename T = void> T set_PVPSticksAndStonesChatShortcutList(Il2CppList<int32_t>* value) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x342B2D0))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVP_CATCAT_ChatShortcutWholeList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342B3C0))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVP_CATCAT_ChatShortcutList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342B578))(this);
	}
	template <typename T = void> T set_PVP_CATCAT_ChatShortcutList(Il2CppList<int32_t>* value) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x342B598))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVP_CATHUMAN_ChatShortcutWholeList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342B688))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVP_CATHUMAN_ChatShortcutList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342B840))(this);
	}
	template <typename T = void> T set_PVP_CATHUMAN_ChatShortcutList(Il2CppList<int32_t>* value) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x342B860))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVP_HUMANHUMAN_ChatShortcutWholeList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342B950))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVP_HUMANHUMAN_ChatShortcutList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342BB08))(this);
	}
	template <typename T = void> T set_PVP_HUMANHUMAN_ChatShortcutList(Il2CppList<int32_t>* value) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x342BB28))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVP_HUMANCAT_ChatShortcutWholeList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342BC18))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PVP_HUMANCAT_ChatShortcutList() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342BDD0))(this);
	}
	template <typename T = void> T set_PVP_HUMANCAT_ChatShortcutList(Il2CppList<int32_t>* value) {
		return ((T (*)(SystemSetting*, Il2CppList<int32_t>*))(Il2CppBase() + 0x342BDF0))(this, value);
	}
	template <typename T = bool> T get_GamePadHidSwitch() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342BEE0))(this);
	}
	template <typename T = void> T set_GamePadHidSwitch(bool value) {
		return ((T (*)(SystemSetting*, bool))(Il2CppBase() + 0x342BFCC))(this, value);
	}
	template <typename T = uintptr_t> T get_CullingMethod() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342C0F4))(this);
	}
	template <typename T = void> T set_CullingMethod(uintptr_t value) {
		return ((T (*)(SystemSetting*, uintptr_t))(Il2CppBase() + 0x342C0FC))(this, value);
	}
	template <typename T = bool> static T GetDisableWeaponFireMuzzleEffectForLowQuality() {
		return ((T (*)(void *))(Il2CppBase() + 0x342C210))(0);
	}
	template <typename T = void> static T SetDisableWeaponFireMuzzleEffectForLowQuality(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x342C378))(0, value);
	}
	template <typename T = bool> static T GetDisableWeaponFireShellDropEffectForLowQuality() {
		return ((T (*)(void *))(Il2CppBase() + 0x342C480))(0);
	}
	template <typename T = void> static T SetDisableWeaponFireShellDropEffectForLowQuality(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x342C5E8))(0, value);
	}
	template <typename T = bool> static T GetDisableWeaponBulletLineEffectForLowQuality() {
		return ((T (*)(void *))(Il2CppBase() + 0x342C6F0))(0);
	}
	template <typename T = void> static T SetDisableWeaponBulletLineEffectForLowQuality(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x342C858))(0, value);
	}
	template <typename T = bool> static T GetDisableWeaponImpactEffectForLowQuality() {
		return ((T (*)(void *))(Il2CppBase() + 0x342C960))(0);
	}
	template <typename T = void> static T SetDisableWeaponImpactEffectForLowQuality(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x342CAC8))(0, value);
	}
	template <typename T = int32_t> static T GetMaxWeaponImpactEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x342CBD0))(0);
	}
	template <typename T = void> static T SetMaxWeaponImpactEffectForLowQuality(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x342CD2C))(0, value);
	}
	template <typename T = bool> static T GetDisableWeaponImpactDecalForLowQuality() {
		return ((T (*)(void *))(Il2CppBase() + 0x342CE34))(0);
	}
	template <typename T = void> static T SetDisableWeaponImpactDecalForLowQuality(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x342CF9C))(0, value);
	}
	template <typename T = float> T get_OverrideFarClipPlane() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342D0A4))(this);
	}
	template <typename T = void> T set_OverrideFarClipPlane(float value) {
		return ((T (*)(SystemSetting*, float))(Il2CppBase() + 0x342D0AC))(this, value);
	}
	template <typename T = void> T ChangeGraphicsStyles(Il2CppArray<uintptr_t>* profilers) {
		return ((T (*)(SystemSetting*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x342D0B4))(this, profilers);
	}
	template <typename T = void> T ClearGraphicsStyles() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342D194))(this);
	}
	template <typename T = void> T ApplyGraphicsStyle() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x3426C5C))(this);
	}
	template <typename T = void> T ApplyTemporaryOverridePostProfile(uintptr_t tempProfile) {
		return ((T (*)(SystemSetting*, uintptr_t))(Il2CppBase() + 0x342D274))(this, tempProfile);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SystemSetting*))(Il2CppBase() + 0x342D4D8))(this);
	}

};

}
