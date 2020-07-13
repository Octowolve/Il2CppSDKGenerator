#pragma once
#include <Il2Cpp/Il2Cpp.h>

class grassControlnoGameObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "grassControl_noGameObject"));
	}

	template <typename T = uintptr_t> T& m_grassGenControlTransform() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppRect> T& m_rect() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_ymax() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_grid() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_gridRowCount() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_gridColCount() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_mainCamera() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_layerInfoList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_gridCenterFartherThanThisDisNoDepth() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_disStartFade() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_disEndFade() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_howManyUpdateToRefreshOnce() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_howManyRowsToUpdateOneRefresh() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& m_rowIndexOffsetToUpdate() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector3> T& m_camEuler() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector3> T& m_dCamEulerToForceUpdate() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppVector3> T& m_dCamEuler() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_needForceUpdate() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& MaxBatchInstanceCount() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& m_showGrass() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& m_updateCount() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<float>*> T& m_lodDis2List() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_grassToDraw() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_grassToDraw_noDepth() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_typeInfoList() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& m_grassToDrawCount() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& m_grassToDrawCount_noDepth() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& m_loadGrass() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& m_gridIsNull() {
		return *(T*)((uintptr_t)this + 0xB5);
	}
	template <typename T = bool> T& m_showGrassGizmos() {
		return *(T*)((uintptr_t)this + 0xB6);
	}
	template <typename T = bool> T& m_showCullGizmos() {
		return *(T*)((uintptr_t)this + 0xB7);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_batchMatrices() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_typePrefabMeshList() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_typePrefabMaterialList() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_typePrefabMaterialList_noDepth() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_resetGridToNull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_calculateLayerWeightSum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_selectLayerRandomly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_collisionWithGrass2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_genGrass_noGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_doCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_updateShaderGlobalVars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IgnoreUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_updateGrids() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_collect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_collectGrassInGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_drawInstances() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_drawInstances() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = uintptr_t> T get_StreamerType() {
		return ((T (*)(grassControlnoGameObject*))(Il2CppBase() + 0x3E278E0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(grassControlnoGameObject*))(Il2CppBase() + 0x3E278E8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(grassControlnoGameObject*))(Il2CppBase() + 0x3E27A00))(this);
	}
	template <typename T = void> T resetGridToNull() {
		return ((T (*)(grassControlnoGameObject*))(Il2CppBase() + 0x3E28E6C))(this);
	}
	template <typename T = float> static T calculateLayerWeightSum(Il2CppList<uintptr_t>* layerInfoList) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3E28F10))(0, layerInfoList);
	}
	template <typename T = int32_t> static T selectLayerRandomly(Il2CppList<uintptr_t>* layerInfoList, float layerWeightSum) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, float))(Il2CppBase() + 0x3E29048))(0, layerInfoList, layerWeightSum);
	}
	template <typename T = bool> T collisionWithGrass2D(float _x, float _z, float _r) {
		return ((T (*)(grassControlnoGameObject*, float, float, float))(Il2CppBase() + 0x3E291D0))(this, _x, _z, _r);
	}
	template <typename T = void> T genGrass_noGameObject() {
		return ((T (*)(grassControlnoGameObject*))(Il2CppBase() + 0x3E29680))(this);
	}
	template <typename T = void> T doCache() {
		return ((T (*)(grassControlnoGameObject*))(Il2CppBase() + 0x3E27DC4))(this);
	}
	template <typename T = void> T updateShaderGlobalVars() {
		return ((T (*)(grassControlnoGameObject*))(Il2CppBase() + 0x3E27BC8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(grassControlnoGameObject*))(Il2CppBase() + 0x3E2A0E8))(this);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(grassControlnoGameObject*))(Il2CppBase() + 0x3E2A180))(this);
	}
	template <typename T = bool> T IgnoreUpdate() {
		return ((T (*)(grassControlnoGameObject*))(Il2CppBase() + 0x3E2A228))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(grassControlnoGameObject*))(Il2CppBase() + 0x3E2A324))(this);
	}
	template <typename T = void> T updateGrids(bool justUpdateOneRow) {
		return ((T (*)(grassControlnoGameObject*, bool))(Il2CppBase() + 0x3E2AC38))(this, justUpdateOneRow);
	}
	template <typename T = void> T collect() {
		return ((T (*)(grassControlnoGameObject*))(Il2CppBase() + 0x3E2A640))(this);
	}
	template <typename T = void> T collectGrassInGrid(int32_t gridIndex, Il2CppList<uintptr_t>* grassToDraw) {
		return ((T (*)(grassControlnoGameObject*, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3E2BB14))(this, gridIndex, grassToDraw);
	}
	template <typename T = void> T Refresh(bool justUpdateOneRow) {
		return ((T (*)(grassControlnoGameObject*, bool))(Il2CppBase() + 0x3E2A030))(this, justUpdateOneRow);
	}
	template <typename T = void> T drawInstances() {
		return ((T (*)(grassControlnoGameObject*))(Il2CppBase() + 0x3E2B834))(this);
	}
	template <typename T = void> T drawInstances_1(Il2CppList<uintptr_t>* grassToDraw, Il2CppList<uintptr_t>* typePrefabMaterialList, bool receiveShadow) {
		return ((T (*)(grassControlnoGameObject*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x3E2BEF4))(this, grassToDraw, typePrefabMaterialList, receiveShadow);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(grassControlnoGameObject*))(Il2CppBase() + 0x3E2C554))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(grassControlnoGameObject*))(Il2CppBase() + 0x3E2C55C))(this);
	}

};

}
