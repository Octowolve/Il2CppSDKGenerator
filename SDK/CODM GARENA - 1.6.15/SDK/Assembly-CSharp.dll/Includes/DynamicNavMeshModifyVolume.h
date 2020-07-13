#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DynamicNavMeshModifyVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DynamicNavMeshModifyVolume"));
	}

	template <typename T = Il2CppVector3> T& m_Size() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& m_Center() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_FilterArea() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_ModifyArea() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppVector3> T get_size() {
		return ((T (*)(DynamicNavMeshModifyVolume*))(Il2CppBase() + 0x4B9D3F8))(this);
	}
	template <typename T = void> T set_size(Il2CppVector3 value) {
		return ((T (*)(DynamicNavMeshModifyVolume*, Il2CppVector3))(Il2CppBase() + 0x4B9D40C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_center() {
		return ((T (*)(DynamicNavMeshModifyVolume*))(Il2CppBase() + 0x4B9D418))(this);
	}
	template <typename T = void> T set_center(Il2CppVector3 value) {
		return ((T (*)(DynamicNavMeshModifyVolume*, Il2CppVector3))(Il2CppBase() + 0x4B9D42C))(this, value);
	}
	template <typename T = int32_t> T get_filterArea() {
		return ((T (*)(DynamicNavMeshModifyVolume*))(Il2CppBase() + 0x4B9D438))(this);
	}
	template <typename T = void> T set_filterArea(int32_t value) {
		return ((T (*)(DynamicNavMeshModifyVolume*, int32_t))(Il2CppBase() + 0x4B9D440))(this, value);
	}
	template <typename T = int32_t> T get_modifyArea() {
		return ((T (*)(DynamicNavMeshModifyVolume*))(Il2CppBase() + 0x4B9D448))(this);
	}
	template <typename T = void> T set_modifyArea(int32_t value) {
		return ((T (*)(DynamicNavMeshModifyVolume*, int32_t))(Il2CppBase() + 0x4B9D450))(this, value);
	}

};

}
