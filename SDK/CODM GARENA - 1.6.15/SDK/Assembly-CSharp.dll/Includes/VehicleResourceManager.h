#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VehicleResourceManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VehicleResourceManager"));
	}

	template <typename T = uintptr_t> T& lodGroup() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& originMeshs() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& partSockets() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& skinInfos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOriginMeshBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchSkinModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(VehicleResourceManager*))(Il2CppBase() + 0x4886F84))(this);
	}
	template <typename T = void> T ResetResource() {
		return ((T (*)(VehicleResourceManager*))(Il2CppBase() + 0x4887374))(this);
	}
	template <typename T = void> T SetOriginMeshBuffer(uintptr_t originMesh) {
		return ((T (*)(VehicleResourceManager*, uintptr_t))(Il2CppBase() + 0x48870D8))(this, originMesh);
	}
	template <typename T = void> T ResetMesh(uintptr_t originMesh) {
		return ((T (*)(VehicleResourceManager*, uintptr_t))(Il2CppBase() + 0x4887618))(this, originMesh);
	}
	template <typename T = void> T SwitchSkinModel(int32_t idx) {
		return ((T (*)(VehicleResourceManager*, int32_t))(Il2CppBase() + 0x4887928))(this, idx);
	}

};

}
