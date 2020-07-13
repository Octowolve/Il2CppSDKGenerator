#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetRectFields
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetRectFields"));
	}

	template <typename T = uintptr_t> T& rectVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeX() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeY() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeWidth() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storeHeight() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetRectFields*))(Il2CppBase() + 0x50913B4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetRectFields*))(Il2CppBase() + 0x50913D0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetRectFields*))(Il2CppBase() + 0x5091590))(this);
	}
	template <typename T = void> T DoGetRectFields() {
		return ((T (*)(GetRectFields*))(Il2CppBase() + 0x50913FC))(this);
	}

};

}
