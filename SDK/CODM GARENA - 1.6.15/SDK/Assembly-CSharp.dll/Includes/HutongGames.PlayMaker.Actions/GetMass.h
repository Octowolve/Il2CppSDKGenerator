#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetMass
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetMass"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetMass*))(Il2CppBase() + 0x508E190))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetMass*))(Il2CppBase() + 0x508E19C))(this);
	}
	template <typename T = void> T DoGetMass() {
		return ((T (*)(GetMass*))(Il2CppBase() + 0x508E1BC))(this);
	}

};

}
