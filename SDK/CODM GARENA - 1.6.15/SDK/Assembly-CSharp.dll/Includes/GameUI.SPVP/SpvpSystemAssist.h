#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SPVP {

class SpvpSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SPVP", "SpvpSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqMatchConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMatchConfigResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ReqMatchConfig() {
		return ((T (*)(SpvpSystemAssist*))(Il2CppBase() + 0x299C3B0))(this);
	}
	template <typename T = bool> T OnMatchConfigResponse(uintptr_t Msg) {
		return ((T (*)(SpvpSystemAssist*, uintptr_t))(Il2CppBase() + 0x299C4E0))(this, Msg);
	}

};

}
