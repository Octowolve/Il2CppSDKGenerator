#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVS {

class ViewCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVS", "ViewCell"));
	}

	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Offset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& VisibleCellSet() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& VisibleObjSet() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& VisibleObjSet_Fixed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<int32_t>*> T& PVSCellSet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SmallObjSet() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllObjVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetObjUnVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetObjVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixObjVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsObjVisible_Raw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsObjVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRelevantFaceSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFaceNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFacePoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculatePVSLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateVCRLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseUV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T SetAllObjVisible(bool visible) {
		return ((T (*)(ViewCell*, bool))(Il2CppBase() + 0x3DA11C4))(this, visible);
	}
	template <typename T = void> T SetAllRelevant(bool relevant) {
		return ((T (*)(ViewCell*, bool))(Il2CppBase() + 0x3DA6C4C))(this, relevant);
	}
	template <typename T = void> T SetObjUnVisible(int32_t objIndex) {
		return ((T (*)(ViewCell*, int32_t))(Il2CppBase() + 0x3DA5E08))(this, objIndex);
	}
	template <typename T = void> T SetObjVisible(int32_t objIndex) {
		return ((T (*)(ViewCell*, int32_t))(Il2CppBase() + 0x3DA4258))(this, objIndex);
	}
	template <typename T = void> T FixObjVisible(Il2CppArray<uintptr_t>* visibleObjSet) {
		return ((T (*)(ViewCell*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3DA9AC8))(this, visibleObjSet);
	}
	template <typename T = bool> T IsObjVisible_Raw(int32_t objIndex) {
		return ((T (*)(ViewCell*, int32_t))(Il2CppBase() + 0x3DA5D10))(this, objIndex);
	}
	template <typename T = bool> T IsObjVisible(int32_t objIndex) {
		return ((T (*)(ViewCell*, int32_t))(Il2CppBase() + 0x3DA2774))(this, objIndex);
	}
	template <typename T = void> T SetRelevant(int32_t targetIndex) {
		return ((T (*)(ViewCell*, int32_t))(Il2CppBase() + 0x3DA7328))(this, targetIndex);
	}
	template <typename T = bool> T IsRelevant(int32_t targetIndex) {
		return ((T (*)(ViewCell*, int32_t))(Il2CppBase() + 0x3DA7230))(this, targetIndex);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetRelevantFaceSet(Il2CppVector3 viewDir) {
		return ((T (*)(ViewCell*, Il2CppVector3))(Il2CppBase() + 0x3DA82D4))(this, viewDir);
	}
	template <typename T = Il2CppVector3> T GetFaceNormal(uintptr_t faceType) {
		return ((T (*)(ViewCell*, uintptr_t))(Il2CppBase() + 0x3DA9C1C))(this, faceType);
	}
	template <typename T = Il2CppVector3> T GetFacePoint(uintptr_t faceType, float u, float v) {
		return ((T (*)(ViewCell*, uintptr_t, float, float))(Il2CppBase() + 0x3DA8560))(this, faceType, u, v);
	}
	template <typename T = uintptr_t> T CalculatePVSLine(uintptr_t faceType, float u, float v, float theta, float phi) {
		return ((T (*)(ViewCell*, uintptr_t, float, float, float, float))(Il2CppBase() + 0x3DA3CC0))(this, faceType, u, v, theta, phi);
	}
	template <typename T = uintptr_t> T CalculateVCRLine(Il2CppArray<uintptr_t>* faceList, uintptr_t target, Il2CppArray<uintptr_t>* targetFaceList, float u, float v, float targetU, float targetV) {
		return ((T (*)(ViewCell*, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*, float, float, float, float))(Il2CppBase() + 0x3DA8BDC))(this, faceList, target, targetFaceList, u, v, targetU, targetV);
	}
	template <typename T = void> T ParseUV(uintptr_t u, uintptr_t v, uintptr_t index) {
		return ((T (*)(ViewCell*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3DA9E50))(this, u, v, index);
	}

};

}
