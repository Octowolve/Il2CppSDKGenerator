#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetKeyUp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetKeyUp"));
	}

	template <typename T = uintptr_t> T& key() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sendEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetKeyUp*))(Il2CppBase() + 0x508DC20))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetKeyUp*))(Il2CppBase() + 0x508DC34))(this);
	}

};

}
