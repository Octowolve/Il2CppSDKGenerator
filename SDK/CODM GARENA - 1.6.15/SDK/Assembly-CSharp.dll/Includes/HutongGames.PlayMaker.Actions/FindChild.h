#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FindChild
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FindChild"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& childName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(FindChild*))(Il2CppBase() + 0x504E400))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FindChild*))(Il2CppBase() + 0x504E4D0))(this);
	}
	template <typename T = void> T DoFindChild() {
		return ((T (*)(FindChild*))(Il2CppBase() + 0x504E4F0))(this);
	}

};

}
