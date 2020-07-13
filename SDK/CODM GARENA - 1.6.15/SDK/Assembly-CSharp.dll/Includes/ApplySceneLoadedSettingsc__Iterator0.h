#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplySceneLoadedSettingscIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ApplySceneLoadedSettings>c__Iterator0"));
	}

	template <typename T = int32_t> T& pendingMapID__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& scene() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(ApplySceneLoadedSettingscIterator0*))(Il2CppBase() + 0x4AA3E70))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ApplySceneLoadedSettingscIterator0*))(Il2CppBase() + 0x4AA42D8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ApplySceneLoadedSettingscIterator0*))(Il2CppBase() + 0x4AA42E0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ApplySceneLoadedSettingscIterator0*))(Il2CppBase() + 0x4AA42E8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ApplySceneLoadedSettingscIterator0*))(Il2CppBase() + 0x4AA42FC))(this);
	}

};

}
