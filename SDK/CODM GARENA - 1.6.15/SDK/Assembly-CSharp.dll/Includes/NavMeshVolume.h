#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NavMeshVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NavMeshVolume"));
	}

	template <typename T = Il2CppVector3> T& m_Size() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& m_Center() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_Area() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppVector3> T get_size() {
		return ((T (*)(NavMeshVolume*))(Il2CppBase() + 0x331DE58))(this);
	}
	template <typename T = void> T set_size(Il2CppVector3 value) {
		return ((T (*)(NavMeshVolume*, Il2CppVector3))(Il2CppBase() + 0x331DE6C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_center() {
		return ((T (*)(NavMeshVolume*))(Il2CppBase() + 0x331EC18))(this);
	}
	template <typename T = void> T set_center(Il2CppVector3 value) {
		return ((T (*)(NavMeshVolume*, Il2CppVector3))(Il2CppBase() + 0x331EC2C))(this, value);
	}
	template <typename T = int32_t> T get_area() {
		return ((T (*)(NavMeshVolume*))(Il2CppBase() + 0x331EC38))(this);
	}
	template <typename T = void> T set_area(int32_t value) {
		return ((T (*)(NavMeshVolume*, int32_t))(Il2CppBase() + 0x331EC40))(this, value);
	}
	template <typename T = void> T RefreshMesh() {
		return ((T (*)(NavMeshVolume*))(Il2CppBase() + 0x331DE78))(this);
	}

};

}
