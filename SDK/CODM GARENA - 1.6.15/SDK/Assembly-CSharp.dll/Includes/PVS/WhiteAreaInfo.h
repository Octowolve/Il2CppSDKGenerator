#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVS {

class WhiteAreaInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVS", "WhiteAreaInfo"));
	}

	template <typename T = uintptr_t> T& AreaType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWhiteArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixPVSWithAllArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixVCRWithAllArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixPVSWithAllVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixPVSWithSelfAround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T RefreshWhiteArea(uintptr_t viewCellArea) {
		return ((T (*)(WhiteAreaInfo*, uintptr_t))(Il2CppBase() + 0x3DAF1E8))(this, viewCellArea);
	}
	template <typename T = void> T FixPVSWithAllArea(uintptr_t viewCell, uintptr_t list, Il2CppArray<uintptr_t>* visibleSet) {
		return ((T (*)(WhiteAreaInfo*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3DB2C74))(this, viewCell, list, visibleSet);
	}
	template <typename T = void> T FixVCRWithAllArea(uintptr_t viewCell, uintptr_t list, Il2CppArray<uintptr_t>* visibleSet) {
		return ((T (*)(WhiteAreaInfo*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3DB3034))(this, viewCell, list, visibleSet);
	}
	template <typename T = void> T FixPVSWithAllVisible(uintptr_t viewCell) {
		return ((T (*)(WhiteAreaInfo*, uintptr_t))(Il2CppBase() + 0x3DB2EF4))(this, viewCell);
	}
	template <typename T = void> T FixPVSWithSelfAround(uintptr_t viewCellArea, uintptr_t viewCell, int32_t index) {
		return ((T (*)(WhiteAreaInfo*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3DB2688))(this, viewCellArea, viewCell, index);
	}

};

}
