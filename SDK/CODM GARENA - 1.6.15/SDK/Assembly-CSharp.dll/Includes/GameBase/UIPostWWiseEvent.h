#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class UIPostWWiseEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "UIPostWWiseEvent"));
	}

	template <typename T = Il2CppString*> T& WWiseEvent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& TriggerAt() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(UIPostWWiseEvent*))(Il2CppBase() + 0x27D6020))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIPostWWiseEvent*))(Il2CppBase() + 0x27D60DC))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UIPostWWiseEvent*))(Il2CppBase() + 0x27D6198))(this);
	}
	template <typename T = void> T PlaySound(Il2CppString* strWWiseEvent) {
		return ((T (*)(UIPostWWiseEvent*, Il2CppString*))(Il2CppBase() + 0x27D6360))(this, strWWiseEvent);
	}
	template <typename T = bool> T get_isColliderEnabled() {
		return ((T (*)(UIPostWWiseEvent*))(Il2CppBase() + 0x27D6264))(this);
	}

};

}
