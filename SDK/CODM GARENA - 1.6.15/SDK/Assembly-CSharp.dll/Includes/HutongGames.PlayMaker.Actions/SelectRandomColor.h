#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SelectRandomColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SelectRandomColor"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& colors() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& weights() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SelectRandomColor*))(Il2CppBase() + 0x4FADC00))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SelectRandomColor*))(Il2CppBase() + 0x4FADDD8))(this);
	}
	template <typename T = void> T DoSelectRandomColor() {
		return ((T (*)(SelectRandomColor*))(Il2CppBase() + 0x4FADDF8))(this);
	}

};

}