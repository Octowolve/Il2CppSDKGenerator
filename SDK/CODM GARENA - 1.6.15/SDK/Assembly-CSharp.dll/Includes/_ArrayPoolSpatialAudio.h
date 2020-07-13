#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArrayPoolSpatialAudio
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "_ArrayPoolSpatialAudio"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getCPtr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_setCPtr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Finalize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Dispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A0B200))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(ArrayPoolSpatialAudio*, uintptr_t))(Il2CppBase() + 0x4A0B2CC))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(ArrayPoolSpatialAudio*))(Il2CppBase() + 0x4A0B388))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ArrayPoolSpatialAudio*))(Il2CppBase() + 0x4A0B47C))(this);
	}
	template <typename T = int32_t> static T Get() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A0B640))(0);
	}
	template <typename T = void> T xLuaBaseProxy_Finalize() {
		return ((T (*)(ArrayPoolSpatialAudio*))(Il2CppBase() + 0x4A0B718))(this);
	}

};

}
