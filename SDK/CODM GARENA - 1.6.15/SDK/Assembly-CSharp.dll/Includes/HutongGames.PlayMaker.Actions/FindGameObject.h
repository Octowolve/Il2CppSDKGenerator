#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FindGameObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FindGameObject"));
	}

	template <typename T = uintptr_t> T& objectName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& withTag() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& store() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(FindGameObject*))(Il2CppBase() + 0x504EDDC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FindGameObject*))(Il2CppBase() + 0x504EED4))(this);
	}
	template <typename T = void> T Find() {
		return ((T (*)(FindGameObject*))(Il2CppBase() + 0x504EEF4))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(FindGameObject*))(Il2CppBase() + 0x504F1CC))(this);
	}

};

}
