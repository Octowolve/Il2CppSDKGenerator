#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class WeaponFireEffectConfigConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "WeaponFireEffectConfigConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& AssetIdFor1P() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& AssetIdFor3P() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& AssetIdForHip1P() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& AssetIdForHip3P() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& AssetIdForExtra1P() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& SocketNameForExtra1P() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& AssetIdForBulletTrack1P() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& AssetIdForBulletTrack3P() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& AssetIdForBulletSmoke1P() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& AssetIdForBulletSmoke3P() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& AssetIdForExtraBulletSmoke1P() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& AssetIdForExtraBulletSmoke3P() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& AssetIdForShellDrop1P() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& AssetIdForShellDrop3P() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& AssetIdForCharging1P() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& AttachAssetIdFor1P() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& AttachAssetIdFor3P() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& AttachAssetIdForHip1P() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& AttachAssetIdForHip3P() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AssetIdForLevelEffects() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SocketForLevelEffects() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& KillCountForLevelEffect() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AssetIdsForExtraEffects() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SocketsForExtraEffects() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AssetIdsForExtraEffects3P() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SocketsForExtraEffects3P() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AssetIdsForExtraEffectsUI() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SocketsForExtraEffectsUI() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F6FE0))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F7080))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, int32_t))(Il2CppBase() + 0x30F7088))(this, value);
	}
	template <typename T = int32_t> T get_AssetIdFor1P() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F7090))(this);
	}
	template <typename T = void> T set_AssetIdFor1P(int32_t value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, int32_t))(Il2CppBase() + 0x30F7098))(this, value);
	}
	template <typename T = int32_t> T get_AssetIdFor3P() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F70A0))(this);
	}
	template <typename T = void> T set_AssetIdFor3P(int32_t value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, int32_t))(Il2CppBase() + 0x30F70A8))(this, value);
	}
	template <typename T = int32_t> T get_AssetIdForHip1P() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F70B0))(this);
	}
	template <typename T = void> T set_AssetIdForHip1P(int32_t value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, int32_t))(Il2CppBase() + 0x30F70B8))(this, value);
	}
	template <typename T = int32_t> T get_AssetIdForHip3P() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F70C0))(this);
	}
	template <typename T = void> T set_AssetIdForHip3P(int32_t value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, int32_t))(Il2CppBase() + 0x30F70C8))(this, value);
	}
	template <typename T = int32_t> T get_AssetIdForExtra1P() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F70D0))(this);
	}
	template <typename T = void> T set_AssetIdForExtra1P(int32_t value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, int32_t))(Il2CppBase() + 0x30F70D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_SocketNameForExtra1P() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F70E0))(this);
	}
	template <typename T = void> T set_SocketNameForExtra1P(Il2CppString* value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, Il2CppString*))(Il2CppBase() + 0x30F70E8))(this, value);
	}
	template <typename T = int32_t> T get_AssetIdForBulletTrack1P() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F70F0))(this);
	}
	template <typename T = void> T set_AssetIdForBulletTrack1P(int32_t value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, int32_t))(Il2CppBase() + 0x30F70F8))(this, value);
	}
	template <typename T = int32_t> T get_AssetIdForBulletTrack3P() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F7100))(this);
	}
	template <typename T = void> T set_AssetIdForBulletTrack3P(int32_t value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, int32_t))(Il2CppBase() + 0x30F7108))(this, value);
	}
	template <typename T = int32_t> T get_AssetIdForBulletSmoke1P() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F7110))(this);
	}
	template <typename T = void> T set_AssetIdForBulletSmoke1P(int32_t value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, int32_t))(Il2CppBase() + 0x30F7118))(this, value);
	}
	template <typename T = int32_t> T get_AssetIdForBulletSmoke3P() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F7120))(this);
	}
	template <typename T = void> T set_AssetIdForBulletSmoke3P(int32_t value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, int32_t))(Il2CppBase() + 0x30F7128))(this, value);
	}
	template <typename T = int32_t> T get_AssetIdForExtraBulletSmoke1P() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F7130))(this);
	}
	template <typename T = void> T set_AssetIdForExtraBulletSmoke1P(int32_t value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, int32_t))(Il2CppBase() + 0x30F7138))(this, value);
	}
	template <typename T = int32_t> T get_AssetIdForExtraBulletSmoke3P() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F7140))(this);
	}
	template <typename T = void> T set_AssetIdForExtraBulletSmoke3P(int32_t value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, int32_t))(Il2CppBase() + 0x30F7148))(this, value);
	}
	template <typename T = int32_t> T get_AssetIdForShellDrop1P() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F7150))(this);
	}
	template <typename T = void> T set_AssetIdForShellDrop1P(int32_t value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, int32_t))(Il2CppBase() + 0x30F7158))(this, value);
	}
	template <typename T = int32_t> T get_AssetIdForShellDrop3P() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F7160))(this);
	}
	template <typename T = void> T set_AssetIdForShellDrop3P(int32_t value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, int32_t))(Il2CppBase() + 0x30F7168))(this, value);
	}
	template <typename T = int32_t> T get_AssetIdForCharging1P() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F7170))(this);
	}
	template <typename T = void> T set_AssetIdForCharging1P(int32_t value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, int32_t))(Il2CppBase() + 0x30F7178))(this, value);
	}
	template <typename T = int32_t> T get_AttachAssetIdFor1P() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F7180))(this);
	}
	template <typename T = void> T set_AttachAssetIdFor1P(int32_t value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, int32_t))(Il2CppBase() + 0x30F7188))(this, value);
	}
	template <typename T = int32_t> T get_AttachAssetIdFor3P() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F7190))(this);
	}
	template <typename T = void> T set_AttachAssetIdFor3P(int32_t value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, int32_t))(Il2CppBase() + 0x30F7198))(this, value);
	}
	template <typename T = int32_t> T get_AttachAssetIdForHip1P() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F71A0))(this);
	}
	template <typename T = void> T set_AttachAssetIdForHip1P(int32_t value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, int32_t))(Il2CppBase() + 0x30F71A8))(this, value);
	}
	template <typename T = int32_t> T get_AttachAssetIdForHip3P() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F71B0))(this);
	}
	template <typename T = void> T set_AttachAssetIdForHip3P(int32_t value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, int32_t))(Il2CppBase() + 0x30F71B8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AssetIdForLevelEffects() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F71C0))(this);
	}
	template <typename T = void> T set_AssetIdForLevelEffects(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30F71C8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SocketForLevelEffects() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F71D0))(this);
	}
	template <typename T = void> T set_SocketForLevelEffects(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30F71D8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_KillCountForLevelEffect() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F71E0))(this);
	}
	template <typename T = void> T set_KillCountForLevelEffect(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30F71E8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AssetIdsForExtraEffects() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F71F0))(this);
	}
	template <typename T = void> T set_AssetIdsForExtraEffects(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30F71F8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SocketsForExtraEffects() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F7200))(this);
	}
	template <typename T = void> T set_SocketsForExtraEffects(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30F7208))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AssetIdsForExtraEffects3P() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F7210))(this);
	}
	template <typename T = void> T set_AssetIdsForExtraEffects3P(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30F7218))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SocketsForExtraEffects3P() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F7220))(this);
	}
	template <typename T = void> T set_SocketsForExtraEffects3P(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30F7228))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AssetIdsForExtraEffectsUI() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F7230))(this);
	}
	template <typename T = void> T set_AssetIdsForExtraEffectsUI(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30F7238))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SocketsForExtraEffectsUI() {
		return ((T (*)(WeaponFireEffectConfigConfig*))(Il2CppBase() + 0x30F7240))(this);
	}
	template <typename T = void> T set_SocketsForExtraEffectsUI(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponFireEffectConfigConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30F7248))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WeaponFireEffectConfigConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30F7250))(this, bytes, position);
	}

};

}
