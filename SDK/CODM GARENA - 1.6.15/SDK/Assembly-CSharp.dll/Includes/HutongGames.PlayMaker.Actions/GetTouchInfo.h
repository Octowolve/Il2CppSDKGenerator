#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetTouchInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetTouchInfo"));
	}

	template <typename T = uintptr_t> T& fingerId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& normalize() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storePosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeX() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storeY() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& storeDeltaPosition() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& storeDeltaX() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& storeDeltaY() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& storeDeltaTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& storeTapCount() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& screenWidth() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& screenHeight() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetTouchInfo*))(Il2CppBase() + 0x4F00064))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetTouchInfo*))(Il2CppBase() + 0x4F00148))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetTouchInfo*))(Il2CppBase() + 0x4F00618))(this);
	}
	template <typename T = void> T DoGetTouchInfo() {
		return ((T (*)(GetTouchInfo*))(Il2CppBase() + 0x4F001A8))(this);
	}

};

}
