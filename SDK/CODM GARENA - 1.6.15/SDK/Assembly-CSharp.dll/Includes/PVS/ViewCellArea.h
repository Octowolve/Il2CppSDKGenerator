#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVS {

class ViewCellArea
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVS", "ViewCellArea"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCellIndexY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCellIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetCellIndexY(Il2CppVector3 point, uintptr_t indexX, uintptr_t indexY, uintptr_t indexZ, bool includeOutside) {
		return ((T (*)(ViewCellArea*, Il2CppVector3, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3DA2BF0))(this, point, indexX, indexY, indexZ, includeOutside);
	}
	template <typename T = int32_t> T GetCellIndex(Il2CppVector3 point, uintptr_t indexX, uintptr_t indexY, uintptr_t indexZ, bool includeOutside) {
		return ((T (*)(ViewCellArea*, Il2CppVector3, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3DAA0AC))(this, point, indexX, indexY, indexZ, includeOutside);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetCellIndex(Il2CppVector3 P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, bool P4) {
		return ((T (*)(ViewCellArea*, Il2CppVector3, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3DAA410))(this, P0, P1, P2, P3, P4);
	}

};

}
