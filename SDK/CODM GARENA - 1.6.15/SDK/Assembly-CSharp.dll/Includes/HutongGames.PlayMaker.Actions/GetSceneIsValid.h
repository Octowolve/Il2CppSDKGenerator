#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetSceneIsValid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetSceneIsValid"));
	}

	template <typename T = uintptr_t> T& isValid() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& isValidEvent() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& isNotValidEvent() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetSceneIsValid*))(Il2CppBase() + 0x50932E4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetSceneIsValid*))(Il2CppBase() + 0x5093318))(this);
	}
	template <typename T = void> T DoGetSceneIsValid() {
		return ((T (*)(GetSceneIsValid*))(Il2CppBase() + 0x5093340))(this);
	}

};

}
