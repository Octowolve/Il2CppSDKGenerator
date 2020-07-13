#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TreeBillboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TreeBillboard"));
	}

	template <typename T = uintptr_t> T& BillboardRenderer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FaceToCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TreeBillboard*))(Il2CppBase() + 0x4969024))(this);
	}
	template <typename T = void> T FaceToCamera(uintptr_t cam) {
		return ((T (*)(TreeBillboard*, uintptr_t))(Il2CppBase() + 0x49690E4))(this, cam);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TreeBillboard*))(Il2CppBase() + 0x4969364))(this);
	}

};

}
