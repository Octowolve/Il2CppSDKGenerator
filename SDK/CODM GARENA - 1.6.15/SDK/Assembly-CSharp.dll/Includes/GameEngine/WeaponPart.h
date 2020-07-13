#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponPart
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponPart"));
	}

	template <typename T = uintptr_t> T& m_WeaponPartName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_OwnerWeapon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_ItemID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_ActorID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_WeaponPartINIPath() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& m_ActorType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& m_ActorType3P() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_MovementScaleAdd() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_SprintMovementScaleAdd() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_DisperseBaseAdd() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_DisperseModifierStandingAdd() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_DisperseModifierJumpingAdd() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_DisperseModifierWalkingAdd() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_RecoilUpBaseAdd() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_RecoilUpModifierAdd() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_RecoilUpMaxAdd() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_RecoilLateralBaseAdd() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_RecoilLateralModifierAdd() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_RecoilLateralMaxAdd() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_RecoilScaleStandingAdd() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_RecoilScaleWalkingAdd() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_RecoilScaleJumpingAdd() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_DamageRangeAdd() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_DamageValueAdd() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& m_ChangeClipTimePrecentAdd() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_RecoilScaleWeaponShake() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& m_AttachSocket() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& m_MeshAssetID1P() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& m_MeshAssetID3P() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& m_MeshAssetIDUI() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_FemaleMeshAssetID3P() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& m_UseWeaponCamo() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_BuffIDs() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uint32_t> T& m_curSkinID() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& m_IsInChangeFOVState() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& m_UsingMeshAssetID3P() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& m_LoadingVersion() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_LoadingAssets() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppVector3> T& m_weaponLocalPosSet() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& m_MeshID() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& m_IsAutoActivate() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MeshRenderers() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& m_IsResetPropActive() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& m_IsAdditionPropActive() {
		return *(T*)((uintptr_t)this + 0xC1);
	}
	template <typename T = bool> T& m_IsHidingPart() {
		return *(T*)((uintptr_t)this + 0xC2);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ms_ShouldNotReplaceAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_Mesh1P() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& m_Mesh3P() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindWeaponPartClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadPropertyFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deactivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldNotReplaceWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AsyncLoadAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeaponConfigProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdditionWeaponConfigProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponHasAttachSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadMeshModeObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchWeaponPartModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustPartTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponBeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponEndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSilencerWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAimingZoomingFov() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeAimingZoomingFov() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponClipAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOpticsPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOpticsType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldPlayOpticsAimingAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShouldNotReplaceWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheMeshAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCacheMeshAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HadCacheMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponPart*, uintptr_t, bool))(Il2CppBase() + 0x240E81C))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x240EAA0))(this);
	}
	template <typename T = uintptr_t> T get_WeaponPartName() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x240EB5C))(this);
	}
	template <typename T = void> T set_WeaponPartName(uintptr_t value) {
		return ((T (*)(WeaponPart*, uintptr_t))(Il2CppBase() + 0x240EB64))(this, value);
	}
	template <typename T = void> T set_OwnerWeapon(uintptr_t value) {
		return ((T (*)(WeaponPart*, uintptr_t))(Il2CppBase() + 0x240EB6C))(this, value);
	}
	template <typename T = uintptr_t> T get_WeaponNameType() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x240EB74))(this);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x240EC54))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(WeaponPart*, int32_t))(Il2CppBase() + 0x240EC5C))(this, value);
	}
	template <typename T = int32_t> T get_ActorID() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x240EC64))(this);
	}
	template <typename T = void> T set_ActorID(int32_t value) {
		return ((T (*)(WeaponPart*, int32_t))(Il2CppBase() + 0x240EC6C))(this, value);
	}
	template <typename T = int32_t> T get_WeaponPartCategory() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x240EC74))(this);
	}
	template <typename T = void> T set_WeaponPartINIPath(Il2CppString* value) {
		return ((T (*)(WeaponPart*, Il2CppString*))(Il2CppBase() + 0x240EE4C))(this, value);
	}
	template <typename T = Il2CppString*> T get_WeaponPartINIPath() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x240EE54))(this);
	}
	template <typename T = float> T get_RecoilScaleWeaponShake() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x240EF58))(this);
	}
	template <typename T = bool> T get_IsInChangeFOVState() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x240EF60))(this);
	}
	template <typename T = bool> T get_IsLoading() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x240EF68))(this);
	}
	template <typename T = Il2CppString*> T get_WeaponPartNameStr() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x240F010))(this);
	}
	template <typename T = int32_t> static T FindWeaponPartClass(Il2CppString* configFileName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x240F0B8))(0, configFileName);
	}
	template <typename T = int32_t> static T GetCategory(int32_t partID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x240F280))(0, partID);
	}
	template <typename T = int32_t> static T GetCategory_1(uintptr_t partName) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x240ED18))(0, partName);
	}
	template <typename T = void> T InitWeaponPart(bool isAutoActivate) {
		return ((T (*)(WeaponPart*, bool))(Il2CppBase() + 0x240F464))(this, isAutoActivate);
	}
	template <typename T = void> T LoadPropertyFromConfig() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x240F5C8))(this);
	}
	template <typename T = void> T ClearMesh() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x240FBAC))(this);
	}
	template <typename T = void> T ResetTransform() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x2410508))(this);
	}
	template <typename T = void> T HideWeaponPart() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x24105D0))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x241095C))(this);
	}
	template <typename T = bool> T ShouldNotReplaceWeaponPart() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x24107B4))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x2410C90))(this);
	}
	template <typename T = void> T OnLoadComplete(Il2CppArray<uintptr_t>* assetID, uintptr_t obj) {
		return ((T (*)(WeaponPart*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2410FCC))(this, assetID, obj);
	}
	template <typename T = void> T AsyncLoadAssets() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x241123C))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x24116F8))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponPart*, float))(Il2CppBase() + 0x2411808))(this, deltaTime);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x24118D8))(this);
	}
	template <typename T = bool> T ResetWeaponConfigProperty(bool active) {
		return ((T (*)(WeaponPart*, bool))(Il2CppBase() + 0x24119B8))(this, active);
	}
	template <typename T = bool> T AdditionWeaponConfigProperty(bool active) {
		return ((T (*)(WeaponPart*, bool))(Il2CppBase() + 0x2411B70))(this, active);
	}
	template <typename T = bool> T WeaponHasAttachSocket() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x24129BC))(this);
	}
	template <typename T = void> T SetupWeaponPart() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x2412BD4))(this);
	}
	template <typename T = void> T LoadMeshModeObject() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x2413900))(this);
	}
	template <typename T = void> T SwitchWeaponPartModel(bool cutAway) {
		return ((T (*)(WeaponPart*, bool))(Il2CppBase() + 0x2414C4C))(this, cutAway);
	}
	template <typename T = void> T AdjustPartTransform(int32_t weaponPartMeshID, int32_t weaponMeshID) {
		return ((T (*)(WeaponPart*, int32_t, int32_t))(Il2CppBase() + 0x2414F4C))(this, weaponPartMeshID, weaponMeshID);
	}
	template <typename T = void> T OnWeaponBeginState(uintptr_t stateType) {
		return ((T (*)(WeaponPart*, uintptr_t))(Il2CppBase() + 0x2415030))(this, stateType);
	}
	template <typename T = void> T OnWeaponEndState(uintptr_t stateType) {
		return ((T (*)(WeaponPart*, uintptr_t))(Il2CppBase() + 0x2415100))(this, stateType);
	}
	template <typename T = bool> T IsSilencerWeaponPart() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x24151D0))(this);
	}
	template <typename T = void> T SetAimingZoomingFov(bool isFov) {
		return ((T (*)(WeaponPart*, bool))(Il2CppBase() + 0x24152A0))(this, isFov);
	}
	template <typename T = void> T ChangeAimingZoomingFov() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x2415370))(this);
	}
	template <typename T = void> T GetWeaponClipAmmoCount(uintptr_t clipAmmoCount, uintptr_t carriedAmmoCount, uintptr_t maxAmmoCout) {
		return ((T (*)(WeaponPart*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2415438))(this, clipAmmoCount, carriedAmmoCount, maxAmmoCout);
	}
	template <typename T = bool> T IsOpticsPart() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x2415524))(this);
	}
	template <typename T = uintptr_t> T GetOpticsType() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x24155F4))(this);
	}
	template <typename T = bool> T ShouldPlayOpticsAimingAnim() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x24156C4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_GetRenderers() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x24157A0))(this);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(WeaponPart*, bool))(Il2CppBase() + 0x2415838))(this, isHidden);
	}
	template <typename T = bool> static T ShouldNotReplaceWeaponPart_1(uintptr_t partAssetID) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2410B20))(0, partAssetID);
	}
	template <typename T = void> T CacheMeshAsset() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x24142D8))(this);
	}
	template <typename T = void> T ClearCacheMeshAsset() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x240FFBC))(this);
	}
	template <typename T = bool> T HadCacheMesh() {
		return ((T (*)(WeaponPart*))(Il2CppBase() + 0x24114DC))(this);
	}

};

}
