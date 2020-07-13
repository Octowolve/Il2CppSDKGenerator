#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetRectFields
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetRectFields"));
	}

	template <typename T = uintptr_t> T& rectVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& x() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& y() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& width() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& height() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetRectFields*))(Il2CppBase() + 0x502B214))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetRectFields*))(Il2CppBase() + 0x502B398))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetRectFields*))(Il2CppBase() + 0x502B558))(this);
	}
	template <typename T = void> T DoSetRectFields() {
		return ((T (*)(SetRectFields*))(Il2CppBase() + 0x502B3C4))(this);
	}

};

}
