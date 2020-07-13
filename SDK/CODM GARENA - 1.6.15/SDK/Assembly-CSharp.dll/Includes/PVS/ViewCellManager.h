#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVS {

class ViewCellManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVS", "ViewCellManager"));
	}

	template <typename T = uintptr_t> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RootList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_Enable_VCR() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_Enable_PVS() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uintptr_t> T& MainCamera() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& culledObjectCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& totalObjectCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegistViewCellRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegistViewCellRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRelevantWithActiveCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x3DAA55C))(0);
	}
	template <typename T = bool> T get_Enable_VCR() {
		return ((T (*)(ViewCellManager*))(Il2CppBase() + 0x3DAA6B8))(this);
	}
	template <typename T = void> T set_Enable_VCR(bool value) {
		return ((T (*)(ViewCellManager*, bool))(Il2CppBase() + 0x3DAA6C0))(this, value);
	}
	template <typename T = bool> T get_Enable_PVS() {
		return ((T (*)(ViewCellManager*))(Il2CppBase() + 0x3DAA7B4))(this);
	}
	template <typename T = void> T set_Enable_PVS(bool value) {
		return ((T (*)(ViewCellManager*, bool))(Il2CppBase() + 0x3DAA7BC))(this, value);
	}
	template <typename T = bool> T IsValid() {
		return ((T (*)(ViewCellManager*))(Il2CppBase() + 0x3DAA8B0))(this);
	}
	template <typename T = void> T RegistViewCellRoot(uintptr_t root) {
		return ((T (*)(ViewCellManager*, uintptr_t))(Il2CppBase() + 0x3DAA9C4))(this, root);
	}
	template <typename T = void> T UnRegistViewCellRoot(uintptr_t root) {
		return ((T (*)(ViewCellManager*, uintptr_t))(Il2CppBase() + 0x3DAAB38))(this, root);
	}
	template <typename T = bool> T IsRelevantWithActiveCell(Il2CppVector3 point) {
		return ((T (*)(ViewCellManager*, Il2CppVector3))(Il2CppBase() + 0x3DAACA0))(this, point);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ViewCellManager*))(Il2CppBase() + 0x3DAB080))(this);
	}

};

}
