#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowCheckDeviceLimitationController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowCheckDeviceLimitationController"));
	}

	template <typename T = uint64_t> static T& BYTES_MBYTES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint64_t> T& BYTES_LIMITATION() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunTimeLimitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDiskAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRAMLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGraphicLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckOtherLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsInWhiteList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyDeviceNotMeetLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishFlowSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowCheckDeviceLimitationController*))(Il2CppBase() + 0x2E3BEB0))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowCheckDeviceLimitationController*))(Il2CppBase() + 0x2E3BF50))(this);
	}
	template <typename T = float> T RunTimeLimitation() {
		return ((T (*)(LoadingFlowCheckDeviceLimitationController*))(Il2CppBase() + 0x2E3BFF0))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowCheckDeviceLimitationController*))(Il2CppBase() + 0x2E3C090))(this);
	}
	template <typename T = bool> T CheckDiskAvailable() {
		return ((T (*)(LoadingFlowCheckDeviceLimitationController*))(Il2CppBase() + 0x2E3C7A4))(this);
	}
	template <typename T = bool> T CheckRAMLimit() {
		return ((T (*)(LoadingFlowCheckDeviceLimitationController*))(Il2CppBase() + 0x2E3C9FC))(this);
	}
	template <typename T = bool> T CheckGraphicLimit() {
		return ((T (*)(LoadingFlowCheckDeviceLimitationController*))(Il2CppBase() + 0x2E3CDD4))(this);
	}
	template <typename T = bool> T CheckOtherLimit() {
		return ((T (*)(LoadingFlowCheckDeviceLimitationController*))(Il2CppBase() + 0x2E3CFE8))(this);
	}
	template <typename T = bool> T CheckIsInWhiteList() {
		return ((T (*)(LoadingFlowCheckDeviceLimitationController*))(Il2CppBase() + 0x2E3C5D4))(this);
	}
	template <typename T = void> T OnNotifyDeviceNotMeetLimit(uintptr_t result, int32_t context) {
		return ((T (*)(LoadingFlowCheckDeviceLimitationController*, uintptr_t, int32_t))(Il2CppBase() + 0x2E3D088))(this, result, context);
	}
	template <typename T = void> T FinishFlowSuccess() {
		return ((T (*)(LoadingFlowCheckDeviceLimitationController*))(Il2CppBase() + 0x2E3C674))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowCheckDeviceLimitationController*))(Il2CppBase() + 0x2E3D184))(this);
	}
	template <typename T = float> T xLuaBaseProxy_RunTimeLimitation() {
		return ((T (*)(LoadingFlowCheckDeviceLimitationController*))(Il2CppBase() + 0x2E3D188))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowCheckDeviceLimitationController*))(Il2CppBase() + 0x2E3D18C))(this);
	}

};

}
