#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class WeaponSkillConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "WeaponSkillConfConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& SkillEffectConfigList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppString*>*> T& AssetSkillDic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& SkillType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& SkillUseType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& ButtonInHUD() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& HUDSpriteName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& ActiveSkillUseType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& Desc() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& CoolDown() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Duration() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& DelayTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Condition_1() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& CondOp_1() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& CondParam_1() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& CondTarget_1() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Effect_1() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& EffectParam_1() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& EffectTime_1() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& EffectOverlay_1() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& EffectMaxLayer_1() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& ClientEffectParam_1() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& Condition_2() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& CondOp_2() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& CondParam_2() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& CondTarget_2() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& Effect_2() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& EffectParam_2() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& EffectTime_2() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& EffectOverlay_2() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& EffectMaxLayer_2() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& ClientEffectParam_2() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& Condition_3() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& CondOp_3() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& CondParam_3() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& CondTarget_3() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& Effect_3() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> T& EffectParam_3() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& EffectTime_3() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& EffectOverlay_3() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& EffectMaxLayer_3() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> T& ClientEffectParam_3() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& Condition_4() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& CondOp_4() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& CondParam_4() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& CondTarget_4() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& Effect_4() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppString*> T& EffectParam_4() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& EffectTime_4() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& EffectOverlay_4() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& EffectMaxLayer_4() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppString*> T& ClientEffectParam_4() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& Condition_5() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = int32_t> T& CondOp_5() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppString*> T& CondParam_5() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = int32_t> T& CondTarget_5() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& Effect_5() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppString*> T& EffectParam_5() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& EffectTime_5() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = int32_t> T& EffectOverlay_5() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> T& EffectMaxLayer_5() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppString*> T& ClientEffectParam_5() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppString*> T& ClientSkillParam() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnalyticalSkillConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValidEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModifySkillConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MergeEffectConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MergeClientDisplayParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSecondaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_SkillType() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30F9E14))(this);
	}
	template <typename T = void> T set_SkillType(uintptr_t value) {
		return ((T (*)(WeaponSkillConfConfig*, uintptr_t))(Il2CppBase() + 0x30F9E1C))(this, value);
	}
	template <typename T = uintptr_t> T get_SkillUseType() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30F9E24))(this);
	}
	template <typename T = void> T set_SkillUseType(uintptr_t value) {
		return ((T (*)(WeaponSkillConfConfig*, uintptr_t))(Il2CppBase() + 0x30F9E2C))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30F9E34))(this);
	}
	template <typename T = void> T AnalyticalSkillConfig() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30F9F0C))(this);
	}
	template <typename T = bool> T IsValidEffect(int32_t effectType) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FA2BC))(this, effectType);
	}
	template <typename T = void> T ModifySkillConfig(uintptr_t strengthenConf) {
		return ((T (*)(WeaponSkillConfConfig*, uintptr_t))(Il2CppBase() + 0x30FA4F8))(this, strengthenConf);
	}
	template <typename T = void> T MergeEffectConfig(uintptr_t strengthen, uintptr_t skillEffectConfigs) {
		return ((T (*)(WeaponSkillConfConfig*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30FA7CC))(this, strengthen, skillEffectConfigs);
	}
	template <typename T = void> T MergeClientDisplayParam(uintptr_t fromParamDic, uintptr_t toParamDic) {
		return ((T (*)(WeaponSkillConfConfig*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30FA9C0))(this, fromParamDic, toParamDic);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FAEEC))(this);
	}
	template <typename T = int32_t> T GetSecondaryKeyValue() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FAF8C))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA7C4))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB034))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FB02C))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB03C))(this, value);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30F9EFC))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB044))(this, value);
	}
	template <typename T = int32_t> T get_ButtonInHUD() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FB04C))(this);
	}
	template <typename T = void> T set_ButtonInHUD(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB054))(this, value);
	}
	template <typename T = Il2CppString*> T get_HUDSpriteName() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FB05C))(this);
	}
	template <typename T = void> T set_HUDSpriteName(Il2CppString* value) {
		return ((T (*)(WeaponSkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FB064))(this, value);
	}
	template <typename T = int32_t> T get_ActiveSkillUseType() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30F9F04))(this);
	}
	template <typename T = void> T set_ActiveSkillUseType(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB06C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FB074))(this);
	}
	template <typename T = void> T set_Desc(Il2CppString* value) {
		return ((T (*)(WeaponSkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FB07C))(this, value);
	}
	template <typename T = int32_t> T get_CoolDown() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FB084))(this);
	}
	template <typename T = void> T set_CoolDown(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB08C))(this, value);
	}
	template <typename T = int32_t> T get_Duration() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FB094))(this);
	}
	template <typename T = void> T set_Duration(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB09C))(this, value);
	}
	template <typename T = int32_t> T get_DelayTime() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FB0A4))(this);
	}
	template <typename T = void> T set_DelayTime(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB0AC))(this, value);
	}
	template <typename T = int32_t> T get_Condition_1() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA370))(this);
	}
	template <typename T = void> T set_Condition_1(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB0B4))(this, value);
	}
	template <typename T = int32_t> T get_CondOp_1() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA378))(this);
	}
	template <typename T = void> T set_CondOp_1(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB0BC))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondParam_1() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA380))(this);
	}
	template <typename T = void> T set_CondParam_1(Il2CppString* value) {
		return ((T (*)(WeaponSkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FB0C4))(this, value);
	}
	template <typename T = int32_t> T get_CondTarget_1() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA388))(this);
	}
	template <typename T = void> T set_CondTarget_1(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB0CC))(this, value);
	}
	template <typename T = int32_t> T get_Effect_1() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA2B4))(this);
	}
	template <typename T = void> T set_Effect_1(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB0D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam_1() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA390))(this);
	}
	template <typename T = void> T set_EffectParam_1(Il2CppString* value) {
		return ((T (*)(WeaponSkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FB0DC))(this, value);
	}
	template <typename T = int32_t> T get_EffectTime_1() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA398))(this);
	}
	template <typename T = void> T set_EffectTime_1(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB0E4))(this, value);
	}
	template <typename T = int32_t> T get_EffectOverlay_1() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA3A0))(this);
	}
	template <typename T = void> T set_EffectOverlay_1(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB0EC))(this, value);
	}
	template <typename T = int32_t> T get_EffectMaxLayer_1() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA3A8))(this);
	}
	template <typename T = void> T set_EffectMaxLayer_1(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB0F4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClientEffectParam_1() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA3B0))(this);
	}
	template <typename T = void> T set_ClientEffectParam_1(Il2CppString* value) {
		return ((T (*)(WeaponSkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FB0FC))(this, value);
	}
	template <typename T = int32_t> T get_Condition_2() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA3C0))(this);
	}
	template <typename T = void> T set_Condition_2(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB104))(this, value);
	}
	template <typename T = int32_t> T get_CondOp_2() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA3C8))(this);
	}
	template <typename T = void> T set_CondOp_2(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB10C))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondParam_2() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA3D0))(this);
	}
	template <typename T = void> T set_CondParam_2(Il2CppString* value) {
		return ((T (*)(WeaponSkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FB114))(this, value);
	}
	template <typename T = int32_t> T get_CondTarget_2() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA3D8))(this);
	}
	template <typename T = void> T set_CondTarget_2(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB11C))(this, value);
	}
	template <typename T = int32_t> T get_Effect_2() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA3B8))(this);
	}
	template <typename T = void> T set_Effect_2(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB124))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam_2() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA3E0))(this);
	}
	template <typename T = void> T set_EffectParam_2(Il2CppString* value) {
		return ((T (*)(WeaponSkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FB12C))(this, value);
	}
	template <typename T = int32_t> T get_EffectTime_2() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA3E8))(this);
	}
	template <typename T = void> T set_EffectTime_2(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB134))(this, value);
	}
	template <typename T = int32_t> T get_EffectOverlay_2() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA3F0))(this);
	}
	template <typename T = void> T set_EffectOverlay_2(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB13C))(this, value);
	}
	template <typename T = int32_t> T get_EffectMaxLayer_2() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA3F8))(this);
	}
	template <typename T = void> T set_EffectMaxLayer_2(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB144))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClientEffectParam_2() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA400))(this);
	}
	template <typename T = void> T set_ClientEffectParam_2(Il2CppString* value) {
		return ((T (*)(WeaponSkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FB14C))(this, value);
	}
	template <typename T = int32_t> T get_Condition_3() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA410))(this);
	}
	template <typename T = void> T set_Condition_3(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB154))(this, value);
	}
	template <typename T = int32_t> T get_CondOp_3() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA418))(this);
	}
	template <typename T = void> T set_CondOp_3(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB15C))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondParam_3() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA420))(this);
	}
	template <typename T = void> T set_CondParam_3(Il2CppString* value) {
		return ((T (*)(WeaponSkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FB164))(this, value);
	}
	template <typename T = int32_t> T get_CondTarget_3() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA428))(this);
	}
	template <typename T = void> T set_CondTarget_3(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB16C))(this, value);
	}
	template <typename T = int32_t> T get_Effect_3() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA408))(this);
	}
	template <typename T = void> T set_Effect_3(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB174))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam_3() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA430))(this);
	}
	template <typename T = void> T set_EffectParam_3(Il2CppString* value) {
		return ((T (*)(WeaponSkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FB17C))(this, value);
	}
	template <typename T = int32_t> T get_EffectTime_3() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA438))(this);
	}
	template <typename T = void> T set_EffectTime_3(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB184))(this, value);
	}
	template <typename T = int32_t> T get_EffectOverlay_3() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA440))(this);
	}
	template <typename T = void> T set_EffectOverlay_3(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB18C))(this, value);
	}
	template <typename T = int32_t> T get_EffectMaxLayer_3() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA448))(this);
	}
	template <typename T = void> T set_EffectMaxLayer_3(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB194))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClientEffectParam_3() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA450))(this);
	}
	template <typename T = void> T set_ClientEffectParam_3(Il2CppString* value) {
		return ((T (*)(WeaponSkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FB19C))(this, value);
	}
	template <typename T = int32_t> T get_Condition_4() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA460))(this);
	}
	template <typename T = void> T set_Condition_4(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB1A4))(this, value);
	}
	template <typename T = int32_t> T get_CondOp_4() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA468))(this);
	}
	template <typename T = void> T set_CondOp_4(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB1AC))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondParam_4() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA470))(this);
	}
	template <typename T = void> T set_CondParam_4(Il2CppString* value) {
		return ((T (*)(WeaponSkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FB1B4))(this, value);
	}
	template <typename T = int32_t> T get_CondTarget_4() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA478))(this);
	}
	template <typename T = void> T set_CondTarget_4(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB1BC))(this, value);
	}
	template <typename T = int32_t> T get_Effect_4() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA458))(this);
	}
	template <typename T = void> T set_Effect_4(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB1C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam_4() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA480))(this);
	}
	template <typename T = void> T set_EffectParam_4(Il2CppString* value) {
		return ((T (*)(WeaponSkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FB1CC))(this, value);
	}
	template <typename T = int32_t> T get_EffectTime_4() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA488))(this);
	}
	template <typename T = void> T set_EffectTime_4(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB1D4))(this, value);
	}
	template <typename T = int32_t> T get_EffectOverlay_4() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA490))(this);
	}
	template <typename T = void> T set_EffectOverlay_4(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB1DC))(this, value);
	}
	template <typename T = int32_t> T get_EffectMaxLayer_4() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA498))(this);
	}
	template <typename T = void> T set_EffectMaxLayer_4(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB1E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClientEffectParam_4() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA4A0))(this);
	}
	template <typename T = void> T set_ClientEffectParam_4(Il2CppString* value) {
		return ((T (*)(WeaponSkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FB1EC))(this, value);
	}
	template <typename T = int32_t> T get_Condition_5() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA4B0))(this);
	}
	template <typename T = void> T set_Condition_5(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB1F4))(this, value);
	}
	template <typename T = int32_t> T get_CondOp_5() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA4B8))(this);
	}
	template <typename T = void> T set_CondOp_5(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB1FC))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondParam_5() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA4C0))(this);
	}
	template <typename T = void> T set_CondParam_5(Il2CppString* value) {
		return ((T (*)(WeaponSkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FB204))(this, value);
	}
	template <typename T = int32_t> T get_CondTarget_5() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA4C8))(this);
	}
	template <typename T = void> T set_CondTarget_5(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB20C))(this, value);
	}
	template <typename T = int32_t> T get_Effect_5() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA4A8))(this);
	}
	template <typename T = void> T set_Effect_5(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB214))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam_5() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA4D0))(this);
	}
	template <typename T = void> T set_EffectParam_5(Il2CppString* value) {
		return ((T (*)(WeaponSkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FB21C))(this, value);
	}
	template <typename T = int32_t> T get_EffectTime_5() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA4D8))(this);
	}
	template <typename T = void> T set_EffectTime_5(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB224))(this, value);
	}
	template <typename T = int32_t> T get_EffectOverlay_5() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA4E0))(this);
	}
	template <typename T = void> T set_EffectOverlay_5(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB22C))(this, value);
	}
	template <typename T = int32_t> T get_EffectMaxLayer_5() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA4E8))(this);
	}
	template <typename T = void> T set_EffectMaxLayer_5(int32_t value) {
		return ((T (*)(WeaponSkillConfConfig*, int32_t))(Il2CppBase() + 0x30FB234))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClientEffectParam_5() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA4F0))(this);
	}
	template <typename T = void> T set_ClientEffectParam_5(Il2CppString* value) {
		return ((T (*)(WeaponSkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FB23C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClientSkillParam() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FA2AC))(this);
	}
	template <typename T = void> T set_ClientSkillParam(Il2CppString* value) {
		return ((T (*)(WeaponSkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FB244))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WeaponSkillConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30FB24C))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(WeaponSkillConfConfig*))(Il2CppBase() + 0x30FB8FC))(this);
	}

};

}
