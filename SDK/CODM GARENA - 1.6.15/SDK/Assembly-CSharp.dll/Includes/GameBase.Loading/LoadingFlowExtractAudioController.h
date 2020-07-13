#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowExtractAudioController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowExtractAudioController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssetLoadPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBankExtracted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowExtractAudioController*))(Il2CppBase() + 0x2E46BD4))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowExtractAudioController*))(Il2CppBase() + 0x2E46C98))(this);
	}
	template <typename T = void> T OnAssetLoadPercent(Il2CppString* loadingFileName, float percent) {
		return ((T (*)(LoadingFlowExtractAudioController*, Il2CppString*, float))(Il2CppBase() + 0x2E46DE8))(this, loadingFileName, percent);
	}
	template <typename T = void> T OnBankExtracted() {
		return ((T (*)(LoadingFlowExtractAudioController*))(Il2CppBase() + 0x2E46D3C))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowExtractAudioController*))(Il2CppBase() + 0x2E46F4C))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(LoadingFlowExtractAudioController*))(Il2CppBase() + 0x2E46FEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowExtractAudioController*))(Il2CppBase() + 0x2E47094))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowExtractAudioController*))(Il2CppBase() + 0x2E47098))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(LoadingFlowExtractAudioController*))(Il2CppBase() + 0x2E4709C))(this);
	}

};

}
