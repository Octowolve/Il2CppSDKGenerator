#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetMouseButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetMouseButton"));
	}

	template <typename T = uintptr_t> T& button() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetMouseButton*))(Il2CppBase() + 0x508EDC8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetMouseButton*))(Il2CppBase() + 0x508EDD4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetMouseButton*))(Il2CppBase() + 0x508EEA8))(this);
	}

};

}
