#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class PlatformVersionConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "PlatformVersionConfig"));
	}

	template <typename T = Il2CppString*> T& svr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& patch() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& cdn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& puffer_cdn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ds_ping() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& gc() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& gc_lowend() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& min_gc_interval() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& min_gc_interval_lowend() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& unloadABSF() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& abLoadAssetLog() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& enableAOI() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& qa_monitor_url() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& ftue_flags() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& tapm() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& xlua() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& pandora() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& crash() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& device_check() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& gov() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& gsdk() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& pvp_auto() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& tss_disable_send() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& svc_cache() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& mesh_lod() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& disable_soc() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& enable_conservative_soc() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& vulkan_devices() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& adp_devices() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& cdn_timeout() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& upload_eigen_v2() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& force_sync_load_ab() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& enable_extreme() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& enable_higher_framerate() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& higher_framerate_devices_ios() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& higher_framerate_devices_android_models() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& higher_framerate_devices_android_gpu() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& enable_configurable_res() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& force_destroy_vehicle() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& unload_raw_assets() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& listen_create_gpu_program() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& enable_rag_doll_on_low_end_device() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& enable_ragdoll() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& enable_adaptive_agc() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& max_load_ab_async_count() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& max_load_asset_async_from_ab_count() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& warm_up_svc() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& warm_up_svc_impl() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& back_up_low_mem_strategy() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& shader_compile_shared_buf() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& unsafe_bundle_loading() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& weapon_lod_strip() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& distance_bias_ratio_on_mem_critical() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& input_setting_ver() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = int32_t> T& gamepad() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& async_muzzle_flash() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = int32_t> T& asset_preloader() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& asset_preloader_lowmem() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = int32_t> T& asset_preloader_android_veryhigh() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& monobehaviour_asset_manager() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& scene_asset_reference_counter() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& scene_asset_reference_counter_delayed_unload() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppString*> T& vss_dangerous_models() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppString*> T& vss_dangerous_os() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppString*> T& vss_dangerous_vendor() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& custom_allocator() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = int32_t> T& il2cpp_reflection_opt() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int32_t> T& custom_allocator_logs() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = int32_t> T& enable_dense_hash_map_for_android() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> T& resrepair() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& forceappupdate() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppString*> T& forceappupdateversion() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = Il2CppString*> T& termsofuseurl() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppString*> T& privacypolicyurl() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = bool> T& applereview() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppString*> T& applesubmissiondsdomain() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = bool> T& reportloginflowdetail() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& DynamicResources() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppArray<uintptr_t>*>*> T& DynamicResourcesBytes() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = int32_t> T& enable_ironsrc() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = int32_t> T& enable_startvideo() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = int32_t> T& enable_videousewwise() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = int32_t> T& enable_halloween() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = int32_t> T& festival_index() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = bool> T& useversionupdateinfo() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = bool> T& useannouncement() {
		return *(T*)((uintptr_t)this + 0x159);
	}
	template <typename T = bool> T& usegamepolicy() {
		return *(T*)((uintptr_t)this + 0x15A);
	}
	template <typename T = bool> T& openapplelogin() {
		return *(T*)((uintptr_t)this + 0x15B);
	}
	template <typename T = Il2CppString*> T& loginhelpurl() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = bool> T& openhelpbtn() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = bool> T& openloginvng18() {
		return *(T*)((uintptr_t)this + 0x161);
	}
	template <typename T = bool> T& announcementforresource() {
		return *(T*)((uintptr_t)this + 0x162);
	}
	template <typename T = bool> T& openlanguagecheck() {
		return *(T*)((uintptr_t)this + 0x163);
	}
	template <typename T = float> T& litePackTimeDelay1() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = float> T& litePackTimeDelay2() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = float> T& litePackTimeDelay3() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = int32_t> T& litePackMaxDownSpeed() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = int32_t> T& res_update_limit_cellular() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = int32_t> T& res_update_limit_wifi() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& litePackNetNoticeType() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = int32_t> T& litePackRetryNoticeType() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = int32_t> T& litePackDiskLimit() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_EnableDSPing() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CC74))(this);
	}
	template <typename T = int32_t> T get_ActiveGCInterval() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CC84))(this);
	}
	template <typename T = int32_t> T get_MinGCInterval() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CD38))(this);
	}
	template <typename T = bool> T get_UnloadABSF() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CDEC))(this);
	}
	template <typename T = bool> T get_ABLoadAssetLog() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CDFC))(this);
	}
	template <typename T = bool> T get_EnableAOI() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CE0C))(this);
	}
	template <typename T = Il2CppString*> T get_QAMonitorUrl() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CE1C))(this);
	}
	template <typename T = bool> T get_EnableTAPM() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CE24))(this);
	}
	template <typename T = bool> T get_EnableXLua() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CE34))(this);
	}
	template <typename T = bool> T get_EnablePandora() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CE44))(this);
	}
	template <typename T = bool> T get_CrashOnException() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CE54))(this);
	}
	template <typename T = bool> T get_EnableDeviceCheck() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CF60))(this);
	}
	template <typename T = bool> T get_IsGOVReview() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CF70))(this);
	}
	template <typename T = bool> T get_EnableGSDK() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CF80))(this);
	}
	template <typename T = bool> T get_EnablePVPAutoFire() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CF90))(this);
	}
	template <typename T = bool> T get_TSSDiableSend() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CFA0))(this);
	}
	template <typename T = int32_t> T get_SVCCache() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CFB0))(this);
	}
	template <typename T = bool> T get_EnableMeshLOD() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CFB8))(this);
	}
	template <typename T = bool> T get_DisableSOC() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CFC8))(this);
	}
	template <typename T = bool> T get_EnableConservativeSOC() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CFD8))(this);
	}
	template <typename T = Il2CppString*> T get_VulkanDevices() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CFE8))(this);
	}
	template <typename T = Il2CppString*> T get_ADPDevices() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CFF0))(this);
	}
	template <typename T = int32_t> T get_CDN_Timeout() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252CFF8))(this);
	}
	template <typename T = bool> T get_Upload_Eigen() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D000))(this);
	}
	template <typename T = bool> T get_ForceSyncLoadAB() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D008))(this);
	}
	template <typename T = bool> T get_EnableExtreme() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D018))(this);
	}
	template <typename T = bool> T get_EnableHigherFrameRate() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D028))(this);
	}
	template <typename T = Il2CppString*> T get_HigherFrameRateDevices_iOS_Models() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D038))(this);
	}
	template <typename T = Il2CppString*> T get_HigherFrameRateDevices_Android_Models() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D040))(this);
	}
	template <typename T = Il2CppString*> T get_HigherFrameRateDevices_Android_GPUs() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D048))(this);
	}
	template <typename T = bool> T get_EnableConfigurableResolution() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D050))(this);
	}
	template <typename T = bool> T get_ForceDestroyVehicleWhenDespawn() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D060))(this);
	}
	template <typename T = bool> T get_EnableUnloadRawAssets() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D070))(this);
	}
	template <typename T = bool> T get_ReportShaderCompile() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D080))(this);
	}
	template <typename T = bool> T get_EnableRagDollOnLowEndDevice() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D140))(this);
	}
	template <typename T = bool> T get_EnableRagDoll() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D150))(this);
	}
	template <typename T = bool> T get_EnableAdaptiveAGC() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D160))(this);
	}
	template <typename T = int32_t> T get_MaxLoadABAsyncCount() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D170))(this);
	}
	template <typename T = int32_t> T get_MaxLoadAssetAsyncFromABCount() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D178))(this);
	}
	template <typename T = bool> T get_ShouldWarmUpSVC() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D180))(this);
	}
	template <typename T = int32_t> T get_WarmUpShaderImpl() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D190))(this);
	}
	template <typename T = bool> T get_EnableBackupLowMemStrategy() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D198))(this);
	}
	template <typename T = bool> T get_EnableShaderCompileSharedBuf() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D1D8))(this);
	}
	template <typename T = bool> T get_EnableUnsafeBundleLoading() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D1E8))(this);
	}
	template <typename T = bool> T get_EnableWeaponStripLOD() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D1F8))(this);
	}
	template <typename T = int32_t> T get_DistanceBiasRatioOnMemCritical() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D208))(this);
	}
	template <typename T = int32_t> T get_InputSettingVersion() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D210))(this);
	}
	template <typename T = bool> T get_EnableGamePad() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D218))(this);
	}
	template <typename T = bool> T get_AsyncLoadMuzzleFlash() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D228))(this);
	}
	template <typename T = bool> T get_EnableAssetPreloader() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D238))(this);
	}
	template <typename T = bool> T get_EnableAssetPreloaderForLowMem() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D248))(this);
	}
	template <typename T = bool> T get_EnableAssetPreloaderForAndroidVeryHigh() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D258))(this);
	}
	template <typename T = bool> T get_UseCorrectAssetList() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D268))(this);
	}
	template <typename T = bool> T get_EnableSceneReferenceCounter() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D278))(this);
	}
	template <typename T = bool> T get_EnableSceneReferenceCounterDelayedUnload() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D288))(this);
	}
	template <typename T = Il2CppString*> T get_VSSDangerousModels() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D298))(this);
	}
	template <typename T = Il2CppString*> T get_VSSDangerousOS() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D2A0))(this);
	}
	template <typename T = Il2CppString*> T get_VSSDangerousVendor() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D2A8))(this);
	}
	template <typename T = bool> T get_UseCustomAllocator() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D2B0))(this);
	}
	template <typename T = bool> T get_EnableIL2CPPReflectionOpt() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D2C0))(this);
	}
	template <typename T = bool> T get_EnableCustomAllocatorLogs() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D2D0))(this);
	}
	template <typename T = bool> T get_EnableRemapperDenseForAndroid() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D2E0))(this);
	}
	template <typename T = bool> T get_UseResRepair() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D2F0))(this);
	}
	template <typename T = bool> T get_ForceAppUpdate() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D300))(this);
	}
	template <typename T = Il2CppString*> T get_ForceAppUpdateVersion() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D308))(this);
	}
	template <typename T = Il2CppString*> T get_TermsOfUseUrl() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x2527560))(this);
	}
	template <typename T = Il2CppString*> T get_PrivacyPolicyUrl() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x2527568))(this);
	}
	template <typename T = bool> T get_AppleReview() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D310))(this);
	}
	template <typename T = Il2CppString*> T get_AppleSubmissionDSDomain() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D318))(this);
	}
	template <typename T = bool> T get_ReportLoginFlowDetail() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D320))(this);
	}
	template <typename T = bool> T get_EnableIronSrc() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D328))(this);
	}
	template <typename T = bool> T get_EnableStartVideo() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x25262F8))(this);
	}
	template <typename T = bool> T get_EnableVideoUseWWise() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D338))(this);
	}
	template <typename T = bool> T get_EnableHalloween() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D34C))(this);
	}
	template <typename T = int32_t> T get_FestivalIndex() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D35C))(this);
	}
	template <typename T = bool> T get_UseVersionUpdateInfo() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D364))(this);
	}
	template <typename T = bool> T get_UseAnnouncement() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D36C))(this);
	}
	template <typename T = bool> T get_UseGamePolicy() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D374))(this);
	}
	template <typename T = bool> T get_OpenAppleLogin() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D37C))(this);
	}
	template <typename T = Il2CppString*> T get_LoginHelpUrl() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D384))(this);
	}
	template <typename T = bool> T get_OpenHelpBtn() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D38C))(this);
	}
	template <typename T = bool> T get_OpenLoginVng18() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D394))(this);
	}
	template <typename T = bool> T get_AnnouncementForResource() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D39C))(this);
	}
	template <typename T = bool> T get_OpenLanguageCheck() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D3A4))(this);
	}
	template <typename T = float> T get_LitePackTimeDelay1() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D3AC))(this);
	}
	template <typename T = float> T get_LitePackTimeDelay2() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D3B4))(this);
	}
	template <typename T = float> T get_LitePackTimeDelay3() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D3BC))(this);
	}
	template <typename T = int32_t> T get_LitePackMaxDownSpeed() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D3C4))(this);
	}
	template <typename T = int32_t> T get_ResSilentUpdateLimit_Cellular() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D3CC))(this);
	}
	template <typename T = int32_t> T get_ResSilentUpdateLimit_Wifi() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D3D4))(this);
	}
	template <typename T = int32_t> T get_LitePackNetNoticeType() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D3DC))(this);
	}
	template <typename T = int32_t> T get_LitePackRetryNoticeType() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D3E4))(this);
	}
	template <typename T = int32_t> T get_LitePackDiskLimit() {
		return ((T (*)(PlatformVersionConfig*))(Il2CppBase() + 0x252D3EC))(this);
	}

};

}
