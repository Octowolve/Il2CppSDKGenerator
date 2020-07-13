#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetChildNum
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetChildNum"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& childIndex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& store() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetChildNum*))(Il2CppBase() + 0x50872FC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetChildNum*))(Il2CppBase() + 0x508732C))(this);
	}
	template <typename T = uintptr_t> T DoGetChildNum(uintptr_t go) {
		return ((T (*)(GetChildNum*, uintptr_t))(Il2CppBase() + 0x5087398))(this, go);
	}

};

}
