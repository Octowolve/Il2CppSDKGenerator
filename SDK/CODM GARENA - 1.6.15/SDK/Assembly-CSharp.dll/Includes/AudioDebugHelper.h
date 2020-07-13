#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioDebugHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioDebugHelper"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& DrawSphereQueue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddDebugSphere() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearDebugSphere() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T AddDebugSphere(Il2CppVector3 _vecStart, uintptr_t eColor, float _fRadius) {
		return ((T (*)(AudioDebugHelper*, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x324B210))(this, _vecStart, eColor, _fRadius);
	}
	template <typename T = void> T ClearDebugSphere() {
		return ((T (*)(AudioDebugHelper*))(Il2CppBase() + 0x324B43C))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(AudioDebugHelper*))(Il2CppBase() + 0x324B510))(this);
	}

};

}
