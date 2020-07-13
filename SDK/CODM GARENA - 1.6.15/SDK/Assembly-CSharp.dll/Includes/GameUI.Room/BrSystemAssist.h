#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class BrSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "BrSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqBrMatchConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrMatchConfigResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ReqBrMatchConfig() {
		return ((T (*)(BrSystemAssist*))(Il2CppBase() + 0x2CCDC20))(this);
	}
	template <typename T = bool> T OnBrMatchConfigResponse(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(BrSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2CCDD50))(this, message, errStr);
	}

};

}
