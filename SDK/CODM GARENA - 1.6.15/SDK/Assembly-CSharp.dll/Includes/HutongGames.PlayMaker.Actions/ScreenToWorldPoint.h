#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ScreenToWorldPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ScreenToWorldPoint"));
	}

	template <typename T = uintptr_t> T& screenVector() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& screenX() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& screenY() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& screenZ() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& normalized() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& storeWorldVector() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& storeWorldX() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& storeWorldY() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& storeWorldZ() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ScreenToWorldPoint*))(Il2CppBase() + 0x4FAD778))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ScreenToWorldPoint*))(Il2CppBase() + 0x4FAD8B0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ScreenToWorldPoint*))(Il2CppBase() + 0x4FADBF4))(this);
	}
	template <typename T = void> T DoScreenToWorldPoint() {
		return ((T (*)(ScreenToWorldPoint*))(Il2CppBase() + 0x4FAD8DC))(this);
	}

};

}
