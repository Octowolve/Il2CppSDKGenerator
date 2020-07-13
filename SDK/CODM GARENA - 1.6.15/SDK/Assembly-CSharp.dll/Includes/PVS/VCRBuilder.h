#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVS {

class VCRBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVS", "VCRBuilder"));
	}

	template <typename T = bool> T& ShowRelevant_A() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& PointA() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& PointB() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IsRelevant() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_IndexA() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_IndexB() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DebugLineList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_ViewCellArea() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_VCRLength() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewCellRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllVCRRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessViewCellRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRelevantByLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRelevantFromAToB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RadicalInverse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWhiteCellSetVCR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T SetViewCellRoot(uintptr_t viewCellArea, uintptr_t triangleCellArea, int32_t vcrLength) {
		return ((T (*)(VCRBuilder*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3DA6A2C))(this, viewCellArea, triangleCellArea, vcrLength);
	}
	template <typename T = void> T SetAllVCRRelevant(bool relevant) {
		return ((T (*)(VCRBuilder*, bool))(Il2CppBase() + 0x3DA6AF8))(this, relevant);
	}
	template <typename T = void> T ProcessViewCellRelevant() {
		return ((T (*)(VCRBuilder*))(Il2CppBase() + 0x3DA6D44))(this);
	}
	template <typename T = void> T SetRelevantByLine(uintptr_t line, int32_t start, int32_t end, bool debug) {
		return ((T (*)(VCRBuilder*, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x3DA7E10))(this, line, start, end, debug);
	}
	template <typename T = void> T CalculateRelevant(uintptr_t A, uintptr_t B, int32_t length, bool debug) {
		return ((T (*)(VCRBuilder*, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x3DA741C))(this, A, B, length, debug);
	}
	template <typename T = void> T CheckRelevantFromAToB() {
		return ((T (*)(VCRBuilder*))(Il2CppBase() + 0x3DA8EA8))(this);
	}
	template <typename T = float> T RadicalInverse(int32_t Base, int32_t i) {
		return ((T (*)(VCRBuilder*, int32_t, int32_t))(Il2CppBase() + 0x3DA8ABC))(this, Base, i);
	}
	template <typename T = void> T RefreshWhiteCellSetVCR(Il2CppArray<uintptr_t>* whiteCellSet) {
		return ((T (*)(VCRBuilder*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3DA91E0))(this, whiteCellSet);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(VCRBuilder*))(Il2CppBase() + 0x3DA939C))(this);
	}

};

}
