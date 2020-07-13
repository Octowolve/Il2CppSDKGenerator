#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DismemberPawnEx
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DismemberPawnEx"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& LimbDatum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& meshMaterial() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& hiddenBones() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DismemberBody() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpacityFade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(DismemberPawnEx*))(Il2CppBase() + 0x4174714))(this);
	}
	template <typename T = void> T DismemberBody(uintptr_t limbType, Il2CppVector3 breakDir) {
		return ((T (*)(DismemberPawnEx*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4174BA4))(this, limbType, breakDir);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(DismemberPawnEx*))(Il2CppBase() + 0x41754C8))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(DismemberPawnEx*))(Il2CppBase() + 0x4175688))(this);
	}
	template <typename T = uintptr_t> T OpacityFade(float startVal, float destVal, float duration, uintptr_t mat) {
		return ((T (*)(DismemberPawnEx*, float, float, float, uintptr_t))(Il2CppBase() + 0x4175398))(this, startVal, destVal, duration, mat);
	}

};

}
