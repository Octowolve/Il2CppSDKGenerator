#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class WeaponSkillStrengthenConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "WeaponSkillStrengthenConfConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_StrengthenEffectConfigList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& BaseSkill_1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& EffectIdx_1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ModifyMode_1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& Condition_1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& CondOp_1() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& CondParam_1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& CondTarget_1() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& Effect_1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& EffectParam_1() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& EffectTime_1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& EffectOverlay_1() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& EffectMaxLayer_1() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& ClientEffectParam_1() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& ClientSkillParam_1() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& BaseSkill_2() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& EffectIdx_2() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& ModifyMode_2() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& Condition_2() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& CondOp_2() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& CondParam_2() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& CondTarget_2() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& Effect_2() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& EffectParam_2() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> T& EffectTime_2() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& EffectOverlay_2() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& EffectMaxLayer_2() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& ClientEffectParam_2() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& ClientSkillParam_2() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& BaseSkill_3() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& EffectIdx_3() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& ModifyMode_3() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& Condition_3() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& CondOp_3() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& CondParam_3() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& CondTarget_3() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppString*> T& Effect_3() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& EffectParam_3() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> T& EffectTime_3() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& EffectOverlay_3() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppString*> T& EffectMaxLayer_3() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& ClientEffectParam_3() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> T& ClientSkillParam_3() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& BaseSkill_4() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& EffectIdx_4() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& ModifyMode_4() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppString*> T& Condition_4() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& CondOp_4() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppString*> T& CondParam_4() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppString*> T& CondTarget_4() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppString*> T& Effect_4() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppString*> T& EffectParam_4() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppString*> T& EffectTime_4() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppString*> T& EffectOverlay_4() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppString*> T& EffectMaxLayer_4() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppString*> T& ClientEffectParam_4() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppString*> T& ClientSkillParam_4() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& BaseSkill_5() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& EffectIdx_5() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& ModifyMode_5() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppString*> T& Condition_5() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppString*> T& CondOp_5() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppString*> T& CondParam_5() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppString*> T& CondTarget_5() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppString*> T& Effect_5() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppString*> T& EffectParam_5() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = Il2CppString*> T& EffectTime_5() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppString*> T& EffectOverlay_5() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppString*> T& EffectMaxLayer_5() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppString*> T& ClientEffectParam_5() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = Il2CppString*> T& ClientSkillParam_5() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStrengthenEffectConfigs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnalyticalSkillStrengthenConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValidStrengthen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppList<uintptr_t>*> T GetStrengthenEffectConfigs() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FA6DC))(this);
	}
	template <typename T = void> T AnalyticalSkillStrengthenConf() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FBA20))(this);
	}
	template <typename T = bool> T IsValidStrengthen(int32_t skillID) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, int32_t))(Il2CppBase() + 0x30FBECC))(this, skillID);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC1A4))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC244))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, int32_t))(Il2CppBase() + 0x30FC24C))(this, value);
	}
	template <typename T = int32_t> T get_BaseSkill_1() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FBEC4))(this);
	}
	template <typename T = void> T set_BaseSkill_1(int32_t value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, int32_t))(Il2CppBase() + 0x30FC254))(this, value);
	}
	template <typename T = int32_t> T get_EffectIdx_1() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FBF7C))(this);
	}
	template <typename T = void> T set_EffectIdx_1(int32_t value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, int32_t))(Il2CppBase() + 0x30FC25C))(this, value);
	}
	template <typename T = int32_t> T get_ModifyMode_1() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FBF84))(this);
	}
	template <typename T = void> T set_ModifyMode_1(int32_t value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, int32_t))(Il2CppBase() + 0x30FC264))(this, value);
	}
	template <typename T = Il2CppString*> T get_Condition_1() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FBF8C))(this);
	}
	template <typename T = void> T set_Condition_1(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC26C))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondOp_1() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FBF94))(this);
	}
	template <typename T = void> T set_CondOp_1(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC274))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondParam_1() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FBF9C))(this);
	}
	template <typename T = void> T set_CondParam_1(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC27C))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondTarget_1() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FBFA4))(this);
	}
	template <typename T = void> T set_CondTarget_1(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC284))(this, value);
	}
	template <typename T = Il2CppString*> T get_Effect_1() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FBFAC))(this);
	}
	template <typename T = void> T set_Effect_1(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC28C))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam_1() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FBFB4))(this);
	}
	template <typename T = void> T set_EffectParam_1(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC294))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectTime_1() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FBFBC))(this);
	}
	template <typename T = void> T set_EffectTime_1(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC29C))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectOverlay_1() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FBFC4))(this);
	}
	template <typename T = void> T set_EffectOverlay_1(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC2A4))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectMaxLayer_1() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FBFCC))(this);
	}
	template <typename T = void> T set_EffectMaxLayer_1(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC2AC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClientEffectParam_1() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FBFD4))(this);
	}
	template <typename T = void> T set_ClientEffectParam_1(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC2B4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClientSkillParam_1() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FBFDC))(this);
	}
	template <typename T = void> T set_ClientSkillParam_1(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC2BC))(this, value);
	}
	template <typename T = int32_t> T get_BaseSkill_2() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FBFE4))(this);
	}
	template <typename T = void> T set_BaseSkill_2(int32_t value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, int32_t))(Il2CppBase() + 0x30FC2C4))(this, value);
	}
	template <typename T = int32_t> T get_EffectIdx_2() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FBFEC))(this);
	}
	template <typename T = void> T set_EffectIdx_2(int32_t value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, int32_t))(Il2CppBase() + 0x30FC2CC))(this, value);
	}
	template <typename T = int32_t> T get_ModifyMode_2() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FBFF4))(this);
	}
	template <typename T = void> T set_ModifyMode_2(int32_t value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, int32_t))(Il2CppBase() + 0x30FC2D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Condition_2() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FBFFC))(this);
	}
	template <typename T = void> T set_Condition_2(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC2DC))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondOp_2() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC004))(this);
	}
	template <typename T = void> T set_CondOp_2(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC2E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondParam_2() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC00C))(this);
	}
	template <typename T = void> T set_CondParam_2(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC2EC))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondTarget_2() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC014))(this);
	}
	template <typename T = void> T set_CondTarget_2(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC2F4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Effect_2() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC01C))(this);
	}
	template <typename T = void> T set_Effect_2(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC2FC))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam_2() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC024))(this);
	}
	template <typename T = void> T set_EffectParam_2(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC304))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectTime_2() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC02C))(this);
	}
	template <typename T = void> T set_EffectTime_2(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC30C))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectOverlay_2() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC034))(this);
	}
	template <typename T = void> T set_EffectOverlay_2(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC314))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectMaxLayer_2() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC03C))(this);
	}
	template <typename T = void> T set_EffectMaxLayer_2(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC31C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClientEffectParam_2() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC044))(this);
	}
	template <typename T = void> T set_ClientEffectParam_2(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC324))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClientSkillParam_2() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC04C))(this);
	}
	template <typename T = void> T set_ClientSkillParam_2(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC32C))(this, value);
	}
	template <typename T = int32_t> T get_BaseSkill_3() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC054))(this);
	}
	template <typename T = void> T set_BaseSkill_3(int32_t value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, int32_t))(Il2CppBase() + 0x30FC334))(this, value);
	}
	template <typename T = int32_t> T get_EffectIdx_3() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC05C))(this);
	}
	template <typename T = void> T set_EffectIdx_3(int32_t value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, int32_t))(Il2CppBase() + 0x30FC33C))(this, value);
	}
	template <typename T = int32_t> T get_ModifyMode_3() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC064))(this);
	}
	template <typename T = void> T set_ModifyMode_3(int32_t value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, int32_t))(Il2CppBase() + 0x30FC344))(this, value);
	}
	template <typename T = Il2CppString*> T get_Condition_3() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC06C))(this);
	}
	template <typename T = void> T set_Condition_3(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC34C))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondOp_3() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC074))(this);
	}
	template <typename T = void> T set_CondOp_3(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC354))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondParam_3() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC07C))(this);
	}
	template <typename T = void> T set_CondParam_3(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC35C))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondTarget_3() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC084))(this);
	}
	template <typename T = void> T set_CondTarget_3(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC364))(this, value);
	}
	template <typename T = Il2CppString*> T get_Effect_3() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC08C))(this);
	}
	template <typename T = void> T set_Effect_3(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC36C))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam_3() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC094))(this);
	}
	template <typename T = void> T set_EffectParam_3(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC374))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectTime_3() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC09C))(this);
	}
	template <typename T = void> T set_EffectTime_3(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC37C))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectOverlay_3() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC0A4))(this);
	}
	template <typename T = void> T set_EffectOverlay_3(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC384))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectMaxLayer_3() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC0AC))(this);
	}
	template <typename T = void> T set_EffectMaxLayer_3(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC38C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClientEffectParam_3() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC0B4))(this);
	}
	template <typename T = void> T set_ClientEffectParam_3(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC394))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClientSkillParam_3() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC0BC))(this);
	}
	template <typename T = void> T set_ClientSkillParam_3(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC39C))(this, value);
	}
	template <typename T = int32_t> T get_BaseSkill_4() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC0C4))(this);
	}
	template <typename T = void> T set_BaseSkill_4(int32_t value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, int32_t))(Il2CppBase() + 0x30FC3A4))(this, value);
	}
	template <typename T = int32_t> T get_EffectIdx_4() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC0CC))(this);
	}
	template <typename T = void> T set_EffectIdx_4(int32_t value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, int32_t))(Il2CppBase() + 0x30FC3AC))(this, value);
	}
	template <typename T = int32_t> T get_ModifyMode_4() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC0D4))(this);
	}
	template <typename T = void> T set_ModifyMode_4(int32_t value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, int32_t))(Il2CppBase() + 0x30FC3B4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Condition_4() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC0DC))(this);
	}
	template <typename T = void> T set_Condition_4(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC3BC))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondOp_4() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC0E4))(this);
	}
	template <typename T = void> T set_CondOp_4(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC3C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondParam_4() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC0EC))(this);
	}
	template <typename T = void> T set_CondParam_4(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC3CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondTarget_4() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC0F4))(this);
	}
	template <typename T = void> T set_CondTarget_4(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC3D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Effect_4() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC0FC))(this);
	}
	template <typename T = void> T set_Effect_4(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC3DC))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam_4() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC104))(this);
	}
	template <typename T = void> T set_EffectParam_4(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC3E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectTime_4() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC10C))(this);
	}
	template <typename T = void> T set_EffectTime_4(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC3EC))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectOverlay_4() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC114))(this);
	}
	template <typename T = void> T set_EffectOverlay_4(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC3F4))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectMaxLayer_4() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC11C))(this);
	}
	template <typename T = void> T set_EffectMaxLayer_4(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC3FC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClientEffectParam_4() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC124))(this);
	}
	template <typename T = void> T set_ClientEffectParam_4(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC404))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClientSkillParam_4() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC12C))(this);
	}
	template <typename T = void> T set_ClientSkillParam_4(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC40C))(this, value);
	}
	template <typename T = int32_t> T get_BaseSkill_5() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC134))(this);
	}
	template <typename T = void> T set_BaseSkill_5(int32_t value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, int32_t))(Il2CppBase() + 0x30FC414))(this, value);
	}
	template <typename T = int32_t> T get_EffectIdx_5() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC13C))(this);
	}
	template <typename T = void> T set_EffectIdx_5(int32_t value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, int32_t))(Il2CppBase() + 0x30FC41C))(this, value);
	}
	template <typename T = int32_t> T get_ModifyMode_5() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC144))(this);
	}
	template <typename T = void> T set_ModifyMode_5(int32_t value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, int32_t))(Il2CppBase() + 0x30FC424))(this, value);
	}
	template <typename T = Il2CppString*> T get_Condition_5() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC14C))(this);
	}
	template <typename T = void> T set_Condition_5(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC42C))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondOp_5() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC154))(this);
	}
	template <typename T = void> T set_CondOp_5(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC434))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondParam_5() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC15C))(this);
	}
	template <typename T = void> T set_CondParam_5(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC43C))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondTarget_5() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC164))(this);
	}
	template <typename T = void> T set_CondTarget_5(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC444))(this, value);
	}
	template <typename T = Il2CppString*> T get_Effect_5() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC16C))(this);
	}
	template <typename T = void> T set_Effect_5(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC44C))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam_5() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC174))(this);
	}
	template <typename T = void> T set_EffectParam_5(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC454))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectTime_5() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC17C))(this);
	}
	template <typename T = void> T set_EffectTime_5(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC45C))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectOverlay_5() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC184))(this);
	}
	template <typename T = void> T set_EffectOverlay_5(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC464))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectMaxLayer_5() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC18C))(this);
	}
	template <typename T = void> T set_EffectMaxLayer_5(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC46C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClientEffectParam_5() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC194))(this);
	}
	template <typename T = void> T set_ClientEffectParam_5(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC474))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClientSkillParam_5() {
		return ((T (*)(WeaponSkillStrengthenConfConfig*))(Il2CppBase() + 0x30FC19C))(this);
	}
	template <typename T = void> T set_ClientSkillParam_5(Il2CppString* value) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FC47C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WeaponSkillStrengthenConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30FC484))(this, bytes, position);
	}

};

}
