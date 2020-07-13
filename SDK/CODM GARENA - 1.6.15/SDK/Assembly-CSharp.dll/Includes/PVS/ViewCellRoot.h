#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVS {

class ViewCellRoot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVS", "ViewCellRoot"));
	}

	template <typename T = bool> T& CBMUseWhiteList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& ViewCellSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ViewRange() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MeshGOSet() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& WhiteGOSet() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& WhiteCellSet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& WhiteAreaSet() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& IgnoreGOSet() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& VCRLength() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& PVSLength() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ViewCellSet() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ObjectSet() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& GroundSet() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& VCRBuilder() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& PVSBuilder() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_ViewCellArea() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& CellSize() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& CellNumX() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& CellNumY() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& CellNumZ() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector3> T& Max() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppVector3> T& Min() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BinaryData() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& Enable_VCR() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& Enable_PVS() {
		return *(T*)((uintptr_t)this + 0x89);
	}
	template <typename T = int32_t> T& m_ActiveCellIndex() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> static T& lastIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& culledObjectCount() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRelevantWithActiveCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActiveViewCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LinkBuilder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildCellArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateViewCellArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixOffsetWithSide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCBMInRootList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildObjectSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplySmallObjectToViewCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsObjectSmall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnBuildObjectSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValidIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWhiteAreaSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWhiteArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordBinaryData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyBinaryData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ViewCellRoot*))(Il2CppBase() + 0x3DAB650))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ViewCellRoot*))(Il2CppBase() + 0x3DAB774))(this);
	}
	template <typename T = void> T UpdateSelf(Il2CppVector3 pos) {
		return ((T (*)(ViewCellRoot*, Il2CppVector3))(Il2CppBase() + 0x3DAB454))(this, pos);
	}
	template <typename T = bool> T IsRelevantWithActiveCell(Il2CppVector3 point, uintptr_t result) {
		return ((T (*)(ViewCellRoot*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x3DAAEE0))(this, point, result);
	}
	template <typename T = void> T ActiveViewCell(Il2CppVector3 point, bool ignoreY) {
		return ((T (*)(ViewCellRoot*, Il2CppVector3, bool))(Il2CppBase() + 0x3DAB898))(this, point, ignoreY);
	}
	template <typename T = void> T LinkBuilder() {
		return ((T (*)(ViewCellRoot*))(Il2CppBase() + 0x3DABFF8))(this);
	}
	template <typename T = bool> T IsValid() {
		return ((T (*)(ViewCellRoot*))(Il2CppBase() + 0x3DAD7C8))(this);
	}
	template <typename T = void> T BuildCellArea() {
		return ((T (*)(ViewCellRoot*))(Il2CppBase() + 0x3DADA08))(this);
	}
	template <typename T = uintptr_t> T GenerateViewCellArea(Il2CppVector3 max, Il2CppVector3 min, Il2CppVector3 size, bool createViewCellSet) {
		return ((T (*)(ViewCellRoot*, Il2CppVector3, Il2CppVector3, Il2CppVector3, bool))(Il2CppBase() + 0x3DAC658))(this, max, min, size, createViewCellSet);
	}
	template <typename T = void> T FixOffsetWithSide(Il2CppArray<uintptr_t>* list, int32_t index, int32_t segment) {
		return ((T (*)(ViewCellRoot*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3DADCEC))(this, list, index, segment);
	}
	template <typename T = void> T CheckCBMInRootList() {
		return ((T (*)(ViewCellRoot*))(Il2CppBase() + 0x3DAD224))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T BuildObjectSet(Il2CppArray<uintptr_t>* rootList) {
		return ((T (*)(ViewCellRoot*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3DAE09C))(this, rootList);
	}
	template <typename T = void> T ApplySmallObjectToViewCell() {
		return ((T (*)(ViewCellRoot*))(Il2CppBase() + 0x3DAE590))(this);
	}
	template <typename T = bool> T IsObjectSmall(uintptr_t obj, float size) {
		return ((T (*)(ViewCellRoot*, uintptr_t, float))(Il2CppBase() + 0x3DAE970))(this, obj, size);
	}
	template <typename T = void> T UnBuildObjectSet() {
		return ((T (*)(ViewCellRoot*))(Il2CppBase() + 0x3DAEBF8))(this);
	}
	template <typename T = bool> T GetValidIndex(Il2CppVector3 point, uintptr_t index, bool ignoreY) {
		return ((T (*)(ViewCellRoot*, Il2CppVector3, uintptr_t, bool))(Il2CppBase() + 0x3DABD80))(this, point, index, ignoreY);
	}
	template <typename T = void> T RefreshWhiteAreaSet(uintptr_t areaGO) {
		return ((T (*)(ViewCellRoot*, uintptr_t))(Il2CppBase() + 0x3DAECC0))(this, areaGO);
	}
	template <typename T = void> T RefreshWhiteArea(uintptr_t areaGO) {
		return ((T (*)(ViewCellRoot*, uintptr_t))(Il2CppBase() + 0x3DAEF9C))(this, areaGO);
	}
	template <typename T = void> T RecordBinaryData() {
		return ((T (*)(ViewCellRoot*))(Il2CppBase() + 0x3DAF78C))(this);
	}
	template <typename T = void> T RecordData(uintptr_t content, Il2CppArray<uintptr_t>* goList) {
		return ((T (*)(ViewCellRoot*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3DAFA5C))(this, content, goList);
	}
	template <typename T = void> T ApplyBinaryData() {
		return ((T (*)(ViewCellRoot*))(Il2CppBase() + 0x3DAFEA8))(this);
	}
	template <typename T = void> T ApplyData(Il2CppArray<uintptr_t>* nameList, Il2CppArray<uintptr_t>* goList) {
		return ((T (*)(ViewCellRoot*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3DB0390))(this, nameList, goList);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(ViewCellRoot*))(Il2CppBase() + 0x3DB0600))(this);
	}

};

}
