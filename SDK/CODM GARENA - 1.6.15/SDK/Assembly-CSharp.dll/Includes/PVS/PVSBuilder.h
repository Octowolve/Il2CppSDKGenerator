#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVS {

class PVSBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVS", "PVSBuilder"));
	}

	template <typename T = uintptr_t> T& Point() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& UseDebug() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& ShowCellSet() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = int32_t> T& ShowIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_Index() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DebugLineList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_ViewCellArea() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ObjectSet() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_PVSLength() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& lastIndex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewCellRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllPVSVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessViewCellPVS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPointPVS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActiveAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPointPVS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateTraceLines() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateTraceLines_Around() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateTraceLines_OneFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPosByUV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculatePVS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixCombineAndSplitVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGOBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWhiteGOSetPVS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindAllPVSCellSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetObjForPVS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetObjectIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetObjectIndexList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RadicalInverse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = void> T SetViewCellRoot(uintptr_t viewCellArea, Il2CppArray<uintptr_t>* objectSet, int32_t pvsLength) {
		return ((T (*)(PVSBuilder*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3DA0FA8))(this, viewCellArea, objectSet, pvsLength);
	}
	template <typename T = void> T SetAllPVSVisible() {
		return ((T (*)(PVSBuilder*))(Il2CppBase() + 0x3DA1078))(this);
	}
	template <typename T = void> T ProcessViewCellPVS() {
		return ((T (*)(PVSBuilder*))(Il2CppBase() + 0x3DA12BC))(this);
	}
	template <typename T = void> T ShowPointPVS() {
		return ((T (*)(PVSBuilder*))(Il2CppBase() + 0x3DA2504))(this);
	}
	template <typename T = void> T ActiveAll() {
		return ((T (*)(PVSBuilder*))(Il2CppBase() + 0x3DA2874))(this);
	}
	template <typename T = void> T ProcessPointPVS() {
		return ((T (*)(PVSBuilder*))(Il2CppBase() + 0x3DA29EC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GenerateTraceLines(uintptr_t viewCell) {
		return ((T (*)(PVSBuilder*, uintptr_t))(Il2CppBase() + 0x3DA2E38))(this, viewCell);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GenerateTraceLines_Around(uintptr_t viewCell) {
		return ((T (*)(PVSBuilder*, uintptr_t))(Il2CppBase() + 0x3DA3038))(this, viewCell);
	}
	template <typename T = void> T GenerateTraceLines_OneFace(Il2CppList<uintptr_t>* lineList, uintptr_t viewCell, Il2CppVector3 dir, float dist, int32_t num, float fixHeight) {
		return ((T (*)(PVSBuilder*, Il2CppList<uintptr_t>*, uintptr_t, Il2CppVector3, float, int32_t, float))(Il2CppBase() + 0x3DA3320))(this, lineList, viewCell, dir, dist, num, fixHeight);
	}
	template <typename T = Il2CppVector3> T GetPosByUV(Il2CppVector3 center, Il2CppVector3 extent, Il2CppVector3 uVect, Il2CppVector3 vVect, float u, float v) {
		return ((T (*)(PVSBuilder*, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3, float, float))(Il2CppBase() + 0x3DA3F08))(this, center, extent, uVect, vVect, u, v);
	}
	template <typename T = void> T CalculatePVS(uintptr_t viewCell, bool debug) {
		return ((T (*)(PVSBuilder*, uintptr_t, bool))(Il2CppBase() + 0x3DA16F0))(this, viewCell, debug);
	}
	template <typename T = void> T FixCombineAndSplitVisible(uintptr_t viewCell) {
		return ((T (*)(PVSBuilder*, uintptr_t))(Il2CppBase() + 0x3DA46A0))(this, viewCell);
	}
	template <typename T = uintptr_t> T GetGOBounds(uintptr_t obj) {
		return ((T (*)(PVSBuilder*, uintptr_t))(Il2CppBase() + 0x3DA4740))(this, obj);
	}
	template <typename T = void> T RefreshWhiteGOSetPVS(Il2CppArray<uintptr_t>* GOSet) {
		return ((T (*)(PVSBuilder*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3DA4AFC))(this, GOSet);
	}
	template <typename T = void> T FindAllPVSCellSet(uintptr_t viewCell, Il2CppList<int32_t>* pvsCellSetList) {
		return ((T (*)(PVSBuilder*, uintptr_t, Il2CppList<int32_t>*))(Il2CppBase() + 0x3DA434C))(this, viewCell, pvsCellSetList);
	}
	template <typename T = uintptr_t> T GetObjForPVS(uintptr_t go) {
		return ((T (*)(PVSBuilder*, uintptr_t))(Il2CppBase() + 0x3DA4F34))(this, go);
	}
	template <typename T = int32_t> T GetObjectIndex(uintptr_t go) {
		return ((T (*)(PVSBuilder*, uintptr_t))(Il2CppBase() + 0x3DA4108))(this, go);
	}
	template <typename T = Il2CppList<int32_t>*> T GetObjectIndexList(uintptr_t go) {
		return ((T (*)(PVSBuilder*, uintptr_t))(Il2CppBase() + 0x3DA4D70))(this, go);
	}
	template <typename T = float> T RadicalInverse(int32_t Base, int32_t i) {
		return ((T (*)(PVSBuilder*, int32_t, int32_t))(Il2CppBase() + 0x3DA3BA0))(this, Base, i);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(PVSBuilder*))(Il2CppBase() + 0x3DA4FDC))(this);
	}

};

}
