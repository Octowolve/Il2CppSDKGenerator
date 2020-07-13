#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class CrossAssistanceController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "CrossAssistanceController"));
	}

	template <typename T = bool> T& m_IsStart() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_CurCrossAssistance2PlayerMap() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_RedAssetID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_OwnerPawn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_OwnerCamp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_CrossAssistanceComponent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_OnlyShowForPlayer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_CrossAssistanceType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_OpticsRaduis() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAssistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAssistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFireTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMeshRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAddOrRemove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPawnAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAddCrossAssistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInOpticsCross() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCrossAssistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveCrossAssistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadAssetAsyncCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = bool> T get_OnlyShowForPlayer() {
		return ((T (*)(CrossAssistanceController*))(Il2CppBase() + 0x41A6750))(this);
	}
	template <typename T = void> T set_OnlyShowForPlayer(bool value) {
		return ((T (*)(CrossAssistanceController*, bool))(Il2CppBase() + 0x41A6758))(this, value);
	}
	template <typename T = void> T Init(uintptr_t owner, uintptr_t crossAssistanceComponent, uintptr_t assistanceType) {
		return ((T (*)(CrossAssistanceController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x41A6760))(this, owner, crossAssistanceComponent, assistanceType);
	}
	template <typename T = void> T StartAssistance() {
		return ((T (*)(CrossAssistanceController*))(Il2CppBase() + 0x41A68EC))(this);
	}
	template <typename T = void> T StopAssistance() {
		return ((T (*)(CrossAssistanceController*))(Il2CppBase() + 0x41A6990))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(CrossAssistanceController*, float))(Il2CppBase() + 0x41A6DAC))(this, deltaTime);
	}
	template <typename T = bool> T CheckFireTarget(Il2CppVector3 startPos, Il2CppVector3 dir, uintptr_t impactInfo, float checkRange) {
		return ((T (*)(CrossAssistanceController*, Il2CppVector3, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x41A7A20))(this, startPos, dir, impactInfo, checkRange);
	}
	template <typename T = void> T ClearAll() {
		return ((T (*)(CrossAssistanceController*))(Il2CppBase() + 0x41A6A3C))(this);
	}
	template <typename T = void> T UpdateMeshRenderers(Il2CppArray<uintptr_t>* meshRenderers) {
		return ((T (*)(CrossAssistanceController*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x41A7E10))(this, meshRenderers);
	}
	template <typename T = void> T UpdateAddOrRemove() {
		return ((T (*)(CrossAssistanceController*))(Il2CppBase() + 0x41A6E6C))(this);
	}
	template <typename T = void> T UpdateTransform() {
		return ((T (*)(CrossAssistanceController*))(Il2CppBase() + 0x41A7294))(this);
	}
	template <typename T = bool> T CheckPawnAdd(uintptr_t aimPawn) {
		return ((T (*)(CrossAssistanceController*, uintptr_t))(Il2CppBase() + 0x41A97F0))(this, aimPawn);
	}
	template <typename T = bool> T CheckAddCrossAssistance(uintptr_t aimPawn) {
		return ((T (*)(CrossAssistanceController*, uintptr_t))(Il2CppBase() + 0x41A8004))(this, aimPawn);
	}
	template <typename T = bool> T IsInOpticsCross(Il2CppVector3 uiPos) {
		return ((T (*)(CrossAssistanceController*, Il2CppVector3))(Il2CppBase() + 0x41A9A4C))(this, uiPos);
	}
	template <typename T = void> T AddCrossAssistance(uint32_t playerID) {
		return ((T (*)(CrossAssistanceController*, uint32_t))(Il2CppBase() + 0x41A9044))(this, playerID);
	}
	template <typename T = void> T RemoveCrossAssistance(uint32_t playerID) {
		return ((T (*)(CrossAssistanceController*, uint32_t))(Il2CppBase() + 0x41A9640))(this, playerID);
	}
	template <typename T = int32_t> T GetAssetID(uint32_t playerID) {
		return ((T (*)(CrossAssistanceController*, uint32_t))(Il2CppBase() + 0x41A9C84))(this, playerID);
	}
	template <typename T = void> T PreLoadAsset() {
		return ((T (*)(CrossAssistanceController*))(Il2CppBase() + 0x41A9D2C))(this);
	}
	template <typename T = void> T PreLoadAssetAsyncCallback(int32_t assetID, uintptr_t param) {
		return ((T (*)(CrossAssistanceController*, int32_t, uintptr_t))(Il2CppBase() + 0x41A9E7C))(this, assetID, param);
	}

};

}
