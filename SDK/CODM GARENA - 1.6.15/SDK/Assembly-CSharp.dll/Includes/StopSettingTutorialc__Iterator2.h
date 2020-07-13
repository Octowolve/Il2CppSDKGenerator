#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StopSettingTutorialcIterator2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<StopSettingTutorial>c__Iterator2"));
	}

	template <typename T = uintptr_t> T& parentCtrl__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& view2__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(StopSettingTutorialcIterator2*))(Il2CppBase() + 0x4B13D60))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(StopSettingTutorialcIterator2*))(Il2CppBase() + 0x4B140B8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(StopSettingTutorialcIterator2*))(Il2CppBase() + 0x4B140C0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(StopSettingTutorialcIterator2*))(Il2CppBase() + 0x4B140C8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(StopSettingTutorialcIterator2*))(Il2CppBase() + 0x4B140DC))(this);
	}

};

}
