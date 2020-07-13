#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class VehicleReconController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "VehicleReconController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(VehicleReconController*))(Il2CppBase() + 0x3D9ED90))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(VehicleReconController*))(Il2CppBase() + 0x3D9EE34))(this);
	}
	template <typename T = void> T SetOwner(uintptr_t owner) {
		return ((T (*)(VehicleReconController*, uintptr_t))(Il2CppBase() + 0x3D9F104))(this, owner);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(VehicleReconController*))(Il2CppBase() + 0x3D9F1AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(VehicleReconController*))(Il2CppBase() + 0x3D9F1B4))(this);
	}

};

}
