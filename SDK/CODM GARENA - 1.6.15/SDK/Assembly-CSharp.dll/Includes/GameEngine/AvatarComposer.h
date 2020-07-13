#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AvatarComposer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AvatarComposer"));
	}

	template <typename T = Il2CppVector3> T& m_LeftArmbandOffset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_RightArmbandOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_OriginalTransforms() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mAvatarConfig() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mAvatarMesh() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mAvatarDefMesh() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& IsGPUSkinned() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& isDistroy() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mDynamicOffset() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_LodGroup() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& mInit() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& mShowHead() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = uintptr_t> T& OnChange() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& FucUpdate() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RetargetList() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCacheObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveCacheObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVestOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAvatarConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvatarConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAvatarOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetAvatarOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverAvatarOffst() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeMeshOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEquipOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeMats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ChangeMats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_ChangeMats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_ChangeMats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_ChangeMats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MeshShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowForDefMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegainSkinnedMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareLODIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChilds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_initData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Replace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeDetailTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unequip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__Unequip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__Equip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindAppendObjs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAppendObjs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NullUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDefBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UpdateDefBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_UpdateDefBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMeshBone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetBindBone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_findBone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UpdateBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRetargetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRetargetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}

	template <typename T = Il2CppString*> static T get_BodyKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x35EC934))(0);
	}
	template <typename T = Il2CppString*> static T get_FrontKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x35EC9AC))(0);
	}
	template <typename T = Il2CppString*> static T get_BackKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x35ECA24))(0);
	}
	template <typename T = Il2CppString*> static T get_HeadKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x35ECA9C))(0);
	}
	template <typename T = Il2CppString*> static T get_BagKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x35ECB14))(0);
	}
	template <typename T = Il2CppString*> static T get_RearpendantKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x35ECB8C))(0);
	}
	template <typename T = Il2CppString*> static T get_FaceKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x35ECC04))(0);
	}
	template <typename T = Il2CppString*> static T get_HelmetKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x35ECC7C))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T get_EquipNames() {
		return ((T (*)(void *))(Il2CppBase() + 0x35ECCF4))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_mOriginalTransforms() {
		return ((T (*)(AvatarComposer*))(Il2CppBase() + 0x35ED2B0))(this);
	}
	template <typename T = void> T set_mOriginalTransforms(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(AvatarComposer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35ED348))(this, value);
	}
	template <typename T = void> T SetPawn(uintptr_t pawn) {
		return ((T (*)(AvatarComposer*, uintptr_t))(Il2CppBase() + 0x35ED350))(this, pawn);
	}
	template <typename T = uintptr_t> T get_mLodGroup() {
		return ((T (*)(AvatarComposer*))(Il2CppBase() + 0x35ED96C))(this);
	}
	template <typename T = void> T set_mLodGroup(uintptr_t value) {
		return ((T (*)(AvatarComposer*, uintptr_t))(Il2CppBase() + 0x35EDA54))(this, value);
	}
	template <typename T = void> T AddCacheObj(Il2CppArray<uintptr_t>* refOPMesh, int32_t inType, uintptr_t inObj) {
		return ((T (*)(AvatarComposer*, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x35EDA5C))(this, refOPMesh, inType, inObj);
	}
	template <typename T = void> T RemoveCacheObj(Il2CppArray<uintptr_t>* refOPMesh, int32_t inType) {
		return ((T (*)(AvatarComposer*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x35EE110))(this, refOPMesh, inType);
	}
	template <typename T = uintptr_t> T GetVestOffset(uintptr_t idx, int32_t VestAssetID) {
		return ((T (*)(AvatarComposer*, uintptr_t, int32_t))(Il2CppBase() + 0x35EFB9C))(this, idx, VestAssetID);
	}
	template <typename T = void> T SetAvatarConfig(uintptr_t idx, Il2CppVector3 inOffset, Il2CppVector3 inRotation, Il2CppVector3 inScale) {
		return ((T (*)(AvatarComposer*, uintptr_t, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x35F0120))(this, idx, inOffset, inRotation, inScale);
	}
	template <typename T = void> T GetAvatarConfig(uintptr_t idx, uintptr_t inOffset, uintptr_t inRotation, uintptr_t inScale) {
		return ((T (*)(AvatarComposer*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35F049C))(this, idx, inOffset, inRotation, inScale);
	}
	template <typename T = void> T SetAvatarOffset(uintptr_t idx, Il2CppVector3 inOffset) {
		return ((T (*)(AvatarComposer*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x35F0618))(this, idx, inOffset);
	}
	template <typename T = void> T SetAvatarOffset_1(uintptr_t idx, uintptr_t inOffset) {
		return ((T (*)(AvatarComposer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35F0794))(this, idx, inOffset);
	}
	template <typename T = void> T RecoverAvatarOffst(uintptr_t idx) {
		return ((T (*)(AvatarComposer*, uintptr_t))(Il2CppBase() + 0x35F0E24))(this, idx);
	}
	template <typename T = void> T ChangeMeshOffset(uintptr_t idx, bool add) {
		return ((T (*)(AvatarComposer*, uintptr_t, bool))(Il2CppBase() + 0x35F0940))(this, idx, add);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetEquip(int32_t idx) {
		return ((T (*)(AvatarComposer*, int32_t))(Il2CppBase() + 0x35F1354))(this, idx);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetDefEquip(int32_t idx) {
		return ((T (*)(AvatarComposer*, int32_t))(Il2CppBase() + 0x35F1598))(this, idx);
	}
	template <typename T = uintptr_t> T GetEquipOffset(uintptr_t idx) {
		return ((T (*)(AvatarComposer*, uintptr_t))(Il2CppBase() + 0x35F0FEC))(this, idx);
	}
	template <typename T = void> T ChangeMats(uintptr_t idx, Il2CppArray<uintptr_t>* inMats) {
		return ((T (*)(AvatarComposer*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35F19BC))(this, idx, inMats);
	}
	template <typename T = void> T ChangeMats_1(uintptr_t idx, Il2CppArray<uintptr_t>* inMatIDs) {
		return ((T (*)(AvatarComposer*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35F1D88))(this, idx, inMatIDs);
	}
	template <typename T = void> T ChangeMats_2(Il2CppArray<uintptr_t>* inMatIDs) {
		return ((T (*)(AvatarComposer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35F21A0))(this, inMatIDs);
	}
	template <typename T = void> T ChangeMats_3(Il2CppArray<uintptr_t>* inMats) {
		return ((T (*)(AvatarComposer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35F28D4))(this, inMats);
	}
	template <typename T = void> T ChangeMats_4(Il2CppArray<uintptr_t>* inMats, Il2CppArray<uintptr_t>* inMatAssetIDs) {
		return ((T (*)(AvatarComposer*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35F2988))(this, inMats, inMatAssetIDs);
	}
	template <typename T = bool> T get_ShowHead() {
		return ((T (*)(AvatarComposer*))(Il2CppBase() + 0x35F301C))(this);
	}
	template <typename T = void> T set_ShowHead(bool value) {
		return ((T (*)(AvatarComposer*, bool))(Il2CppBase() + 0x35F3024))(this, value);
	}
	template <typename T = bool> T MeshShow(uintptr_t inEquip, bool inEnable) {
		return ((T (*)(AvatarComposer*, uintptr_t, bool))(Il2CppBase() + 0x35F302C))(this, inEquip, inEnable);
	}
	template <typename T = bool> T IsShowForDefMesh(uintptr_t idx) {
		return ((T (*)(AvatarComposer*, uintptr_t))(Il2CppBase() + 0x35F3460))(this, idx);
	}
	template <typename T = void> T ResetLOD() {
		return ((T (*)(AvatarComposer*))(Il2CppBase() + 0x35F3578))(this);
	}
	template <typename T = void> T RegainSkinnedMesh(uintptr_t inList) {
		return ((T (*)(AvatarComposer*, uintptr_t))(Il2CppBase() + 0x35F3698))(this, inList);
	}
	template <typename T = bool> T get_Item(uintptr_t idx) {
		return ((T (*)(AvatarComposer*, uintptr_t))(Il2CppBase() + 0x35F0E20))(this, idx);
	}
	template <typename T = void> T set_Item(uintptr_t idx, bool value) {
		return ((T (*)(AvatarComposer*, uintptr_t, bool))(Il2CppBase() + 0x35F39E8))(this, idx, value);
	}
	template <typename T = bool> T GetShow(uintptr_t idx) {
		return ((T (*)(AvatarComposer*, uintptr_t))(Il2CppBase() + 0x35F3888))(this, idx);
	}
	template <typename T = void> T SetShow(uintptr_t idx, bool value) {
		return ((T (*)(AvatarComposer*, uintptr_t, bool))(Il2CppBase() + 0x35F39EC))(this, idx, value);
	}
	template <typename T = void> T set_Visible(bool value) {
		return ((T (*)(AvatarComposer*, bool))(Il2CppBase() + 0x35F3DE8))(this, value);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AvatarComposer*))(Il2CppBase() + 0x35F3E8C))(this);
	}
	template <typename T = int32_t> static T CompareLODIndex(uintptr_t left, uintptr_t right) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x35F40A4))(0, left, right);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> static T GetGameObjects(Il2CppArray<uintptr_t>* inKeys, uintptr_t inSrc) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x21D4684))(0, inKeys, inSrc);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> static T GetChilds(Il2CppArray<uintptr_t>* inKeys, uintptr_t inSrc) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x21D2560))(0, inKeys, inSrc);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AvatarComposer*))(Il2CppBase() + 0x35F42BC))(this);
	}
	template <typename T = void> T initData(bool fromAwake) {
		return ((T (*)(AvatarComposer*, bool))(Il2CppBase() + 0x35ED404))(this, fromAwake);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(AvatarComposer*))(Il2CppBase() + 0x35F3F38))(this);
	}
	template <typename T = void> T Replace(uintptr_t toMeshGO) {
		return ((T (*)(AvatarComposer*, uintptr_t))(Il2CppBase() + 0x35F6164))(this, toMeshGO);
	}
	template <typename T = bool> T ReplaceEquip(int32_t idx, Il2CppArray<uintptr_t>* inRenderers, Il2CppArray<uintptr_t>* inOlds) {
		return ((T (*)(AvatarComposer*, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35F65E8))(this, idx, inRenderers, inOlds);
	}
	template <typename T = void> T UnregEquip(Il2CppArray<uintptr_t>* inOlds) {
		return ((T (*)(AvatarComposer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35F67B8))(this, inOlds);
	}
	template <typename T = void> T ChangeDetailTexture(uintptr_t inType, uintptr_t inTex) {
		return ((T (*)(AvatarComposer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35F7A70))(this, inType, inTex);
	}
	template <typename T = uintptr_t> T ChangeEquip(uintptr_t toMeshGO, bool show, Il2CppArray<uintptr_t>* inMaterialIDs) {
		return ((T (*)(AvatarComposer*, uintptr_t, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35F7E24))(this, toMeshGO, show, inMaterialIDs);
	}
	template <typename T = void> T Unequip(uintptr_t inType) {
		return ((T (*)(AvatarComposer*, uintptr_t))(Il2CppBase() + 0x35F5754))(this, inType);
	}
	template <typename T = void> T _Unequip(Il2CppArray<uintptr_t>* refOPMesh, int32_t inType) {
		return ((T (*)(AvatarComposer*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x35F59CC))(this, refOPMesh, inType);
	}
	template <typename T = bool> T SwitchEquip(uintptr_t inType, Il2CppArray<uintptr_t>* inMesh, uintptr_t Offset, uintptr_t inAppendObj) {
		return ((T (*)(AvatarComposer*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35F8D30))(this, inType, inMesh, Offset, inAppendObj);
	}
	template <typename T = bool> T _Equip(int32_t inType, Il2CppArray<uintptr_t>* refOPMesh, Il2CppArray<uintptr_t>* inMesh, uintptr_t Offset, uintptr_t inAppendObj) {
		return ((T (*)(AvatarComposer*, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35F6DF0))(this, inType, refOPMesh, inMesh, Offset, inAppendObj);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T BindAppendObjs(uintptr_t inAppendObj, int32_t idx) {
		return ((T (*)(AvatarComposer*, uintptr_t, int32_t))(Il2CppBase() + 0x35F9910))(this, inAppendObj, idx);
	}
	template <typename T = void> T ResetAppendObjs() {
		return ((T (*)(AvatarComposer*))(Il2CppBase() + 0x35F4894))(this);
	}
	template <typename T = void> static T NullUpdate(Il2CppArray<uintptr_t>* refOPMesh) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35FB000))(0, refOPMesh);
	}
	template <typename T = void> T UpdateEquip(Il2CppArray<uintptr_t>* refOPMesh) {
		return ((T (*)(AvatarComposer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35FAC90))(this, refOPMesh);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(AvatarComposer*))(Il2CppBase() + 0x35FB2F0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRenderers(uintptr_t inType) {
		return ((T (*)(AvatarComposer*, uintptr_t))(Il2CppBase() + 0x35FB420))(this, inType);
	}
	template <typename T = void> T UpdateDefBones(Il2CppArray<uintptr_t>* renderers, uintptr_t offset, bool add) {
		return ((T (*)(AvatarComposer*, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x35F16A8))(this, renderers, offset, add);
	}
	template <typename T = void> T UpdateDefBones_1(uintptr_t renderers, uintptr_t offset, bool add) {
		return ((T (*)(AvatarComposer*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x35FB618))(this, renderers, offset, add);
	}
	template <typename T = void> T UpdateDefBones_2(uintptr_t inMeshFilter, uintptr_t offset, bool add) {
		return ((T (*)(AvatarComposer*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x35FB844))(this, inMeshFilter, offset, add);
	}
	template <typename T = void> T UpdateMeshBone(uintptr_t inMesh, uintptr_t offset, bool add) {
		return ((T (*)(AvatarComposer*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x35FBA70))(this, inMesh, offset, add);
	}
	template <typename T = void> T ResetBindBone(uintptr_t inMesh, Il2CppArray<uintptr_t>* inBones, uintptr_t inRootBone) {
		return ((T (*)(AvatarComposer*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x35FC0F0))(this, inMesh, inBones, inRootBone);
	}
	template <typename T = void> T ResetBones(Il2CppArray<uintptr_t>* renderers, uintptr_t offset, bool add) {
		return ((T (*)(AvatarComposer*, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x35FC528))(this, renderers, offset, add);
	}
	template <typename T = void> T UpdateBones(Il2CppArray<uintptr_t>* renderers, uintptr_t offset, bool add) {
		return ((T (*)(AvatarComposer*, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x35F1464))(this, renderers, offset, add);
	}
	template <typename T = uintptr_t> T findBone(Il2CppArray<uintptr_t>* inBones, Il2CppString* name) {
		return ((T (*)(AvatarComposer*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x35FC7B0))(this, inBones, name);
	}
	template <typename T = uintptr_t> T AddBone(uintptr_t inBone) {
		return ((T (*)(AvatarComposer*, uintptr_t))(Il2CppBase() + 0x35FCC00))(this, inBone);
	}
	template <typename T = bool> T UpdateBones_1(Il2CppArray<uintptr_t>* renderers, Il2CppArray<uintptr_t>* targetBones, uintptr_t offset, bool add, bool inResetBone) {
		return ((T (*)(AvatarComposer*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, bool, bool))(Il2CppBase() + 0x35EF0BC))(this, renderers, targetBones, offset, add, inResetBone);
	}
	template <typename T = void> T ResetRetargetData() {
		return ((T (*)(AvatarComposer*))(Il2CppBase() + 0x35FCF0C))(this);
	}
	template <typename T = void> T SetRetargetData() {
		return ((T (*)(AvatarComposer*))(Il2CppBase() + 0x35F436C))(this);
	}

};

}
