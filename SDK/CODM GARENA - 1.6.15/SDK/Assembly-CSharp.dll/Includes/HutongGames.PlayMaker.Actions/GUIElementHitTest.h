#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUIElementHitTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUIElementHitTest"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& camera() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& screenPoint() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& screenX() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& screenY() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& normalized() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& hitEvent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& guiElement() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& gameObjectCached() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GUIElementHitTest*))(Il2CppBase() + 0x4F02080))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GUIElementHitTest*))(Il2CppBase() + 0x4F021F4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GUIElementHitTest*))(Il2CppBase() + 0x4F02608))(this);
	}
	template <typename T = void> T DoHitTest() {
		return ((T (*)(GUIElementHitTest*))(Il2CppBase() + 0x4F0223C))(this);
	}

};

}
