#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ArrayForEach
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ArrayForEach"));
	}

	template <typename T = uintptr_t> T& array() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeItem() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& fsmTemplateControl() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& finishEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& currentIndex() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ArrayForEach*))(Il2CppBase() + 0x4F306B8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ArrayForEach*))(Il2CppBase() + 0x4F30754))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ArrayForEach*))(Il2CppBase() + 0x4F30868))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ArrayForEach*))(Il2CppBase() + 0x4F30938))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(ArrayForEach*))(Il2CppBase() + 0x4F309A8))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(ArrayForEach*))(Il2CppBase() + 0x4F30A08))(this);
	}
	template <typename T = void> T StartNextFsm() {
		return ((T (*)(ArrayForEach*))(Il2CppBase() + 0x4F30998))(this);
	}
	template <typename T = void> T StartFsm() {
		return ((T (*)(ArrayForEach*))(Il2CppBase() + 0x4F30890))(this);
	}
	template <typename T = void> T DoStartFsm() {
		return ((T (*)(ArrayForEach*))(Il2CppBase() + 0x4F30A68))(this);
	}
	template <typename T = void> T CheckIfFinished() {
		return ((T (*)(ArrayForEach*))(Il2CppBase() + 0x4F30B4C))(this);
	}

};

}
