#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowLoginWaitForVideoFinishController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowLoginWaitForVideoFinishController"));
	}

	template <typename T = float> static T& CHECK_TIME_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOverTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckVideoFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowLoginWaitForVideoFinishController*))(Il2CppBase() + 0x2E5BDC8))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowLoginWaitForVideoFinishController*))(Il2CppBase() + 0x2E5BE68))(this);
	}
	template <typename T = float> T RunTimeLimitation() {
		return ((T (*)(LoadingFlowLoginWaitForVideoFinishController*))(Il2CppBase() + 0x2E5BF08))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowLoginWaitForVideoFinishController*))(Il2CppBase() + 0x2E5BFAC))(this);
	}
	template <typename T = void> T OnOverTime() {
		return ((T (*)(LoadingFlowLoginWaitForVideoFinishController*))(Il2CppBase() + 0x2E5C190))(this);
	}
	template <typename T = void> T CheckVideoFinish() {
		return ((T (*)(LoadingFlowLoginWaitForVideoFinishController*))(Il2CppBase() + 0x2E5C308))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowLoginWaitForVideoFinishController*))(Il2CppBase() + 0x2E5C470))(this);
	}
	template <typename T = float> T xLuaBaseProxy_RunTimeLimitation() {
		return ((T (*)(LoadingFlowLoginWaitForVideoFinishController*))(Il2CppBase() + 0x2E5C474))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowLoginWaitForVideoFinishController*))(Il2CppBase() + 0x2E5C478))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOverTime() {
		return ((T (*)(LoadingFlowLoginWaitForVideoFinishController*))(Il2CppBase() + 0x2E5C47C))(this);
	}

};

}
