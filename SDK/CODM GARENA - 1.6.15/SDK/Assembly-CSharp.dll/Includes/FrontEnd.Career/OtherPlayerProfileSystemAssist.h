#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd.Career {

class OtherPlayerProfileSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd.Career", "OtherPlayerProfileSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isShowLodaing() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestViewOtherPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ViewOtherPlayerResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T RequestViewOtherPlayer(uint64_t playerId, Il2CppArray<uintptr_t>* sign, int32_t source) {
		return ((T (*)(OtherPlayerProfileSystemAssist*, uint64_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x290C004))(this, playerId, sign, source);
	}
	template <typename T = void> T ViewOtherPlayerResponse(uintptr_t res) {
		return ((T (*)(OtherPlayerProfileSystemAssist*, uintptr_t))(Il2CppBase() + 0x290C288))(this, res);
	}

};

}
