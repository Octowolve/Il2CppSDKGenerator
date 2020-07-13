#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowPostVersionUpdateCheckController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowPostVersionUpdateCheckController"));
	}

	template <typename T = uintptr_t> T& m_ProgressController() {
		return *(T*)((uintptr_t)this + 0x54);
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
	template <typename T = uintptr_t> static T& __Hotfix0_DoFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostDoFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostVersionUpdateCheck_Process() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostVersionUpdateCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostVersionUpdateCheckInFrames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GarbageCollect_Mono() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyHotFix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowPostVersionUpdateCheckController*))(Il2CppBase() + 0x2E62764))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowPostVersionUpdateCheckController*))(Il2CppBase() + 0x2E62854))(this);
	}
	template <typename T = float> T RunTimeLimitation() {
		return ((T (*)(LoadingFlowPostVersionUpdateCheckController*))(Il2CppBase() + 0x2E628F4))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowPostVersionUpdateCheckController*))(Il2CppBase() + 0x2E62994))(this);
	}
	template <typename T = void> T DoFlow() {
		return ((T (*)(LoadingFlowPostVersionUpdateCheckController*))(Il2CppBase() + 0x2E62AE8))(this);
	}
	template <typename T = void> T PostDoFlow() {
		return ((T (*)(LoadingFlowPostVersionUpdateCheckController*))(Il2CppBase() + 0x2E63174))(this);
	}
	template <typename T = void> T PostVersionUpdateCheck_Process() {
		return ((T (*)(LoadingFlowPostVersionUpdateCheckController*))(Il2CppBase() + 0x2E63218))(this);
	}
	template <typename T = void> T PostVersionUpdateCheck() {
		return ((T (*)(LoadingFlowPostVersionUpdateCheckController*))(Il2CppBase() + 0x2E633E8))(this);
	}
	template <typename T = uintptr_t> T PostVersionUpdateCheckInFrames() {
		return ((T (*)(LoadingFlowPostVersionUpdateCheckController*))(Il2CppBase() + 0x2E63504))(this);
	}
	template <typename T = void> T GarbageCollect_Mono() {
		return ((T (*)(LoadingFlowPostVersionUpdateCheckController*))(Il2CppBase() + 0x2E635EC))(this);
	}
	template <typename T = void> T ApplyHotFix() {
		return ((T (*)(LoadingFlowPostVersionUpdateCheckController*))(Il2CppBase() + 0x2E630DC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowPostVersionUpdateCheckController*))(Il2CppBase() + 0x2E6369C))(this);
	}
	template <typename T = float> T xLuaBaseProxy_RunTimeLimitation() {
		return ((T (*)(LoadingFlowPostVersionUpdateCheckController*))(Il2CppBase() + 0x2E636A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowPostVersionUpdateCheckController*))(Il2CppBase() + 0x2E636A4))(this);
	}

};

}
